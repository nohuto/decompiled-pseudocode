/*
 * XREFs of ?HampActInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY@@@Z @ 0x180011370
 * Callers:
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x180011850 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 * Callees:
 *     memset_0 @ 0x18004651A (memset_0.c)
 */

void __fastcall HampActInitialize(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _HAM_ACTIVITY_PROPERTIES *a2,
        struct _RM_HAM_ACTIVITY_HOST *a3,
        struct _HAM_ACTIVITY *a4)
{
  signed __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rcx
  __int128 v11; // xmm0
  __int64 v12; // rax
  DWORD v13; // edi
  _QWORD *Value; // rbx
  __int64 v15; // rax
  _QWORD *v16; // rax

  memset_0((char *)a4 + 40, 0, 0x200uLL);
  *(_QWORD *)a4 = 0LL;
  *((_QWORD *)a4 + 1) = 0LL;
  *((_QWORD *)a4 + 3) = 1LL;
  *((_QWORD *)a4 + 2) = -1LL;
  *((_QWORD *)a4 + 4) = (char *)a1 + 216;
  v8 = _InterlockedIncrement64(&qword_1800B41E8);
  if ( (v8 & 0xFE00000000000000uLL) != 0 )
    __fastfail(0xC0000095);
  *((_WORD *)a4 + 274) = 1536;
  v9 = 3LL;
  *((_QWORD *)a4 + 5) = v8 | 0x1A00000000000000LL;
  v10 = (_QWORD *)((char *)a4 + 112);
  do
  {
    v10 += 16;
    v11 = *(_OWORD *)a2;
    a2 = (struct _HAM_ACTIVITY_PROPERTIES *)((char *)a2 + 128);
    *((_OWORD *)v10 - 8) = v11;
    *((_OWORD *)v10 - 7) = *((_OWORD *)a2 - 7);
    *((_OWORD *)v10 - 6) = *((_OWORD *)a2 - 6);
    *((_OWORD *)v10 - 5) = *((_OWORD *)a2 - 5);
    *((_OWORD *)v10 - 4) = *((_OWORD *)a2 - 4);
    *((_OWORD *)v10 - 3) = *((_OWORD *)a2 - 3);
    *((_OWORD *)v10 - 2) = *((_OWORD *)a2 - 2);
    *((_OWORD *)v10 - 1) = *((_OWORD *)a2 - 1);
    --v9;
  }
  while ( v9 );
  v12 = *(_QWORD *)a2;
  v13 = HampLockTrackerId;
  *v10 = v12;
  if ( v13 != -1 )
  {
    Value = TlsGetValue(v13);
    if ( *(_QWORD *)TlsGetValue(v13) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800B4218 = GetCurrentThreadId();
  v15 = *((_QWORD *)a3 + 74);
  if ( !v15 )
    __int2c();
  if ( *((int *)a3 - 10) >= 0 )
    *((_QWORD *)a3 + 74) = v15 + 1;
  *((_QWORD *)a4 + 10) = a3;
  dword_1800B4218 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v16 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v16 & 1) == 0 )
      __int2c();
    if ( v16[1]-- == 1LL )
      *v16 &= ~1uLL;
  }
}
