/*
 * XREFs of KiExpireTimer2 @ 0x140243360
 * Callers:
 *     KiTimer2Expiration @ 0x140242E60 (KiTimer2Expiration.c)
 * Callees:
 *     KiInsertTimer2 @ 0x140241CF8 (KiInsertTimer2.c)
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140243980 (KiWakeQueueWaiter.c)
 *     KiProcessThreadWaitList @ 0x1402443B0 (KiProcessThreadWaitList.c)
 *     KiWakeOtherQueueWaiters @ 0x1402462E0 (KiWakeOtherQueueWaiters.c)
 *     KiTryUnwaitThread @ 0x14024C350 (KiTryUnwaitThread.c)
 *     RtlGetInterruptTimePrecise @ 0x140278330 (RtlGetInterruptTimePrecise.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1402EE388 (KiResetGlobalDpcWatchdogProfiler.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402EE940 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x1402FF550 (EtwTraceTimedEvent.c)
 *     PsTimerResolutionActive @ 0x1402FF9E0 (PsTimerResolutionActive.c)
 *     KiUpdateTimer2Flags @ 0x14035B964 (KiUpdateTimer2Flags.c)
 *     KiFinalizeTimer2Disablement @ 0x14035BA00 (KiFinalizeTimer2Disablement.c)
 *     KiUpdateTimer2Collections @ 0x14039D3E4 (KiUpdateTimer2Collections.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     KeIsThreadRunning @ 0x14050D594 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A1C00 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KiExpireTimer2(__int64 a1, __int64 a2, LARGE_INTEGER a3, _DWORD *a4)
{
  __int64 v4; // r15
  LARGE_INTEGER v6; // r11
  __int64 v7; // r12
  int v8; // r13d
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  char v11; // al
  __int64 v12; // rdx
  _QWORD *v13; // r14
  _QWORD *v14; // rax
  _QWORD *v15; // rdi
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r10
  char v19; // di
  __int64 v20; // rax
  char v21; // al
  __int64 v22; // rsi
  _QWORD *v23; // r12
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r15
  _KTHREAD *CurrentThread; // r9
  bool v27; // zf
  unsigned __int64 v28; // r14
  ULONG_PTR v29; // rsi
  signed __int32 v30; // ecx
  int v31; // r13d
  unsigned int v32; // edx
  signed __int32 v33; // eax
  char v34; // r12
  __int64 result; // rax
  int v36; // edx
  _QWORD *v37; // rcx
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v40; // r9
  _DWORD *v41; // rdx
  __int64 v42; // r13
  __int64 v43; // rcx
  __int64 v44; // rdi
  _DWORD *v45; // rdi
  signed __int32 v46; // eax
  signed __int32 v47; // ett
  __int64 v48; // rax
  unsigned __int64 v49; // rax
  __int64 *v50; // r8
  __int64 v51; // r9
  bool v52; // cc
  __int64 *v53; // rax
  unsigned __int64 v54; // rcx
  LARGE_INTEGER InterruptTimePrecise; // rax
  char v56; // dl
  unsigned __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  unsigned __int64 v60; // rcx
  __int64 v61; // rax
  _QWORD *v62; // rdi
  char v63; // al
  __int64 v64; // r8
  __int64 v65; // rsi
  _QWORD *v66; // r12
  unsigned __int8 v67; // cl
  _DWORD *v68; // r9
  struct _KPRCB *v69; // rax
  _KTHREAD *v70; // r15
  unsigned __int8 v71; // al
  struct _KPRCB *v72; // r15
  int v73; // ecx
  _QWORD *v74; // rdx
  signed __int32 v75; // ecx
  char v76; // cl
  char v77; // dl
  char v78; // cl
  char v79; // [rsp+30h] [rbp-79h]
  char v80; // [rsp+31h] [rbp-78h]
  char v81; // [rsp+32h] [rbp-77h] BYREF
  char v82; // [rsp+33h] [rbp-76h]
  struct _KPRCB *v83; // [rsp+38h] [rbp-71h]
  __int64 v84; // [rsp+40h] [rbp-69h]
  __int64 v85; // [rsp+48h] [rbp-61h]
  ULONG_PTR BugCheckParameter3; // [rsp+50h] [rbp-59h]
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp-51h] BYREF
  _DWORD *v88; // [rsp+60h] [rbp-49h]
  __int64 v89; // [rsp+68h] [rbp-41h] BYREF
  __int64 v90; // [rsp+70h] [rbp-39h]
  __int64 v91; // [rsp+78h] [rbp-31h]
  __int64 v92; // [rsp+80h] [rbp-29h]
  ULONG_PTR v93; // [rsp+88h] [rbp-21h]
  __int64 v94; // [rsp+90h] [rbp-19h]
  __int64 v95; // [rsp+98h] [rbp-11h]
  _OWORD v96[2]; // [rsp+A0h] [rbp-9h] BYREF

  v4 = *(_QWORD *)(a2 + 8);
  v88 = a4;
  v85 = a2;
  v6 = a3;
  v89 = 0LL;
  v7 = a2;
  v90 = 0LL;
  v8 = 0;
  v92 = 0LL;
  v93 = 0LL;
  v94 = 0LL;
  v95 = 0LL;
  memset(v96, 0, sizeof(v96));
  PerformanceCounter.QuadPart = 0LL;
  LODWORD(BugCheckParameter3) = *(_DWORD *)(v4 + 484);
  v91 = 0LL;
  v81 = 0;
  v80 = 0;
  v84 = v4;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 88);
    v89 = *(_QWORD *)(a1 + 72);
    v90 = *(_QWORD *)(a1 + 80);
    v80 = *(_BYTE *)(a1 + 129);
    v79 = 1;
    v91 = v9;
  }
  else
  {
    v79 = 0;
    v9 = *(_QWORD *)(a1 + 88);
  }
  if ( !v9 || (*(_BYTE *)(a1 + 1) & 0x20) != 0 )
    goto LABEL_4;
  v17 = *(unsigned __int8 *)(a1 + 129);
  if ( (v17 & 4) != 0 )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    v9 = *(_QWORD *)(a1 + 88);
    v6 = InterruptTimePrecise;
    v17 = *(unsigned __int8 *)(a1 + 129);
  }
  v18 = v9 + v6.QuadPart;
  if ( (unsigned __int64)(v9 + v6.QuadPart) < v6.QuadPart || v18 == -1 )
  {
    v18 = -2LL;
    v19 = 1;
  }
  else
  {
    v19 = 0;
  }
  v82 = v19;
  if ( (v17 & 0xE) == 0 )
  {
    if ( (KiVelocityFlags & 0x2000) != 0 )
    {
      v50 = *(__int64 **)(a1 + 8);
      v51 = a1 + 8;
      if ( v50 == (__int64 *)(a1 + 8) )
      {
LABEL_66:
        if ( (v17 & 0x10) == 0 )
          goto LABEL_15;
        v56 = v17 & 0xEF;
        goto LABEL_82;
      }
      while ( 1 )
      {
        v52 = *((_BYTE *)v50 + 16) <= 1u;
        v53 = v50;
        v50 = (__int64 *)*v50;
        if ( v52 )
        {
          if ( (unsigned __int8)PsTimerResolutionActive(*(_QWORD *)(v53[3] + 544), v17, v50) )
            break;
        }
        if ( v50 == (__int64 *)v51 )
          goto LABEL_66;
      }
      if ( (v17 & 0x10) != 0 )
        goto LABEL_15;
    }
    else if ( (v17 & 0x10) != 0 )
    {
      goto LABEL_15;
    }
    v56 = v17 | 0x10;
LABEL_82:
    *(_BYTE *)(a1 + 129) = v56;
    KiUpdateTimer2Collections(a1);
  }
LABEL_15:
  v20 = *(_QWORD *)(a1 + 80);
  if ( v20 != -1 )
  {
    v48 = v20 - *(_QWORD *)(a1 + 72);
    if ( v48 )
    {
      v54 = v48 + v6.QuadPart;
      if ( (unsigned __int64)(v48 + v6.QuadPart) < v6.QuadPart || v54 == -1LL )
        v54 = -2LL;
      v49 = v54 + *(_QWORD *)(a1 + 88);
      if ( v49 < v54 || v49 == -1LL )
        v49 = -2LL;
    }
    else
    {
      v49 = v18;
    }
    *(_QWORD *)(a1 + 80) = v49;
  }
  *(_QWORD *)(a1 + 72) = v18;
  while ( !KiInsertTimer2(a1, 0, (__int64)&v81) )
  {
    if ( v19 )
      goto LABEL_4;
    v57 = *(_QWORD *)(a1 + 72);
    v58 = *(_QWORD *)(a1 + 88);
    v59 = v57 + v58;
    if ( v57 + v58 < v57 || v59 == -1 )
    {
      v59 = -2LL;
      v19 = 1;
    }
    *(_QWORD *)(a1 + 72) = v59;
    v60 = *(_QWORD *)(a1 + 80);
    v82 = v19;
    if ( v60 != -1LL )
    {
      v61 = v60 + v58;
      if ( v60 + v58 < v60 || v61 == -1 )
        v61 = -2LL;
      *(_QWORD *)(a1 + 80) = v61;
    }
  }
  v8 = 1;
LABEL_4:
  v10 = (_QWORD *)(a1 + 8);
  v11 = *(_BYTE *)a1 & 0x7F;
  v12 = 2LL;
  v13 = *(_QWORD **)(a1 + 8);
  *(_DWORD *)(a1 + 4) = 1;
  if ( v11 == 25 )
  {
    if ( v13 == v10 )
      goto LABEL_32;
    while ( 1 )
    {
      v14 = (_QWORD *)*v13;
      v15 = v13;
      v13 = v14;
      v16 = (_QWORD *)v15[1];
      if ( (_QWORD *)v14[1] != v15 || (_QWORD *)*v16 != v15 )
        goto LABEL_7;
      *v16 = v14;
      v14[1] = v16;
      v21 = *((_BYTE *)v15 + 16);
      if ( v21 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread(v7, v15, *((unsigned __int16 *)v15 + 9), 0LL) )
        {
          v27 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v27 )
          {
LABEL_31:
            v4 = v84;
            goto LABEL_32;
          }
        }
      }
      else if ( v21 == 2 )
      {
        *((_BYTE *)v15 + 17) = 5;
        v22 = v15[3];
        *v15 = 0LL;
        v23 = (_QWORD *)(v22 + 8);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          v12 = (-1LL << (CurrentIrql + 1)) & 4;
          SchedulerAssist[5] |= v12;
        }
        CurrentPrcb = KeGetCurrentPrcb();
        CurrentThread = CurrentPrcb->CurrentThread;
        v83 = (struct _KPRCB *)CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          IsThreadRunning = KeIsThreadRunning(CurrentThread, v12);
          EtwTraceEnqueueWork(v40, v15, IsThreadRunning);
        }
        KiAcquireKobjectLockSafe(v22);
        if ( (_QWORD *)*v23 == v23
          || *(_DWORD *)(v22 + 40) >= *(_DWORD *)(v22 + 44)
          || *(_QWORD *)&v83->CFlushSize == v22 && BYTE3(v83->ProcessorState.ContextFrame.Rbx) == 15
          || !(unsigned __int8)KiWakeQueueWaiter(CurrentPrcb, v22, v15) )
        {
          v36 = *(_DWORD *)(v22 + 4);
          *(_DWORD *)(v22 + 4) = v36 + 1;
          v37 = *(_QWORD **)(v22 + 32);
          if ( *v37 != v22 + 24 )
            goto LABEL_7;
          *v15 = v22 + 24;
          v15[1] = v37;
          *v37 = v15;
          *(_QWORD *)(v22 + 32) = v15;
          if ( !v36 && (_QWORD *)*v23 != v23 )
            KiWakeOtherQueueWaiters(CurrentPrcb, v22);
        }
        _InterlockedAnd((volatile signed __int32 *)v22, 0xFFFFFF7F);
        v27 = (*(_DWORD *)(a1 + 4))-- == 1;
        v7 = v85;
        if ( v27 )
          goto LABEL_31;
      }
      else
      {
        KiTryUnwaitThread(v7, v15, 256LL, 0LL);
      }
      if ( v13 == (_QWORD *)(a1 + 8) )
        goto LABEL_31;
      v12 = 2LL;
    }
  }
  if ( v13 != v10 )
  {
    while ( 1 )
    {
      v62 = v13;
      v13 = (_QWORD *)*v13;
      v63 = *((_BYTE *)v62 + 16);
      if ( v63 == 1 )
      {
        v64 = *((unsigned __int16 *)v62 + 9);
      }
      else
      {
        if ( v63 == 2 )
        {
          *((_BYTE *)v62 + 17) = 5;
          v65 = v62[3];
          *v62 = 0LL;
          v66 = (_QWORD *)(v65 + 8);
          v67 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v67 <= 0xFu )
          {
            v68 = KeGetCurrentPrcb()->SchedulerAssist;
            v12 = (-1LL << (v67 + 1)) & 4;
            v68[5] |= v12;
          }
          v69 = KeGetCurrentPrcb();
          v83 = v69;
          v70 = v69->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v71 = KeIsThreadRunning(v69->CurrentThread, v12);
            EtwTraceEnqueueWork(v70, v62, v71);
          }
          KiAcquireKobjectLockSafe(v65);
          if ( (_QWORD *)*v66 == v66
            || *(_DWORD *)(v65 + 40) >= *(_DWORD *)(v65 + 44)
            || v70->Queue == (_DISPATCHER_HEADER *volatile)v65 && v70->WaitReason == 15 )
          {
            v72 = v83;
          }
          else
          {
            v72 = v83;
            if ( (unsigned __int8)KiWakeQueueWaiter(v83, v65, v62) )
            {
LABEL_115:
              _InterlockedAnd((volatile signed __int32 *)v65, 0xFFFFFF7F);
              v7 = v85;
              goto LABEL_118;
            }
          }
          v73 = *(_DWORD *)(v65 + 4);
          *(_DWORD *)(v65 + 4) = v73 + 1;
          v74 = *(_QWORD **)(v65 + 32);
          if ( *v74 != v65 + 24 )
LABEL_7:
            __fastfail(3u);
          *v62 = v65 + 24;
          v62[1] = v74;
          *v74 = v62;
          *(_QWORD *)(v65 + 32) = v62;
          if ( !v73 && (_QWORD *)*v66 != v66 )
            KiWakeOtherQueueWaiters(v72, v65);
          goto LABEL_115;
        }
        v64 = 256LL;
      }
      KiTryUnwaitThread(v7, v62, v64, 0LL);
LABEL_118:
      v10 = (_QWORD *)(a1 + 8);
      if ( v13 == (_QWORD *)(a1 + 8) )
      {
        v4 = v84;
        break;
      }
      v12 = 2LL;
    }
  }
  v10[1] = v10;
  *v10 = v10;
LABEL_32:
  v28 = 0LL;
  v29 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(a1 + 96), KiWaitNever));
  if ( v29 )
  {
    v28 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(a1 + 104), KiWaitNever));
    KiUpdateTimer2Flags(a1, v8 | 0x10u);
    if ( *(_QWORD *)(v7 + 11528) )
      KiProcessThreadWaitList(v7, 1LL, 0LL);
    v34 = v79;
    if ( v79 )
      EtwGetKernelTraceTimestamp(v96, 1073872896LL);
    v41 = v88;
    v42 = v85;
    v43 = v85;
    v44 = ((*v88)++ & 0xF) + 1LL;
    v45 = &v41[4 * v44];
    *(_QWORD *)v45 = v29;
    v45[2] = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v43 + 32412) = 0;
    KiResetGlobalDpcWatchdogProfiler(v43);
    *(_BYTE *)(v42 + 12586) = 1;
    ((void (__fastcall *)(__int64, unsigned __int64))v29)(a1, v28);
    *(_BYTE *)(v42 + 12586) = 0;
    v45[3] = MEMORY[0xFFFFF78000000320];
    _m_prefetchw((const void *)a1);
    v46 = *(_DWORD *)a1;
    do
    {
      v47 = v46;
      v46 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v46 & 0xFFFFEFFF, v46);
    }
    while ( v47 != v46 );
    if ( (v46 & 0x2F00) == 0x2000 )
      KiFinalizeTimer2Disablement(a1);
  }
  else
  {
    v30 = *(_DWORD *)a1;
    v31 = v8 << 8;
    v32 = v31 | *(_DWORD *)a1 & 0xFFFFF07F;
    v33 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v32, *(_DWORD *)a1);
    if ( v30 != v33 )
    {
      do
      {
        v75 = v33;
        v32 = v31 | v33 & 0xFFFFF07F;
        v33 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v32, v33);
      }
      while ( v75 != v33 );
    }
    if ( (v32 & 0x3F00) == 0x2000 )
      KiFinalizeTimer2Disablement(a1);
    v34 = v79;
  }
  result = *(unsigned int *)(v4 + 484);
  if ( (_DWORD)BugCheckParameter3 != (_DWORD)result )
    KeBugCheckEx(0xC7u, 5uLL, v29, (unsigned int)BugCheckParameter3, *(unsigned int *)(v4 + 484));
  if ( v34 )
  {
    v93 = v29;
    v92 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(v29 ^ _byteswap_uint64(KiWaitAlways ^ a1), KiWaitNever));
    v94 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v28 ^ KiWaitAlways), KiWaitNever));
    v76 = (2 * (v80 & 2)) | 8;
    if ( (v80 & 4) == 0 )
      v76 = 2 * (v80 & 2);
    v77 = v76;
    v78 = v76 | 0x10;
    if ( (v80 & 8) == 0 )
      v78 = v77;
    LOBYTE(v95) = v78;
    if ( v29 )
    {
      v78 |= 1u;
      LOBYTE(v95) = v78;
    }
    if ( v91 )
      LOBYTE(v95) = v78 | 2;
    if ( !v29 )
      EtwGetKernelTraceTimestamp(v96, 1073872896LL);
    return EtwTraceTimedEvent(3945, 1073872896, (unsigned int)&v89, 56, 4197890, (__int64)v96);
  }
  return result;
}
