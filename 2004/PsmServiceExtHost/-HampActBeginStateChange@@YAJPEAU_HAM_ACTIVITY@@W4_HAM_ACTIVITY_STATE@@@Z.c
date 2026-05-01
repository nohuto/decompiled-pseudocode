/*
 * XREFs of ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x1800222F0
 * Callers:
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180006E44 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180017F70 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180020CE0 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18000351C (-HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampHostCheckWaitEnterDependencyStateChange@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180003604 (-HampHostCheckWaitEnterDependencyStateChange@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009D90 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180017CF0 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

__int64 __fastcall HampActBeginStateChange(__int64 a1, unsigned __int8 a2)
{
  DWORD v2; // esi
  __int64 v4; // r14
  __int64 v5; // r15
  _QWORD *Value; // rdi
  unsigned int v7; // edx
  struct _HAM_DEPENDENCY_GROUP *v8; // rsi
  int v9; // r8d
  unsigned int v10; // edi
  int v11; // eax
  int v12; // r12d
  int v14; // r8d
  __int64 v15; // rdi
  DWORD v16; // r14d
  _QWORD *v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 *v20; // rcx
  int v21; // r14d
  _QWORD *v22; // rax
  unsigned int v25; // ebx
  char v26; // [rsp+30h] [rbp-59h] BYREF
  char v27; // [rsp+31h] [rbp-58h] BYREF
  char v28; // [rsp+32h] [rbp-57h] BYREF
  __int64 v29; // [rsp+38h] [rbp-51h] BYREF
  int v30; // [rsp+40h] [rbp-49h]
  __int64 v31; // [rsp+44h] [rbp-45h]
  int v32; // [rsp+4Ch] [rbp-3Dh]
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v34; // [rsp+70h] [rbp-19h]
  __int64 v35; // [rsp+78h] [rbp-11h]
  char *v36; // [rsp+80h] [rbp-9h]
  __int64 v37; // [rsp+88h] [rbp-1h]
  char *v38; // [rsp+90h] [rbp+7h]
  __int64 v39; // [rsp+98h] [rbp+Fh]
  char *v40; // [rsp+A0h] [rbp+17h]
  __int64 v41; // [rsp+A8h] [rbp+1Fh]

  v2 = HampLockTrackerId;
  v4 = *(_QWORD *)(a1 + 80);
  v5 = a2;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(v4);
  *(_DWORD *)(v4 + 8) = GetCurrentThreadId();
  if ( *(_QWORD *)(a1 + 72) && *(_QWORD *)(a1 + 64) )
    v8 = HampHostCheckWaitEnterDependencyStateChange((struct _RM_HAM_ACTIVITY_HOST *)v4, v7);
  else
    v8 = 0LL;
  v9 = *(_DWORD *)(a1 + 544);
  if ( (v9 & 1) != 0 )
  {
    v25 = -1073740682;
  }
  else
  {
    v10 = *(unsigned __int8 *)(a1 + 548);
    v30 = 12;
    v31 = 2LL;
    v32 = 14;
    v11 = *((_DWORD *)&v29 + v5 + 1);
    if ( _bittest(&v11, v10) )
    {
      v12 = 1;
      if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
      {
        v26 = *(_BYTE *)(a1 + 549);
        v29 = *(_QWORD *)(a1 + 40);
        v27 = v10;
        v40 = &v26;
        v38 = &v27;
        v36 = &v28;
        v34 = &v29;
        v28 = v5;
        v41 = 1LL;
        v39 = 1LL;
        v37 = 1LL;
        v35 = 8LL;
        tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3218, (int)&dword_1800A1C35, 0, 0, 6u, &v33);
        v9 = *(_DWORD *)(a1 + 544);
      }
      v14 = v9 | 1;
      *(_BYTE *)(a1 + 548) = v5;
      *(_DWORD *)(a1 + 544) = v14;
      if ( (_BYTE)v10 != 1 )
      {
        if ( (_BYTE)v10 == 2 )
        {
          HampActSetPendState(a1, 6u);
          goto LABEL_16;
        }
        if ( (unsigned __int8)v10 <= 2u || (unsigned __int8)v10 > 4u )
          goto LABEL_16;
      }
      *(_DWORD *)(a1 + 544) = v14 & 0xFFFFFFEF;
LABEL_16:
      if ( v8 )
      {
        *(_DWORD *)(a1 + 544) |= 2u;
      }
      else
      {
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 688LL);
        if ( v15 && !*(_QWORD *)(a1 + 72) && (*(_BYTE *)(a1 + 544) & 2) == 0 )
        {
          v16 = HampLockTrackerId;
          if ( HampLockTrackerId != -1 )
          {
            v17 = TlsGetValue(HampLockTrackerId);
            if ( (*(_QWORD *)TlsGetValue(v16) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
              __int2c();
            *v17 |= 8uLL;
            ++v17[4];
          }
          RtlAcquireSRWLockExclusive(v15 + 8);
          *(_DWORD *)(v15 + 16) = GetCurrentThreadId();
          v18 = *(_QWORD *)(a1 + 80);
          v19 = *(_QWORD *)(v15 + 112) + 1LL;
          *(_QWORD *)(v15 + 112) = v19;
          v20 = (__int64 *)(v18 + 616);
          if ( v20 )
            *v20 = v19;
          if ( *(_DWORD *)(v15 + 128) )
          {
            v21 = 0;
          }
          else
          {
            if ( _InterlockedIncrement64((volatile signed __int64 *)(v15 + 96)) <= 1 )
              __fastfail(0xEu);
            *(_DWORD *)(v15 + 128) = GetCurrentThreadId();
            v21 = 1;
          }
          if ( *(_DWORD *)(v15 + 128) != GetCurrentThreadId() )
            v12 = 0;
          if ( v21 != v12 )
            __int2c();
          *(_DWORD *)(a1 + 544) &= ~2u;
          *(_DWORD *)(a1 + 544) |= 2 * v21;
          *(_DWORD *)(v15 + 16) = 0;
          RtlReleaseSRWLockExclusive(v15 + 8);
          if ( HampLockTrackerId != -1 )
          {
            v22 = TlsGetValue(HampLockTrackerId);
            if ( (*(_BYTE *)v22 & 8) == 0 )
              __int2c();
            if ( v22[4]-- == 1LL )
              *v22 &= ~8uLL;
          }
        }
      }
      return 0LL;
    }
    v25 = -1073700861;
  }
  HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v4);
  if ( v8 )
    HampDepGroupRunStateChangeWorker(v8);
  return v25;
}
