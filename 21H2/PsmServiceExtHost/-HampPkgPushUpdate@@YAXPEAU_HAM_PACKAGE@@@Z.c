/*
 * XREFs of ?HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180023C00
 * Callers:
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001BC40 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x180023910 (-HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z.c)
 *     ?HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180025E58 (-HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180034AC8 (-HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 * Callees:
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180025F70 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

void __fastcall HampPkgPushUpdate(struct _HAM_PACKAGE *a1)
{
  DWORD v2; // esi
  _QWORD *Value; // rdi
  _QWORD *v4; // rax
  bool v5; // zf
  DWORD v6; // ebp
  _QWORD *v7; // rsi
  int v8; // eax
  DWORD v9; // ecx
  _QWORD *v10; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = HampLockTrackerId;
  v11 = 0LL;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
      __int2c();
    *Value |= 0x40uLL;
    ++Value[7];
  }
  RtlAcquireSRWLockExclusive((char *)a1 + 304);
  *((_DWORD *)a1 + 78) = GetCurrentThreadId();
  *((_DWORD *)a1 + 85) |= 0x10u;
  if ( (*((_BYTE *)a1 + 340) & 8) != 0 )
    goto LABEL_27;
  if ( HampLockTrackerId != -1 )
  {
    v4 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v4 & 0x40) == 0 )
      __int2c();
    v5 = v4[7]-- == 1LL;
    if ( v5 )
      *v4 &= ~0x40uLL;
  }
  *((_DWORD *)a1 + 78) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 304);
  if ( (int)TpAllocWork(&v11, HampPkgUpdateWorker, a1, 0LL) >= 0 )
  {
    v6 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v7 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v6) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
        __int2c();
      *v7 |= 0x40uLL;
      ++v7[7];
    }
    RtlAcquireSRWLockExclusive((char *)a1 + 304);
    *((_DWORD *)a1 + 78) = GetCurrentThreadId();
    v8 = *((_DWORD *)a1 + 85);
    if ( (v8 & 8) == 0 )
    {
      v9 = HampLockTrackerId;
      *((_DWORD *)a1 + 85) = v8 | 8;
      if ( v9 != -1 )
      {
        v10 = TlsGetValue(v9);
        if ( (*(_BYTE *)v10 & 0x40) == 0 )
          __int2c();
        v5 = v10[7]-- == 1LL;
        if ( v5 )
          *v10 &= ~0x40uLL;
      }
      *((_DWORD *)a1 + 78) = 0;
      RtlReleaseSRWLockExclusive((char *)a1 + 304);
      if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
        __fastfail(0xEu);
      TpPostWork(v11);
      goto LABEL_24;
    }
LABEL_27:
    HampPkgReleaseLockExclusive(a1);
  }
LABEL_24:
  if ( v11 )
    TpReleaseWork();
}
