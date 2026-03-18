/*
 * XREFs of VidSchiReportHwHang @ 0x1C0044C40
 * Callers:
 *     VidSchWaitForCompletionEvent @ 0x1C00937C4 (VidSchWaitForCompletionEvent.c)
 *     VidSchiCheckHwProgress @ 0x1C00978E0 (VidSchiCheckHwProgress.c)
 * Callees:
 *     VidSchiCheckFlipQueueTimeout @ 0x1C000AD90 (VidSchiCheckFlipQueueTimeout.c)
 *     VidSchiIncrementContextReference @ 0x1C00130A0 (VidSchiIncrementContextReference.c)
 *     VidSchiDecrementContextReference @ 0x1C0013610 (VidSchiDecrementContextReference.c)
 *     VidSchiClearFlipDevice @ 0x1C00147A8 (VidSchiClearFlipDevice.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     VidSchiUnwaitAllContexts @ 0x1C003ADB8 (VidSchiUnwaitAllContexts.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C0044610 (VidSchiCompleteAllPendingCommand.c)
 *     VidSchiCheckGPUTimeout @ 0x1C00F2EE0 (VidSchiCheckGPUTimeout.c)
 *     VidSchiBlockDriverCallback @ 0x1C00F6DDC (VidSchiBlockDriverCallback.c)
 *     VidSchiMarkTdrFaultingDevice @ 0x1C00F6E84 (VidSchiMarkTdrFaultingDevice.c)
 */

__int64 __fastcall VidSchiReportHwHang(KSPIN_LOCK *a1, __int64 a2, int a3, KSPIN_LOCK a4)
{
  int v8; // r12d
  KSPIN_LOCK v9; // r8
  KSPIN_LOCK *v11; // r8
  KSPIN_LOCK v12; // r14
  signed __int64 v13; // rbx
  signed __int64 v14; // r13
  signed __int64 v15; // rsi
  signed __int64 v16; // rax
  __int64 v17; // r13
  KSPIN_LOCK v18; // rcx
  __int64 v19; // rdi
  ULONG TimeIncrement; // eax
  ULONG v21; // r12d
  __int64 v22; // r14
  LARGE_INTEGER v23; // r13
  __int64 v24; // rbx
  struct _TDR_RECOVERY_CONTEXT *RecoveryContext; // rax
  struct _VIDSCH_GLOBAL *v26; // r15
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  struct _VIDSCH_CONTEXT *v30; // rdi
  __int64 v31; // r13
  _BYTE *v32; // r9
  __int64 v33; // rdx
  _BYTE *v34; // rcx
  char v35; // al
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // r8
  char v39; // al
  _BYTE *v40; // rax
  __int64 v41; // rcx
  int DriverVersion; // eax
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  _BYTE *v49; // r8
  __int64 v50; // rdx
  _BYTE *v51; // rcx
  __int64 v52; // rdx
  char v53; // al
  _BYTE *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  bool IsRecoveryRequired; // al
  __int64 v59; // rdx
  unsigned int v60; // ebx
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // rdx
  __int64 v64; // rax
  bool v65; // cf
  __int64 v66; // rax
  unsigned int v67; // ebx
  signed __int32 v68[8]; // [rsp+0h] [rbp-A9h] BYREF
  __int64 v69; // [rsp+30h] [rbp-79h] BYREF
  signed __int64 v70; // [rsp+38h] [rbp-71h]
  int v71; // [rsp+40h] [rbp-69h] BYREF
  int v72; // [rsp+44h] [rbp-65h]
  struct _VIDSCH_CONTEXT *v73; // [rsp+48h] [rbp-61h]
  int v74; // [rsp+50h] [rbp-59h]
  __int64 v75; // [rsp+58h] [rbp-51h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+60h] [rbp-49h] BYREF
  __int64 v77; // [rsp+68h] [rbp-41h]
  unsigned __int64 v78; // [rsp+70h] [rbp-39h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-31h] BYREF
  struct _VIDSCH_GLOBAL *v80; // [rsp+90h] [rbp-19h] BYREF
  int v81; // [rsp+98h] [rbp-11h]
  PVOID BackTrace[2]; // [rsp+A0h] [rbp-9h] BYREF
  __int128 v83; // [rsp+B0h] [rbp+7h]
  __int64 v84; // [rsp+C0h] [rbp+17h]

  LODWORD(v69) = -1;
  v74 = a3;
  v80 = (struct _VIDSCH_GLOBAL *)a1;
  v73 = 0LL;
  v77 = 0LL;
  v70 = 0LL;
  v75 = 0LL;
  v71 = 0;
  v78 = 0LL;
  v72 = 0;
  v8 = 0;
  v84 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  *(_OWORD *)BackTrace = 0LL;
  v83 = 0LL;
  RtlCaptureStackBackTrace(1u, 5u, BackTrace, 0LL);
  WdLogSingleEntry5(3LL, BackTrace[0], BackTrace[1], v83, *((_QWORD *)&v83 + 1), v84);
  v9 = a1[377];
  if ( v9 )
  {
    WdLogSingleEntry2(3LL, a1[2], v9);
    return 1LL;
  }
  if ( a3 == 1 || (unsigned int)(a3 - 9) <= 2 )
  {
    if ( !a4 )
      a4 = *(_QWORD *)a1[79];
    a1[378] = a4;
    v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 96), 0LL, 0LL);
    goto LABEL_30;
  }
  if ( a3 != 2 )
  {
    if ( a3 == 3 )
    {
      KeFlushQueuedDpcs();
      if ( !(unsigned int)VidSchiCheckFlipQueueTimeout(a1, &v71, &v78, 0LL, (unsigned int *)&v69) )
        return 0LL;
      if ( (unsigned int)v69 < 0x10 )
      {
        KeAcquireInStackQueuedSpinLock(a1 + 216, &LockHandle);
        v18 = a1[(unsigned int)v69 + 400];
        if ( v18 )
          v72 = *(_DWORD *)(v18 + 78576);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
    }
    v15 = v70;
    goto LABEL_30;
  }
  KeFlushQueuedDpcs();
  if ( !*((_DWORD *)a1 + 182) )
    return 0LL;
  v11 = a1 + 378;
  if ( !a4 )
  {
    if ( (unsigned int)VidSchiCheckGPUTimeout(a1, 0LL, v11) )
      goto LABEL_10;
    return 0LL;
  }
  *v11 = a4;
LABEL_10:
  v12 = a1[378];
  if ( !*(_DWORD *)(v12 + 2896) )
    return 0LL;
  v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 96), 0LL, 0LL);
  v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 120), 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock(a1 + 216, &LockHandle);
  v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 96), 0LL, 0LL);
  v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 120), 0LL, 0LL);
  if ( v13 == v15 && v14 == v16 )
  {
    v75 = *(_QWORD *)(v12 + 40);
    v17 = *(_QWORD *)(v12 + 8LL * *(unsigned int *)(v12 + 1560) + 1568);
    v73 = (struct _VIDSCH_CONTEXT *)v17;
    if ( v17 )
    {
      VidSchiIncrementContextReference(v17);
      v77 = *(_QWORD *)(v17 + 104);
    }
    ++*(_DWORD *)(v12 + 492);
  }
  else
  {
    v15 = v70;
    v8 = 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v8 )
    return 0LL;
LABEL_30:
  ++*((_DWORD *)a1 + 758);
  LODWORD(v70) = 0;
  v19 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  PerformanceFrequency.QuadPart = 0LL;
  v21 = TimeIncrement;
  v22 = v19 - a2;
  v23 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v24 = MEMORY[0xFFFFF78000000014];
  RecoveryContext = TdrCreateRecoveryContext();
  v26 = v80;
  *((_QWORD *)v80 + 377) = RecoveryContext;
  WdLogSingleEntry5(3LL, *((_QWORD *)v26 + 2), v19, v21, KeGetCurrentThread(), RecoveryContext);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry4)(
    3LL,
    *((_QWORD *)v26 + 2),
    (LARGE_INTEGER)v23.QuadPart,
    (union _LARGE_INTEGER)PerformanceFrequency.QuadPart,
    v24);
  v27 = *((_QWORD *)v26 + 377);
  if ( !v27 )
    goto LABEL_91;
  *(_DWORD *)(v27 + 16) = v74;
  v28 = *(_QWORD *)(v27 + 32);
  *(_QWORD *)(v27 + 8) = (char *)v26 + 3012;
  if ( !v28 )
  {
    v29 = *((_QWORD *)v26 + 2);
    *(_QWORD *)(v27 + 32) = v29;
    _InterlockedIncrement64((volatile signed __int64 *)(v29 + 24));
    *(_QWORD *)(v27 + 40) = -1LL;
    v28 = *(_QWORD *)(v27 + 32);
  }
  ++*(_DWORD *)(v28 + 2888);
  v30 = v73;
  if ( !*(_QWORD *)(v27 + 48) && v73 )
  {
    VidSchiIncrementContextReference((__int64)v73);
    *(_QWORD *)(v27 + 48) = v30;
  }
  v31 = 15LL;
  if ( v26 != (struct _VIDSCH_GLOBAL *)-3037LL )
  {
    v32 = (_BYTE *)(v27 + 2821);
    v33 = 15LL;
    v34 = (_BYTE *)(v27 + 2821);
    do
    {
      if ( v33 == -2147483631 )
        break;
      v35 = v34[(_QWORD)((char *)v26 - v27 + 216)];
      if ( !v35 )
        break;
      *v34++ = v35;
      --v33;
    }
    while ( v33 );
    goto LABEL_50;
  }
  if ( !v77 )
    goto LABEL_54;
  v36 = *(_QWORD *)(v77 + 40);
  if ( !v36 || !*(_QWORD *)(v36 + 8) )
    goto LABEL_54;
  v32 = (_BYTE *)(v27 + 2821);
  *(_QWORD *)(v27 + 2808) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v30 + 13) + 40LL) + 8LL) + 64LL)
                                      + 80LL);
  v37 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v30 + 13) + 40LL) + 2648LL);
  if ( v37 )
  {
    v33 = 15LL;
    v34 = (_BYTE *)(v27 + 2821);
    v38 = v37 - (_QWORD)v32;
    do
    {
      if ( v33 == -2147483631 )
        break;
      v39 = v34[v38];
      if ( !v39 )
        break;
      *v34++ = v39;
      --v33;
    }
    while ( v33 );
LABEL_50:
    v40 = v34 - 1;
    if ( v33 )
      v40 = v34;
    *v40 = 0;
    if ( v33 )
      goto LABEL_54;
  }
  *v32 = 0;
LABEL_54:
  v41 = *(_QWORD *)(v27 + 32);
  *(_DWORD *)(v27 + 144) = 61443;
  DriverVersion = DpiGetDriverVersion(*(_QWORD *)(v41 + 216));
  *(_QWORD *)(v27 + 24) = v22;
  *(_DWORD *)(v27 + 148) = DriverVersion;
  v43 = *((_QWORD *)v26 + 378);
  if ( v43 )
    v44 = *(unsigned __int16 *)(v43 + 4);
  else
    v44 = 0;
  v45 = (unsigned int)v69;
  *(_DWORD *)(v27 + 56) = v44;
  *(_QWORD *)(v27 + 72) = v75;
  *(_DWORD *)(v27 + 88) = v71;
  *(_QWORD *)(v27 + 96) = v78;
  *(_QWORD *)(v27 + 64) = v15;
  *(_DWORD *)(v27 + 80) = v45;
  if ( (_DWORD)v45 != -1 )
  {
    v46 = *((_QWORD *)v26 + v45 + 400);
    if ( v46 )
    {
      v47 = *(_QWORD *)(v46 + 16);
      if ( v47 )
      {
        v48 = *(_QWORD *)(v47 + 40);
        if ( v48 )
        {
          v49 = (_BYTE *)(v27 + 2821);
          *(_QWORD *)(v27 + 2808) = *(_QWORD *)(v48 + 2640);
          v50 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v26 + v45 + 400) + 16LL) + 40LL) + 2648LL);
          if ( !v50 )
            goto LABEL_69;
          v51 = (_BYTE *)(v27 + 2821);
          v52 = v50 - (_QWORD)v49;
          do
          {
            if ( v31 == -2147483631 )
              break;
            v53 = v51[v52];
            if ( !v53 )
              break;
            *v51++ = v53;
            --v31;
          }
          while ( v31 );
          v54 = v51 - 1;
          if ( v31 )
            v54 = v51;
          *v54 = 0;
          if ( !v31 )
LABEL_69:
            *v49 = 0;
        }
      }
    }
  }
  v55 = v72;
  *(_DWORD *)(v27 + 84) = v72;
  if ( (_DWORD)v55 )
    WdLogSingleEntry2(3LL, *((_QWORD *)v26 + 2), v55);
  v56 = *(_QWORD *)(v27 + 32);
  v57 = *(_QWORD *)(v56 + 592);
  if ( !v57 )
    v57 = *(_QWORD *)(v56 + 448);
  *(_QWORD *)(v27 + 104) = v57;
  IsRecoveryRequired = TdrIsRecoveryRequired((struct _TDR_RECOVERY_CONTEXT *)v27);
  v59 = *((_QWORD *)v26 + 2);
  if ( IsRecoveryRequired )
  {
    WdLogSingleEntry2(3LL, v59, *((_QWORD *)v26 + 377));
    *((_DWORD *)v26 + 753) = 1;
    VidSchiBlockDriverCallback(v26);
    *((_DWORD *)v26 + 9) = 23;
    RtlClearAllBitsEx((char *)v26 + 584);
    if ( v30 )
      VidSchiMarkTdrFaultingDevice(*((_QWORD *)v30 + 13));
    if ( (unsigned int)DpiGetDriverVersion(*(_QWORD *)(*((_QWORD *)v26 + 2) + 216LL)) >= 0x6002 )
    {
      v60 = 0;
      if ( *((_DWORD *)v26 + 19) )
      {
        while ( 1 )
        {
          if ( !*((_BYTE *)v26 + 55) )
          {
            v61 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v26 + 33) + 8LL * v60) + 96LL);
            if ( *(_DWORD *)(v61 + 2896) )
            {
              v62 = *(unsigned __int16 *)(v61 + 4);
              v63 = *((_QWORD *)v26 + 79);
              v80 = 0LL;
              v81 = 0;
              v64 = v63 + 8 * v62;
              v65 = (unsigned int)v62 < *((_DWORD *)v26 + 176);
              if ( (unsigned int)v62 >= *((_DWORD *)v26 + 176) )
                v64 = v63;
              HIDWORD(v80) = *(unsigned __int16 *)(*(_QWORD *)v64 + 6LL);
              if ( v65 )
                v63 += 8 * v62;
              LODWORD(v80) = *(unsigned __int16 *)(*(_QWORD *)v63 + 8LL);
              if ( ((int (__fastcall *)(_QWORD, struct _VIDSCH_GLOBAL **))DxgCoreInterface[38])(
                     *((_QWORD *)v26 + 1),
                     &v80) < 0 )
                break;
            }
          }
          if ( ++v60 >= *((_DWORD *)v26 + 19) )
            goto LABEL_89;
        }
        *((_BYTE *)v26 + 3036) |= 4u;
      }
    }
LABEL_89:
    v66 = *((_QWORD *)v26 + 2);
    *(_BYTE *)(v66 + 2743) = 0;
    _InterlockedOr(v68, 0);
    *(_BYTE *)(v66 + 2742) = 1;
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v26 + 1) + 656LL) + 7088LL) = 1;
    VidSchiCompleteAllPendingCommand((__int64)v26);
    VidSchiUnwaitAllContexts((__int64)v26);
    VidSchiClearFlipDevice(v26, 0LL, 9u, 0xFFFFFFFD, 0);
    v67 = 1;
    goto LABEL_92;
  }
  WdLogSingleEntry1(3LL, v59);
  TdrCompleteRecoveryContext((struct _TDR_RECOVERY_CONTEXT *)v27, 0, 1);
  *((_QWORD *)v26 + 377) = 0LL;
LABEL_91:
  v67 = v70;
LABEL_92:
  if ( v73 )
    VidSchiDecrementContextReference(v73, 0);
  return v67;
}
