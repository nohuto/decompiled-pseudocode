/*
 * XREFs of ?HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180020030
 * Callers:
 *     <none>
 * Callees:
 *     ?HampWakeContextComputeNextState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@T_HAM_HOST_WAKE_CONTEXT_EVENTS@@PEAU_HAM_HOST_WAKE_CONTEXT_WORKER_STATE@@@Z @ 0x180020860 (-HampWakeContextComputeNextState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@T_HAM_HOST_WAKE_CONTEXT_EVENTS@.c)
 *     CemRcObjectDereference @ 0x180027240 (CemRcObjectDereference.c)
 *     ?HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180032470 (-HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_AC.c)
 *     ?HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18003433C (-HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeManagerReleaseLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x1800343C0 (-HampWakeManagerReleaseLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x1800343F4 (-HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeContextDestroy@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x1800347A8 (-HampWakeContextDestroy@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180034C3C (-HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K.c)
 *     ?HampWakeContextTreeCompareByActivityId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180037218 (-HampWakeContextTreeCompareByActivityId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     memset_0 @ 0x18004651A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HampWakeContextWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  DWORD v3; // edi
  _QWORD *Value; // rsi
  DWORD CurrentThreadId; // eax
  unsigned __int8 v7; // si
  DWORD v8; // ecx
  _QWORD *v9; // rax
  char v10; // si
  unsigned __int64 v11; // r15
  __int128 v12; // xmm1
  __int64 v13; // xmm0_8
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  DWORD v17; // r14d
  _QWORD *v18; // rsi
  DWORD v19; // eax
  DWORD v20; // ecx
  char v21; // si
  _QWORD *v22; // rax
  DWORD v23; // r14d
  _QWORD *v24; // rsi
  _QWORD *v25; // rax
  DWORD v26; // r14d
  _QWORD *v27; // rsi
  char v28; // al
  DWORD v29; // ecx
  _QWORD *v30; // rax
  signed __int64 v31; // rax
  signed __int64 v32; // rcx
  bool v33; // zf
  signed __int64 v34; // rtt
  DWORD v35; // ebx
  __int64 v36; // rdx
  _WORD *v37; // rcx
  __int16 v38; // ax
  __int64 v39; // rdx
  _WORD *v40; // rcx
  __int16 v41; // ax
  __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r15
  __int64 v46; // rax
  __int64 v47; // rsi
  int v48; // r14d
  unsigned __int64 v49; // rax
  __int64 v50; // rcx
  unsigned __int64 v51; // rdi
  signed __int64 v52; // r13
  bool v53; // cc
  signed __int64 v54; // r13
  __int128 v55; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v56; // [rsp+30h] [rbp-D0h]
  __int64 v57; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v58; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD TlsValue[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v60; // [rsp+D0h] [rbp-30h]
  int v61; // [rsp+E0h] [rbp-20h] BYREF
  int v62; // [rsp+E4h] [rbp-1Ch]
  int v63; // [rsp+E8h] [rbp-18h]
  _BYTE v64[128]; // [rsp+ECh] [rbp-14h] BYREF
  _BYTE v65[128]; // [rsp+16Ch] [rbp+6Ch] BYREF
  int v66; // [rsp+1ECh] [rbp+ECh]
  int v67; // [rsp+1F4h] [rbp+F4h]
  char v68[40]; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v69; // [rsp+220h] [rbp+120h]
  __int64 v70; // [rsp+228h] [rbp+128h]
  __int64 v71; // [rsp+230h] [rbp+130h]
  __int64 v72; // [rsp+238h] [rbp+138h]
  __int64 v73; // [rsp+240h] [rbp+140h]
  int v74; // [rsp+250h] [rbp+150h]

  v3 = HampLockTrackerId;
  v60 = 0LL;
  memset(TlsValue, 0, sizeof(TlsValue));
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v3, TlsValue);
    v3 = HampLockTrackerId;
  }
  if ( *((_QWORD *)a2 + 3) )
  {
    if ( v3 != -1 )
    {
      Value = TlsGetValue(v3);
      if ( (*(_QWORD *)TlsGetValue(v3) & 0xFFFFFFFFFFFFF800uLL) != 0 )
        __int2c();
      *Value |= 0x800uLL;
      ++Value[12];
    }
    RtlAcquireSRWLockExclusive(a2 + 40);
    *((_DWORD *)a2 + 12) = GetCurrentThreadId();
    CurrentThreadId = GetCurrentThreadId();
    v7 = a2[185];
    for ( *((_DWORD *)a2 + 45) = CurrentThreadId; v7; v7 = a2[185] )
    {
      v8 = HampLockTrackerId;
      a2[185] = 0;
      if ( v8 != -1 )
      {
        v9 = TlsGetValue(v8);
        if ( (*(_DWORD *)v9 & 0x800LL) == 0 )
          __int2c();
        v33 = v9[12]-- == 1LL;
        if ( v33 )
          *v9 &= ~0x800uLL;
      }
      *((_DWORD *)a2 + 12) = 0;
      RtlReleaseSRWLockExclusive(a2 + 40);
      if ( ((unsigned __int8)a2[160] & (v7 >> 1) & 2) != 0 )
      {
        HampWakeContextCloseActivity((struct _HAM_HOST_WAKE_CONTEXT *)a2);
        *((_QWORD *)a2 + 16) = 0LL;
      }
      HampWakeContextComputeNextState(a2, v7, &v55);
      v10 = v57;
      if ( ((a2[160] & 2) != 0) != ((v57 & 2) != 0) )
      {
        if ( (v57 & 2) == 0 )
        {
          HampWakeContextCloseActivity((struct _HAM_HOST_WAKE_CONTEXT *)a2);
LABEL_95:
          v56 = 0uLL;
          LOBYTE(v57) = v10 & 0xFD;
          goto LABEL_19;
        }
        memset_0(&v61, 0, 0x188uLL);
        v61 = 8397888;
        v36 = 64LL;
        v37 = v64;
        while ( v36 != -2147483582 )
        {
          v38 = *(_WORD *)((char *)v37 + (char *)L"WakeReference" - v64);
          if ( !v38 )
            break;
          *v37++ = v38;
          if ( !--v36 )
          {
            --v37;
            break;
          }
        }
        *v37 = 0;
        v39 = 64LL;
        v40 = v65;
        while ( v39 != -2147483582 )
        {
          v41 = *(_WORD *)((char *)v40 + &unk_180095550 - (_UNKNOWN *)v65);
          if ( !v41 )
            break;
          *v40++ = v41;
          if ( !--v39 )
          {
            --v40;
            break;
          }
        }
        *v40 = 0;
        v66 = 5;
        memset_0(v68, 0, 0x68uLL);
        v42 = *((_QWORD *)a2 + 7);
        v61 |= 0x42400u;
        v62 |= 4u;
        v63 |= 8u;
        v43 = *((_QWORD *)a2 + 21);
        v67 = 0;
        v70 = 0LL;
        v71 = 0LL;
        v72 = 0LL;
        v73 = 0LL;
        v69 = 175LL;
        v74 = 0;
        if ( (int)HamSrvCreateActivityInternal(
                    *(struct _HAM_CLIENT_CONTEXT **)(v42 + 8),
                    v43,
                    (struct _HAM_ACTIVITY_PROPERTIES *)&v61,
                    (unsigned __int64 *)a2 + 11) < 0 )
          goto LABEL_95;
        HampWakeManagerAcquireLockExclusive(*((struct _HAM_WAKE_REFERENCE_MANAGER **)a2 + 7));
        if ( _InterlockedIncrement64((volatile signed __int64 *)a2 + 3) <= 1 )
          __fastfail(0xEu);
        v45 = *((_QWORD *)a2 + 7);
        v46 = *(_QWORD *)(v45 + 88);
        if ( (v46 & 1) != 0 )
        {
          v50 = *(_QWORD *)(v45 + 80);
          if ( v50 )
            v47 = v50 ^ (v45 + 80);
          else
            v47 = 0LL;
        }
        else
        {
          v47 = *(_QWORD *)(v45 + 80);
        }
        LOBYTE(v44) = 0;
        v48 = v46 & 1;
        if ( v47 )
        {
          while ( 1 )
          {
            if ( (int)HampWakeContextTreeCompareByActivityId(a2 + 88, (struct _RTL_BALANCED_NODE *)v47) < 0 )
            {
              v49 = *(_QWORD *)v47;
              if ( v48 )
              {
                if ( !v49 )
                  goto LABEL_93;
                v49 ^= v47;
              }
              if ( !v49 )
              {
LABEL_93:
                LOBYTE(v44) = 0;
                break;
              }
            }
            else
            {
              v49 = *(_QWORD *)(v47 + 8);
              if ( v48 )
              {
                if ( !v49 )
                  goto LABEL_96;
                v49 ^= v47;
              }
              if ( !v49 )
              {
LABEL_96:
                LOBYTE(v44) = 1;
                break;
              }
            }
            v47 = v49;
          }
        }
        RtlRbInsertNodeEx(v45 + 80, v47, v44, a2 + 64);
        HampWakeManagerReleaseLockExclusive(*((struct _HAM_WAKE_REFERENCE_MANAGER **)a2 + 7));
        if ( (int)HamSrvStartActivityAsync(*(_QWORD *)(*((_QWORD *)a2 + 7) + 8LL), *((_QWORD *)a2 + 11), 0LL, 0LL) < 0 )
        {
          HampWakeContextCloseActivity((struct _HAM_HOST_WAKE_CONTEXT *)a2);
          LOBYTE(v57) = v57 & 0xFD;
          v56 = 0uLL;
        }
      }
LABEL_19:
      v11 = -1LL;
      v12 = v56;
      *((_OWORD *)a2 + 8) = v55;
      v13 = v57;
      *((_OWORD *)a2 + 9) = v12;
      *((_QWORD *)a2 + 20) = v13;
      v14 = *((_QWORD *)a2 + 18);
      v15 = *((_QWORD *)a2 + 17);
      if ( v15 < v14 && v14 != -1LL )
        v11 = *((_QWORD *)a2 + 18);
      v16 = *((_QWORD *)a2 + 19);
      if ( v15 < v16 && v16 < v11 )
        v11 = *((_QWORD *)a2 + 19);
      TpWaitForTimer(*((_QWORD *)a2 + 13), 1LL);
      v17 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        v18 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v17) & 0xFFFFFFFFFFFFF800uLL) != 0 )
          __int2c();
        *v18 |= 0x800uLL;
        ++v18[12];
      }
      RtlAcquireSRWLockExclusive(a2 + 40);
      v19 = GetCurrentThreadId();
      v20 = HampLockTrackerId;
      *((_DWORD *)a2 + 12) = v19;
      v21 = a2[184];
      a2[184] = v21 & 0xFB;
      if ( v20 != -1 )
      {
        v22 = TlsGetValue(v20);
        if ( (*(_DWORD *)v22 & 0x800LL) == 0 )
          __int2c();
        v33 = v22[12]-- == 1LL;
        if ( v33 )
          *v22 &= ~0x800uLL;
      }
      *((_DWORD *)a2 + 12) = 0;
      RtlReleaseSRWLockExclusive(a2 + 40);
      if ( (v21 & 4) != 0 )
        CemRcObjectDereference(a2);
      if ( v11 != -1LL )
      {
        v23 = HampLockTrackerId;
        v58 = *((_QWORD *)a2 + 17) - v11;
        if ( HampLockTrackerId != -1 )
        {
          v24 = TlsGetValue(HampLockTrackerId);
          if ( (*(_QWORD *)TlsGetValue(v23) & 0xFFFFFFFFFFFFF800uLL) != 0 )
            __int2c();
          *v24 |= 0x800uLL;
          ++v24[12];
        }
        RtlAcquireSRWLockExclusive(a2 + 40);
        *((_DWORD *)a2 + 12) = GetCurrentThreadId();
        a2[184] |= 4u;
        if ( _InterlockedIncrement64((volatile signed __int64 *)a2 + 3) <= 1 )
          __fastfail(0xEu);
        if ( HampLockTrackerId != -1 )
        {
          v25 = TlsGetValue(HampLockTrackerId);
          if ( (*(_DWORD *)v25 & 0x800LL) == 0 )
            __int2c();
          v33 = v25[12]-- == 1LL;
          if ( v33 )
            *v25 &= ~0x800uLL;
        }
        *((_DWORD *)a2 + 12) = 0;
        RtlReleaseSRWLockExclusive(a2 + 40);
        TpSetTimerEx(*((_QWORD *)a2 + 13), &v58, 0LL, 0LL);
      }
      v26 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        v27 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v26) & 0xFFFFFFFFFFFFF800uLL) != 0 )
          __int2c();
        *v27 |= 0x800uLL;
        ++v27[12];
      }
      RtlAcquireSRWLockExclusive(a2 + 40);
      *((_DWORD *)a2 + 12) = GetCurrentThreadId();
      if ( (a2[160] & 1) != 0 )
      {
        v28 = a2[184] | 2;
        goto LABEL_53;
      }
    }
    v28 = a2[184];
LABEL_53:
    v29 = HampLockTrackerId;
    *((_DWORD *)a2 + 45) = 0;
    a2[184] = v28 & 0xFE;
    if ( v29 != -1 )
    {
      v30 = TlsGetValue(v29);
      if ( (*(_DWORD *)v30 & 0x800LL) == 0 )
        __int2c();
      v33 = v30[12]-- == 1LL;
      if ( v33 )
        *v30 &= ~0x800uLL;
    }
    *((_DWORD *)a2 + 12) = 0;
    RtlReleaseSRWLockExclusive(a2 + 40);
    _m_prefetchw(a2 + 24);
    v31 = *((_QWORD *)a2 + 3);
    v32 = v31 - 1;
    v33 = v31 == 1;
    if ( v31 - 1 <= 0 )
    {
LABEL_109:
      if ( !v33 )
        __fastfail(0xEu);
      v51 = *((_QWORD *)a2 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *((_QWORD *)a2 + 2) == -1LL )
      {
        if ( _InterlockedDecrement64((volatile signed __int64 *)a2 + 3) <= -1 )
          __fastfail(0xEu);
        (*(void (__fastcall **)(char *))(v51 + 24))(a2);
      }
      else
      {
        RtlAcquireSRWLockExclusive(v51 + 16);
        v52 = _InterlockedExchangeAdd64((volatile signed __int64 *)a2 + 3, 0xFFFFFFFFFFFFFFFFuLL);
        v53 = v52 <= 1;
        v54 = v52 - 1;
        if ( v53 )
        {
          if ( v54 )
            __fastfail(0xEu);
          RtlReleaseSRWLockExclusive(v51 + 16);
          (*(void (__fastcall **)(char *))(v51 + 24))(a2);
        }
        else
        {
          RtlReleaseSRWLockExclusive(v51 + 16);
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v34 = v31;
        v31 = _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 3, v32, v31);
        if ( v34 == v31 )
          break;
        v32 = v31 - 1;
        v33 = v31 == 1;
        if ( v31 - 1 <= 0 )
          goto LABEL_109;
      }
    }
  }
  else
  {
    HampWakeContextDestroy((struct _HAM_HOST_WAKE_CONTEXT *)a2);
  }
  v35 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v35, 0LL);
  }
}
