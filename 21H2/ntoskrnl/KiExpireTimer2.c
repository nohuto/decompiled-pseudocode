/*
 * XREFs of KiExpireTimer2 @ 0x1402F2CA0
 * Callers:
 *     KiTimer2Expiration @ 0x1402F27B0 (KiTimer2Expiration.c)
 * Callees:
 *     KiResetGlobalDpcWatchdogProfiler @ 0x140222280 (KiResetGlobalDpcWatchdogProfiler.c)
 *     EtwGetKernelTraceTimestamp @ 0x140223A20 (EtwGetKernelTraceTimestamp.c)
 *     KiUpdateTimer2Flags @ 0x1402D4358 (KiUpdateTimer2Flags.c)
 *     KiFinalizeTimer2Disablement @ 0x1402D43F4 (KiFinalizeTimer2Disablement.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 *     KiInsertTimer2 @ 0x1402F332C (KiInsertTimer2.c)
 *     KiWakeQueueWaiter @ 0x1402F6A70 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x1402F6BC0 (KiTryUnwaitThread.c)
 *     RtlGetInterruptTimePrecise @ 0x140303490 (RtlGetInterruptTimePrecise.c)
 *     KiProcessThreadWaitList @ 0x140340390 (KiProcessThreadWaitList.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     PsTimerResolutionActive @ 0x140357CE4 (PsTimerResolutionActive.c)
 *     KiWakeOtherQueueWaiters @ 0x14035B550 (KiWakeOtherQueueWaiters.c)
 *     KiUpdateTimer2Collections @ 0x14039ECA8 (KiUpdateTimer2Collections.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     EtwTraceTimedEvent @ 0x14045FBE2 (EtwTraceTimedEvent.c)
 *     KeIsThreadRunning @ 0x14056B1E4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14062DA60 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KiExpireTimer2(unsigned __int64 SystemArgument1, __int64 a2, unsigned __int64 a3, _DWORD *a4)
{
  __int64 v4; // r13
  unsigned __int64 v5; // r11
  __int64 v6; // r12
  int v8; // r15d
  __int64 v9; // rcx
  char *v10; // rcx
  char v11; // al
  unsigned __int16 *v12; // r14
  __int64 v13; // rax
  unsigned __int16 *v14; // rdi
  void **v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r10
  char v18; // di
  __int64 v19; // rax
  char v20; // al
  __int64 v21; // rsi
  _QWORD *v22; // r12
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r13
  _KTHREAD *CurrentThread; // r9
  bool v26; // zf
  unsigned __int64 v27; // r14
  ULONG_PTR v28; // rsi
  signed __int32 v29; // ecx
  int v30; // r15d
  unsigned int v31; // edx
  signed __int32 v32; // eax
  char v33; // r15
  __int64 result; // rax
  int v35; // edx
  unsigned __int16 **v36; // rcx
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v39; // r9
  _DWORD *v40; // rdx
  __int64 v41; // rdi
  _DWORD *v42; // rdi
  signed __int32 v43; // eax
  signed __int32 v44; // ett
  __int64 v45; // rax
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rax
  char *v48; // r8
  char *v49; // r9
  bool v50; // cc
  char *v51; // rax
  char v52; // dl
  __int64 InterruptTimePrecise; // rax
  unsigned __int16 *v54; // r12
  __int64 v55; // rsi
  __int64 v56; // rax
  unsigned __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  unsigned __int64 v60; // rcx
  __int64 v61; // rax
  _QWORD *v62; // rdi
  char v63; // al
  __int64 v64; // r8
  __int64 v65; // rsi
  _QWORD *v66; // r13
  unsigned __int8 v67; // cl
  _DWORD *v68; // r9
  struct _KPRCB *v69; // rax
  _KTHREAD *v70; // r14
  unsigned __int8 v71; // al
  struct _KPRCB *v72; // r14
  int v73; // ecx
  _QWORD *v74; // rdx
  signed __int32 v75; // ecx
  char v76; // cl
  char v77; // dl
  char v78; // cl
  char v79; // [rsp+30h] [rbp-79h]
  char v80; // [rsp+31h] [rbp-78h]
  char v81[6]; // [rsp+32h] [rbp-77h] BYREF
  struct _KPRCB *v82; // [rsp+38h] [rbp-71h]
  __int64 v83; // [rsp+40h] [rbp-69h]
  __int64 v84; // [rsp+48h] [rbp-61h]
  ULONG_PTR BugCheckParameter3; // [rsp+50h] [rbp-59h]
  __int64 v86; // [rsp+58h] [rbp-51h] BYREF
  _DWORD *v87; // [rsp+60h] [rbp-49h]
  __int64 v88; // [rsp+68h] [rbp-41h] BYREF
  __int64 v89; // [rsp+70h] [rbp-39h]
  __int64 v90; // [rsp+78h] [rbp-31h]
  __int64 v91; // [rsp+80h] [rbp-29h]
  ULONG_PTR v92; // [rsp+88h] [rbp-21h]
  __int64 v93; // [rsp+90h] [rbp-19h]
  __int64 v94; // [rsp+98h] [rbp-11h]
  _OWORD v95[2]; // [rsp+A0h] [rbp-9h] BYREF

  v4 = *(_QWORD *)(a2 + 8);
  v88 = 0LL;
  v5 = a3;
  v89 = 0LL;
  v6 = a2;
  v91 = 0LL;
  v92 = 0LL;
  v8 = 0;
  v93 = 0LL;
  v94 = 0LL;
  memset(v95, 0, sizeof(v95));
  v87 = a4;
  LODWORD(BugCheckParameter3) = *(_DWORD *)(v4 + 484);
  v90 = 0LL;
  v83 = a2;
  v86 = 0LL;
  v81[0] = 0;
  v80 = 0;
  v84 = v4;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v88 = *(_QWORD *)(SystemArgument1 + 72);
    v56 = *(_QWORD *)(SystemArgument1 + 80);
    v9 = *(_QWORD *)(SystemArgument1 + 88);
    v89 = v56;
    v80 = *(_BYTE *)(SystemArgument1 + 129);
    v79 = 1;
    v90 = v9;
  }
  else
  {
    v9 = *(_QWORD *)(SystemArgument1 + 88);
    v79 = 0;
  }
  if ( !v9 || (*(_BYTE *)(SystemArgument1 + 1) & 0x20) != 0 )
    goto LABEL_4;
  v16 = *(unsigned __int8 *)(SystemArgument1 + 129);
  if ( (v16 & 4) != 0 )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v86);
    v9 = *(_QWORD *)(SystemArgument1 + 88);
    v5 = InterruptTimePrecise;
    v16 = *(unsigned __int8 *)(SystemArgument1 + 129);
  }
  v17 = v9 + v5;
  if ( v9 + v5 < v5 || v17 == -1 )
  {
    v18 = 1;
    v17 = -2LL;
  }
  else
  {
    v18 = 0;
  }
  if ( (v16 & 0xE) == 0 )
  {
    if ( KiGlobalTimerResolutionRequests )
    {
      if ( (v16 & 0x10) != 0 )
        goto LABEL_15;
    }
    else
    {
      v48 = *(char **)(SystemArgument1 + 8);
      v49 = (char *)(SystemArgument1 + 8);
      if ( v48 == (char *)(SystemArgument1 + 8) )
      {
LABEL_72:
        if ( (v16 & 0x10) == 0 )
          goto LABEL_15;
        v52 = v16 & 0xEF;
        goto LABEL_84;
      }
      while ( 1 )
      {
        v50 = (unsigned __int8)v48[16] <= 1u;
        v51 = v48;
        v48 = *(char **)v48;
        if ( v50 )
        {
          if ( (unsigned __int8)PsTimerResolutionActive(*(_QWORD *)(*((_QWORD *)v51 + 3) + 544LL), v16, v48) )
            break;
        }
        if ( v48 == v49 )
          goto LABEL_72;
      }
      if ( (v16 & 0x10) != 0 )
        goto LABEL_15;
    }
    v52 = v16 | 0x10;
LABEL_84:
    *(_BYTE *)(SystemArgument1 + 129) = v52;
    KiUpdateTimer2Collections(SystemArgument1);
  }
LABEL_15:
  v19 = *(_QWORD *)(SystemArgument1 + 80);
  if ( v19 != -1 )
  {
    v45 = v19 - *(_QWORD *)(SystemArgument1 + 72);
    if ( v45 )
    {
      v46 = v45 + v5;
      if ( v45 + v5 < v5 || v46 == -1LL )
        v46 = -2LL;
      v47 = v46 + *(_QWORD *)(SystemArgument1 + 88);
      if ( v47 < v46 || v47 == -1LL )
        v47 = -2LL;
      *(_QWORD *)(SystemArgument1 + 80) = v47;
    }
    else
    {
      *(_QWORD *)(SystemArgument1 + 80) = v17;
    }
  }
  *(_QWORD *)(SystemArgument1 + 72) = v17;
  while ( !(unsigned __int8)KiInsertTimer2(SystemArgument1, 0LL, v81) )
  {
    if ( v18 )
      goto LABEL_4;
    v57 = *(_QWORD *)(SystemArgument1 + 72);
    v58 = *(_QWORD *)(SystemArgument1 + 88);
    v59 = v57 + v58;
    if ( v57 + v58 < v57 || v59 == -1 )
    {
      v18 = 1;
      v59 = -2LL;
    }
    *(_QWORD *)(SystemArgument1 + 72) = v59;
    v60 = *(_QWORD *)(SystemArgument1 + 80);
    if ( v60 != -1LL )
    {
      v61 = v60 + v58;
      if ( v60 + v58 < v60 || v61 == -1 )
        v61 = -2LL;
      *(_QWORD *)(SystemArgument1 + 80) = v61;
    }
  }
  v8 = 1;
LABEL_4:
  v10 = (char *)(SystemArgument1 + 8);
  v11 = *(_BYTE *)SystemArgument1 & 0x7F;
  *(_DWORD *)(SystemArgument1 + 4) = 1;
  if ( v11 == 25 )
  {
    v12 = *(unsigned __int16 **)v10;
    if ( *(char **)v10 == v10 )
      goto LABEL_33;
    while ( 1 )
    {
      v13 = *(_QWORD *)v12;
      v14 = v12;
      v12 = (unsigned __int16 *)v13;
      v15 = (void **)*((_QWORD *)v14 + 1);
      if ( *(unsigned __int16 **)(v13 + 8) != v14 || *v15 != v14 )
        goto LABEL_7;
      *v15 = (void *)v13;
      *(_QWORD *)(v13 + 8) = v15;
      v20 = *((_BYTE *)v14 + 16);
      switch ( v20 )
      {
        case 1:
          if ( (unsigned __int8)KiTryUnwaitThread(v6, v14, v14[9], 0LL) )
          {
            v26 = (*(_DWORD *)(SystemArgument1 + 4))-- == 1;
            if ( v26 )
            {
LABEL_32:
              v4 = v84;
              goto LABEL_33;
            }
          }
          break;
        case 2:
          *((_BYTE *)v14 + 17) = 5;
          v21 = *((_QWORD *)v14 + 3);
          *(_QWORD *)v14 = 0LL;
          v22 = (_QWORD *)(v21 + 8);
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
          }
          CurrentPrcb = KeGetCurrentPrcb();
          CurrentThread = CurrentPrcb->CurrentThread;
          v82 = (struct _KPRCB *)CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(CurrentThread);
            EtwTraceEnqueueWork(v39, v14, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe(v21);
          if ( (_QWORD *)*v22 == v22
            || *(_DWORD *)(v21 + 40) >= *(_DWORD *)(v21 + 44)
            || *(_QWORD *)&v82->CFlushSize == v21 && BYTE3(v82->ProcessorState.ContextFrame.Rbx) == 15
            || !(unsigned __int8)KiWakeQueueWaiter(CurrentPrcb, v21, v14) )
          {
            v35 = *(_DWORD *)(v21 + 4);
            *(_DWORD *)(v21 + 4) = v35 + 1;
            v36 = *(unsigned __int16 ***)(v21 + 32);
            if ( *v36 != (unsigned __int16 *)(v21 + 24) )
              goto LABEL_7;
            *(_QWORD *)v14 = v21 + 24;
            *((_QWORD *)v14 + 1) = v36;
            *v36 = v14;
            *(_QWORD *)(v21 + 32) = v14;
            if ( !v35 && (_QWORD *)*v22 != v22 )
              KiWakeOtherQueueWaiters(CurrentPrcb, v21);
          }
          else
          {
            *(_QWORD *)v14 = 0LL;
          }
          _InterlockedAnd((volatile signed __int32 *)v21, 0xFFFFFF7F);
          v26 = (*(_DWORD *)(SystemArgument1 + 4))-- == 1;
          v6 = v83;
          if ( v26 )
            goto LABEL_32;
          break;
        case 4:
          *((_BYTE *)v14 + 17) = 5;
          *(_DWORD *)(SystemArgument1 + 4) = 0;
          KeInsertQueueDpc(*((PRKDPC *)v14 + 3), (PVOID)SystemArgument1, v14);
          break;
        default:
          KiTryUnwaitThread(v6, v14, 256LL, 0LL);
          break;
      }
      if ( v12 == (unsigned __int16 *)(SystemArgument1 + 8) )
        goto LABEL_32;
    }
  }
  v54 = *(unsigned __int16 **)v10;
  if ( *(char **)v10 != v10 )
  {
    v55 = v83;
    while ( 1 )
    {
      v62 = v54;
      v54 = *(unsigned __int16 **)v54;
      v63 = *((_BYTE *)v62 + 16);
      if ( v63 == 1 )
      {
        v64 = *((unsigned __int16 *)v62 + 9);
LABEL_123:
        KiTryUnwaitThread(v55, v62, v64, 0LL);
        goto LABEL_124;
      }
      if ( v63 == 2 )
        break;
      if ( v63 != 4 )
      {
        v64 = 256LL;
        goto LABEL_123;
      }
      *((_BYTE *)v62 + 17) = 5;
      *(_DWORD *)(SystemArgument1 + 4) = 0;
      KeInsertQueueDpc((PRKDPC)v62[3], (PVOID)SystemArgument1, v62);
LABEL_124:
      v10 = (char *)(SystemArgument1 + 8);
      if ( v54 == (unsigned __int16 *)(SystemArgument1 + 8) )
      {
        v4 = v84;
        goto LABEL_75;
      }
    }
    *((_BYTE *)v62 + 17) = 5;
    v65 = v62[3];
    *v62 = 0LL;
    v66 = (_QWORD *)(v65 + 8);
    v67 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v67 <= 0xFu )
    {
      v68 = KeGetCurrentPrcb()->SchedulerAssist;
      v68[5] |= (-1 << (v67 + 1)) & 4;
    }
    v69 = KeGetCurrentPrcb();
    v82 = v69;
    v70 = v69->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      v71 = KeIsThreadRunning(v69->CurrentThread);
      EtwTraceEnqueueWork(v70, v62, v71);
    }
    KiAcquireKobjectLockSafe(v65);
    if ( (_QWORD *)*v66 == v66
      || *(_DWORD *)(v65 + 40) >= *(_DWORD *)(v65 + 44)
      || v70->Queue == (_DISPATCHER_HEADER *volatile)v65 && v70->WaitReason == 15 )
    {
      v72 = v82;
    }
    else
    {
      v72 = v82;
      if ( (unsigned __int8)KiWakeQueueWaiter(v82, v65, v62) )
      {
        *v62 = 0LL;
LABEL_119:
        _InterlockedAnd((volatile signed __int32 *)v65, 0xFFFFFF7F);
        v55 = v83;
        goto LABEL_124;
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
    goto LABEL_119;
  }
LABEL_75:
  v6 = v83;
  *((_QWORD *)v10 + 1) = v10;
  *(_QWORD *)v10 = v10;
LABEL_33:
  v27 = 0LL;
  v28 = KiWaitAlways ^ _byteswap_uint64(SystemArgument1 ^ __ROL8__(
                                                            KiWaitNever ^ *(_QWORD *)(SystemArgument1 + 96),
                                                            KiWaitNever));
  if ( v28 )
  {
    v27 = KiWaitAlways ^ _byteswap_uint64(SystemArgument1 ^ __ROL8__(
                                                              KiWaitNever ^ *(_QWORD *)(SystemArgument1 + 104),
                                                              KiWaitNever));
    KiUpdateTimer2Flags((volatile signed __int32 *)SystemArgument1, v8 | 0x10, 0);
    if ( *(_QWORD *)(v6 + 11528) )
      KiProcessThreadWaitList(v6, 1LL, 0LL, 2LL);
    v33 = v79;
    if ( v79 )
      EtwGetKernelTraceTimestamp((unsigned __int64)v95, 0x40020000uLL);
    v40 = v87;
    v41 = ((*v87)++ & 0xF) + 1LL;
    v42 = &v40[4 * v41];
    *(_QWORD *)v42 = v28;
    v42[2] = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v6 + 33116) = 0;
    KiResetGlobalDpcWatchdogProfiler(v6);
    *(_BYTE *)(v6 + 13242) = 1;
    ((void (__fastcall *)(unsigned __int64, unsigned __int64))v28)(SystemArgument1, v27);
    *(_BYTE *)(v6 + 13242) = 0;
    v42[3] = MEMORY[0xFFFFF78000000320];
    _m_prefetchw((const void *)SystemArgument1);
    v43 = *(_DWORD *)SystemArgument1;
    do
    {
      v44 = v43;
      v43 = _InterlockedCompareExchange((volatile signed __int32 *)SystemArgument1, v43 & 0xFFFFEFFF, v43);
    }
    while ( v44 != v43 );
    if ( (v43 & 0x2F00) == 0x2000 )
      KiFinalizeTimer2Disablement(SystemArgument1);
  }
  else
  {
    v29 = *(_DWORD *)SystemArgument1;
    v30 = v8 << 8;
    v31 = v30 | *(_DWORD *)SystemArgument1 & 0xFFFFF07F;
    v32 = _InterlockedCompareExchange((volatile signed __int32 *)SystemArgument1, v31, *(_DWORD *)SystemArgument1);
    if ( v29 != v32 )
    {
      do
      {
        v75 = v32;
        v31 = v30 | v32 & 0xFFFFF07F;
        v32 = _InterlockedCompareExchange((volatile signed __int32 *)SystemArgument1, v31, v32);
      }
      while ( v75 != v32 );
    }
    if ( (v31 & 0x3F00) == 0x2000 )
      KiFinalizeTimer2Disablement(SystemArgument1);
    v33 = v79;
  }
  result = *(unsigned int *)(v4 + 484);
  if ( (_DWORD)BugCheckParameter3 != (_DWORD)result )
    KeBugCheckEx(0xC7u, 5uLL, v28, (unsigned int)BugCheckParameter3, *(unsigned int *)(v4 + 484));
  if ( v33 )
  {
    v92 = v28;
    v91 = 0x7E35C6C7F3DD7277LL
        * (KiWaitNever ^ __ROR8__(v28 ^ _byteswap_uint64(KiWaitAlways ^ SystemArgument1), KiWaitNever));
    v93 = 0x7E35C6C7F3DD7277LL
        * (KiWaitNever ^ __ROR8__(SystemArgument1 ^ _byteswap_uint64(v27 ^ KiWaitAlways), KiWaitNever));
    v76 = (2 * (v80 & 2)) | 8;
    if ( (v80 & 4) == 0 )
      v76 = 2 * (v80 & 2);
    v77 = v76;
    v78 = v76 | 0x10;
    if ( (v80 & 8) == 0 )
      v78 = v77;
    LOBYTE(v94) = v78;
    if ( v28 )
    {
      v78 |= 1u;
      LOBYTE(v94) = v78;
    }
    if ( v90 )
      LOBYTE(v94) = v78 | 2;
    if ( !v28 )
      EtwGetKernelTraceTimestamp((unsigned __int64)v95, 0x40020000uLL);
    return EtwTraceTimedEvent(3945, 1073872896, (unsigned int)&v88, 56, 4197890, (__int64)v95);
  }
  return result;
}
