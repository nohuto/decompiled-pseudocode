/*
 * XREFs of VidSchiReportHwHang @ 0x1C003D194
 * Callers:
 *     VidSchiCheckHwProgress @ 0x1C007F230 (VidSchiCheckHwProgress.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0080C40 (VidSchWaitForCompletionEvent.c)
 * Callees:
 *     VidSchiCheckFlipQueueTimeout @ 0x1C000B6E0 (VidSchiCheckFlipQueueTimeout.c)
 *     VidSchiIncrementContextReference @ 0x1C0010CC0 (VidSchiIncrementContextReference.c)
 *     VidSchiDecrementContextReference @ 0x1C0010EB0 (VidSchiDecrementContextReference.c)
 *     VidSchiClearFlipDevice @ 0x1C0011408 (VidSchiClearFlipDevice.c)
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     VidSchiUnwaitAllContexts @ 0x1C003225C (VidSchiUnwaitAllContexts.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C003C9F0 (VidSchiCompleteAllPendingCommand.c)
 *     VidSchiCheckGPUTimeout @ 0x1C00D0E70 (VidSchiCheckGPUTimeout.c)
 *     VidSchiBlockDriverCallback @ 0x1C00D58D4 (VidSchiBlockDriverCallback.c)
 *     VidSchiMarkTdrFaultingDevice @ 0x1C00D597C (VidSchiMarkTdrFaultingDevice.c)
 */

__int64 __fastcall VidSchiReportHwHang(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v8; // r12d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *v16; // r8
  __int64 v17; // r14
  signed __int64 v18; // rbx
  signed __int64 v19; // r13
  __int64 v20; // rdx
  signed __int64 v21; // rsi
  signed __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rbx
  ULONG TimeIncrement; // eax
  __int64 v27; // r12
  __int64 v28; // r14
  LARGE_INTEGER v29; // r13
  union _LARGE_INTEGER v30; // rdi
  struct _TDR_RECOVERY_CONTEXT *RecoveryContext; // rax
  struct _VIDSCH_GLOBAL *v32; // r15
  __int64 v33; // rdx
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  union _LARGE_INTEGER *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rax
  struct _VIDSCH_CONTEXT *v43; // rdi
  __int64 v44; // r13
  _BYTE *v45; // r9
  __int64 v46; // rdx
  _BYTE *v47; // rcx
  char v48; // al
  __int64 v49; // rax
  __int64 v50; // r8
  __int64 v51; // r8
  char v52; // al
  _BYTE *v53; // rax
  __int64 v54; // rax
  int DriverVersion; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  int v59; // eax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  _BYTE *v64; // r8
  char v65; // al
  _BYTE *v66; // rax
  __int64 v67; // rsi
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rax
  unsigned int v74; // ebx
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // rdx
  __int64 v78; // rax
  bool v79; // cf
  __int64 v80; // rax
  unsigned int v81; // ebx
  __int64 v82; // rax
  signed __int32 v83[8]; // [rsp+0h] [rbp-99h] BYREF
  unsigned int v84; // [rsp+20h] [rbp-79h] BYREF
  signed __int64 v85; // [rsp+28h] [rbp-71h]
  int v86; // [rsp+30h] [rbp-69h]
  struct _VIDSCH_CONTEXT *v87; // [rsp+38h] [rbp-61h]
  int v88; // [rsp+40h] [rbp-59h]
  __int64 v89; // [rsp+48h] [rbp-51h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp-49h] BYREF
  __int64 v91; // [rsp+58h] [rbp-41h]
  struct _VIDSCH_GLOBAL *v92; // [rsp+60h] [rbp-39h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-31h] BYREF
  __int64 v94; // [rsp+80h] [rbp-19h] BYREF
  int v95; // [rsp+88h] [rbp-11h]
  PVOID BackTrace[2]; // [rsp+90h] [rbp-9h] BYREF
  __int128 v97; // [rsp+A0h] [rbp+7h]
  __int64 v98; // [rsp+B0h] [rbp+17h]

  v84 = -1;
  v88 = a3;
  v92 = (struct _VIDSCH_GLOBAL *)a1;
  v87 = 0LL;
  v91 = 0LL;
  v85 = 0LL;
  v89 = 0LL;
  v86 = 0;
  v98 = 0LL;
  v8 = 0;
  *(_OWORD *)BackTrace = 0LL;
  v97 = 0LL;
  RtlCaptureStackBackTrace(1u, 5u, BackTrace, 0LL);
  v11 = WdLogNewEntry5_WdWarning(v10, v9);
  *(PVOID *)(v11 + 24) = BackTrace[0];
  *(PVOID *)(v11 + 32) = BackTrace[1];
  *(_OWORD *)(v11 + 40) = v97;
  *(_QWORD *)(v11 + 56) = v98;
  WdLogEvent5_WdWarning(v11);
  if ( *(_QWORD *)(a1 + 2920) )
  {
    v14 = WdLogNewEntry5_WdWarning(v13, v12);
    *(_QWORD *)(v14 + 24) = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(v14 + 32) = *(_QWORD *)(a1 + 2920);
    WdLogEvent5_WdWarning(v14);
    return 1LL;
  }
  if ( a3 != 1 && (unsigned int)(a3 - 9) > 2 )
  {
    if ( a3 != 2 )
    {
      if ( a3 == 3 )
      {
        KeFlushQueuedDpcs();
        if ( !(unsigned int)VidSchiCheckFlipQueueTimeout(a1, 0LL, &v84) )
          return 0LL;
        if ( v84 < 0x10 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1712), &LockHandle);
          v24 = *(_QWORD *)(a1 + 8LL * v84 + 3104);
          if ( v24 )
            v86 = *(_DWORD *)(v24 + 66432);
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
      }
      v21 = v85;
      goto LABEL_25;
    }
    KeFlushQueuedDpcs();
    if ( *(_DWORD *)(a1 + 720) )
    {
      v16 = (_QWORD *)(a1 + 2928);
      if ( a4 )
      {
        *v16 = a4;
      }
      else if ( !(unsigned int)VidSchiCheckGPUTimeout(a1, 0LL, v16) )
      {
        return 0LL;
      }
      v17 = *(_QWORD *)(a1 + 2928);
      if ( *(_DWORD *)(v17 + 2880) )
      {
        v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 96), 0LL, 0LL);
        v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 120), 0LL, 0LL);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1712), &LockHandle);
        v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 96), 0LL, 0LL);
        v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 120), 0LL, 0LL);
        if ( v18 == v21 && v19 == v22 )
        {
          v89 = *(_QWORD *)(v17 + 40);
          v23 = *(_QWORD *)(v17 + 8LL * *(unsigned int *)(v17 + 1552) + 1560);
          v87 = (struct _VIDSCH_CONTEXT *)v23;
          if ( v23 )
          {
            VidSchiIncrementContextReference(v23, v20);
            v91 = *(_QWORD *)(v23 + 104);
          }
          ++*(_DWORD *)(v17 + 484);
        }
        else
        {
          v21 = v85;
          v8 = 1;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        goto LABEL_40;
      }
    }
    return 0LL;
  }
  if ( !a4 )
    a4 = **(_QWORD **)(a1 + 624);
  *(_QWORD *)(a1 + 2928) = a4;
  v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 96), 0LL, 0LL);
LABEL_40:
  if ( v8 )
    return 0LL;
LABEL_25:
  ++*(_DWORD *)(a1 + 2936);
  LODWORD(v85) = 0;
  v25 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  PerformanceFrequency.QuadPart = 0LL;
  v27 = TimeIncrement;
  v28 = v25 - a2;
  v29 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v30.QuadPart = MEMORY[0xFFFFF78000000014];
  RecoveryContext = TdrCreateRecoveryContext();
  v32 = v92;
  *((_QWORD *)v92 + 365) = RecoveryContext;
  v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v33);
  v35[3] = *((_QWORD *)v32 + 2);
  v35[4] = v25;
  v35[5] = v27;
  v35[6] = KeGetCurrentThread();
  v35[7] = *((_QWORD *)v32 + 365);
  WdLogEvent5_WdWarning(v35);
  v38 = (union _LARGE_INTEGER *)WdLogNewEntry5_WdWarning(v37, v36);
  v38[3] = *(union _LARGE_INTEGER *)((char *)v32 + 16);
  v38[4] = v29;
  v38[5] = PerformanceFrequency;
  v38[6] = v30;
  WdLogEvent5_WdWarning(v38);
  v40 = *((_QWORD *)v32 + 365);
  if ( !v40 )
    goto LABEL_91;
  *(_DWORD *)(v40 + 16) = v88;
  v41 = *(_QWORD *)(v40 + 32);
  *(_QWORD *)(v40 + 8) = (char *)v32 + 2916;
  if ( !v41 )
  {
    v42 = *((_QWORD *)v32 + 2);
    *(_QWORD *)(v40 + 32) = v42;
    _InterlockedIncrement64((volatile signed __int64 *)(v42 + 24));
    *(_QWORD *)(v40 + 40) = -1LL;
    v41 = *(_QWORD *)(v40 + 32);
  }
  ++*(_DWORD *)(v41 + 2768);
  v43 = v87;
  if ( !*(_QWORD *)(v40 + 48) && v87 )
  {
    VidSchiIncrementContextReference((__int64)v87, v39);
    *(_QWORD *)(v40 + 48) = v43;
  }
  v44 = 15LL;
  if ( v32 != (struct _VIDSCH_GLOBAL *)-2941LL )
  {
    v45 = (_BYTE *)(v40 + 2813);
    v46 = 15LL;
    v47 = (_BYTE *)(v40 + 2813);
    do
    {
      if ( v46 == -2147483631 )
        break;
      v48 = v47[(_QWORD)((char *)v32 - v40 + 128)];
      if ( !v48 )
        break;
      *v47++ = v48;
      --v46;
    }
    while ( v46 );
    goto LABEL_50;
  }
  if ( !v91 )
    goto LABEL_54;
  v49 = *(_QWORD *)(v91 + 40);
  if ( !v49 || !*(_QWORD *)(v49 + 8) )
    goto LABEL_54;
  v45 = (_BYTE *)(v40 + 2813);
  *(_QWORD *)(v40 + 2800) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v43 + 13) + 40LL) + 8LL) + 64LL)
                                      + 72LL);
  v50 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v43 + 13) + 40LL) + 2640LL);
  if ( v50 )
  {
    v46 = 15LL;
    v47 = (_BYTE *)(v40 + 2813);
    v51 = v50 - (_QWORD)v45;
    do
    {
      if ( v46 == -2147483631 )
        break;
      v52 = v47[v51];
      if ( !v52 )
        break;
      *v47++ = v52;
      --v46;
    }
    while ( v46 );
LABEL_50:
    v53 = v47 - 1;
    if ( v46 )
      v53 = v47;
    *v53 = 0;
    if ( v46 )
      goto LABEL_54;
  }
  *v45 = 0;
LABEL_54:
  v54 = *(_QWORD *)(v40 + 32);
  *(_DWORD *)(v40 + 136) = 49156;
  DriverVersion = DpiGetDriverVersion(*(_QWORD *)(v54 + 216));
  *(_QWORD *)(v40 + 24) = v28;
  *(_DWORD *)(v40 + 140) = DriverVersion;
  v58 = *((_QWORD *)v32 + 366);
  if ( v58 )
    v59 = *(unsigned __int16 *)(v58 + 4);
  else
    v59 = 0;
  *(_DWORD *)(v40 + 56) = v59;
  *(_QWORD *)(v40 + 72) = v89;
  v60 = v84;
  *(_QWORD *)(v40 + 64) = v21;
  *(_DWORD *)(v40 + 80) = v60;
  if ( (_DWORD)v60 != -1 )
  {
    v57 = (unsigned int)v60;
    v61 = *((_QWORD *)v32 + v60 + 388);
    if ( v61 )
    {
      v62 = *(_QWORD *)(v61 + 16);
      if ( v62 )
      {
        v63 = *(_QWORD *)(v62 + 40);
        if ( v63 )
        {
          v64 = (_BYTE *)(v40 + 2813);
          *(_QWORD *)(v40 + 2800) = *(_QWORD *)(v63 + 2632);
          v57 = *(_QWORD *)(*((_QWORD *)v32 + v57 + 388) + 16LL);
          v56 = *(_QWORD *)(*(_QWORD *)(v57 + 40) + 2640LL);
          if ( !v56 )
            goto LABEL_69;
          v57 = v40 + 2813;
          v56 -= (__int64)v64;
          do
          {
            if ( v44 == -2147483631 )
              break;
            v65 = *(_BYTE *)(v56 + v57);
            if ( !v65 )
              break;
            *(_BYTE *)v57++ = v65;
            --v44;
          }
          while ( v44 );
          v66 = (_BYTE *)(v57 - 1);
          if ( v44 )
            v66 = (_BYTE *)v57;
          *v66 = 0;
          if ( !v44 )
LABEL_69:
            *v64 = 0;
        }
      }
    }
  }
  v67 = v86;
  *(_DWORD *)(v40 + 84) = 0;
  *(_DWORD *)(v40 + 88) = v67;
  if ( (_DWORD)v67 )
  {
    v68 = WdLogNewEntry5_WdWarning(v57, v56);
    *(_QWORD *)(v68 + 24) = *((_QWORD *)v32 + 2);
    *(_QWORD *)(v68 + 32) = v67;
    WdLogEvent5_WdWarning(v68);
  }
  v69 = *(_QWORD *)(v40 + 32);
  v70 = *(_QWORD *)(v69 + 504);
  if ( !v70 )
    v70 = *(_QWORD *)(v69 + 360);
  *(_QWORD *)(v40 + 96) = v70;
  if ( TdrIsRecoveryRequired((struct _TDR_RECOVERY_CONTEXT *)v40) )
  {
    v73 = WdLogNewEntry5_WdWarning(v72, v71);
    *(_QWORD *)(v73 + 24) = *((_QWORD *)v32 + 2);
    *(_QWORD *)(v73 + 32) = *((_QWORD *)v32 + 365);
    WdLogEvent5_WdWarning(v73);
    *((_DWORD *)v32 + 729) = 1;
    VidSchiBlockDriverCallback(v32);
    *((_DWORD *)v32 + 9) = 23;
    RtlClearAllBitsEx((char *)v32 + 576);
    if ( v43 )
      VidSchiMarkTdrFaultingDevice(*((_QWORD *)v43 + 13));
    if ( (unsigned int)DpiGetDriverVersion(*(_QWORD *)(*((_QWORD *)v32 + 2) + 216LL)) >= 0x6002 )
    {
      v74 = 0;
      if ( *((_DWORD *)v32 + 17) )
      {
        while ( 1 )
        {
          if ( !*((_BYTE *)v32 + 55) )
          {
            v75 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v32 + 32) + 8LL * v74) + 96LL);
            if ( *(_DWORD *)(v75 + 2880) )
            {
              v76 = *(unsigned __int16 *)(v75 + 4);
              v77 = *((_QWORD *)v32 + 78);
              v94 = 0LL;
              v95 = 0;
              v78 = v77 + 8 * v76;
              v79 = (unsigned int)v76 < *((_DWORD *)v32 + 174);
              if ( (unsigned int)v76 >= *((_DWORD *)v32 + 174) )
                v78 = v77;
              HIDWORD(v94) = *(unsigned __int16 *)(*(_QWORD *)v78 + 6LL);
              if ( v79 )
                v77 += 8 * v76;
              LODWORD(v94) = *(unsigned __int16 *)(*(_QWORD *)v77 + 8LL);
              if ( ((int (__fastcall *)(_QWORD, __int64 *))DxgCoreInterface[37])(*((_QWORD *)v32 + 1), &v94) < 0 )
                break;
            }
          }
          if ( ++v74 >= *((_DWORD *)v32 + 17) )
            goto LABEL_89;
        }
        *((_BYTE *)v32 + 2940) |= 4u;
      }
    }
LABEL_89:
    v80 = *((_QWORD *)v32 + 2);
    *(_BYTE *)(v80 + 2623) = 0;
    _InterlockedOr(v83, 0);
    *(_BYTE *)(v80 + 2622) = 1;
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v32 + 1) + 648LL) + 7080LL) = 1;
    VidSchiCompleteAllPendingCommand((__int64)v32);
    VidSchiUnwaitAllContexts((__int64)v32);
    VidSchiClearFlipDevice((struct _KEVENT *)v32, 0LL, 9u);
    v81 = 1;
    goto LABEL_92;
  }
  v82 = WdLogNewEntry5_WdWarning(v72, v71);
  *(_QWORD *)(v82 + 24) = *((_QWORD *)v32 + 2);
  WdLogEvent5_WdWarning(v82);
  TdrCompleteRecoveryContext((struct _TDR_RECOVERY_CONTEXT *)v40, 0, 1);
  *((_QWORD *)v32 + 365) = 0LL;
LABEL_91:
  v81 = v85;
LABEL_92:
  if ( v87 )
    VidSchiDecrementContextReference(v87, 0);
  return v81;
}
