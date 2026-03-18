/*
 * XREFs of KiExitDispatcher @ 0x1402197A0
 * Callers:
 *     KeRegisterObjectNotification @ 0x140206258 (KeRegisterObjectNotification.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140206490 (NtWaitForWorkViaWorkerFactory.c)
 *     KeReleaseMutant @ 0x140218050 (KeReleaseMutant.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140221690 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x140223290 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeSetProcess @ 0x14023D910 (KeSetProcess.c)
 *     KeAlertThreadByThreadId @ 0x14023F1C0 (KeAlertThreadByThreadId.c)
 *     KeSetEventBoostPriorityEx @ 0x140242D58 (KeSetEventBoostPriorityEx.c)
 *     KiSetTimerEx @ 0x140247520 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x1402476E0 (KeSetTimerEx.c)
 *     ExpSetTimerObject @ 0x1402897E0 (ExpSetTimerObject.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14028C630 (NtReleaseWorkerFactoryWorker.c)
 *     IoSetIoCompletionEx2 @ 0x14028CF50 (IoSetIoCompletionEx2.c)
 *     ExpQueueWorkItem @ 0x14028DAE0 (ExpQueueWorkItem.c)
 *     IopfCompleteRequest @ 0x140292590 (IopfCompleteRequest.c)
 *     KeInsertQueueEx @ 0x140295180 (KeInsertQueueEx.c)
 *     CcUnpinFileDataEx @ 0x14029D060 (CcUnpinFileDataEx.c)
 *     KeInsertPriQueue @ 0x1402D4860 (KeInsertPriQueue.c)
 *     KiRundownMutants @ 0x1402D5C98 (KiRundownMutants.c)
 *     KeForceResumeThread @ 0x1402D7860 (KeForceResumeThread.c)
 *     KiSchedulerApc @ 0x1402D7C50 (KiSchedulerApc.c)
 *     KeReleaseSemaphoreEx @ 0x1402DCAE0 (KeReleaseSemaphoreEx.c)
 *     KeFreezeProcess @ 0x1402EAEAC (KeFreezeProcess.c)
 *     KeForceResumeProcess @ 0x1402EB0E0 (KeForceResumeProcess.c)
 *     KeInsertQueueApc @ 0x1402EBBB0 (KeInsertQueueApc.c)
 *     KeSuspendThread @ 0x1402EC08C (KeSuspendThread.c)
 *     KeRequestTerminationThread @ 0x1402EC780 (KeRequestTerminationThread.c)
 *     KeAlertThread @ 0x1402EC8E0 (KeAlertThread.c)
 *     IoSetIoCompletionEx @ 0x1402F1130 (IoSetIoCompletionEx.c)
 *     NtAssociateWaitCompletionPacket @ 0x1402F58B0 (NtAssociateWaitCompletionPacket.c)
 *     KeReleaseSemaphore @ 0x1402FAEB0 (KeReleaseSemaphore.c)
 *     KePulseEvent @ 0x14030A3F0 (KePulseEvent.c)
 *     KeRundownQueueEx @ 0x14030B098 (KeRundownQueueEx.c)
 *     KeDeleteMutant @ 0x14030B3F8 (KeDeleteMutant.c)
 *     KeResumeThread @ 0x1403106F4 (KeResumeThread.c)
 *     KeWakeWaitChain @ 0x140318018 (KeWakeWaitChain.c)
 *     KeSignalGate @ 0x1403331D0 (KeSignalGate.c)
 *     KeTimeOutQueueWaiters @ 0x14035D12C (KeTimeOutQueueWaiters.c)
 *     KeInsertQueue @ 0x1403610A0 (KeInsertQueue.c)
 *     KeThawProcess @ 0x1403612D0 (KeThawProcess.c)
 *     KiSetSystemTimeDpc @ 0x14039E370 (KiSetSystemTimeDpc.c)
 *     KeAdjustTimerDelayProcess @ 0x140511C8C (KeAdjustTimerDelayProcess.c)
 *     KeInsertHeadQueue @ 0x140519440 (KeInsertHeadQueue.c)
 *     KeRundownPriQueue @ 0x14052298C (KeRundownPriQueue.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KiDeferredReadySingleThread @ 0x140219BA0 (KiDeferredReadySingleThread.c)
 *     KiAbProcessContextSwitch @ 0x14021DA40 (KiAbProcessContextSwitch.c)
 *     KiEndThreadCycleAccumulation @ 0x1402DAAA0 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1402DC4D0 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402DDAB0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiDirectSwitchThread @ 0x1402DE570 (KiDirectSwitchThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1402E0780 (KiAcquireKobjectLockSafe.c)
 *     KiRequestSoftwareInterrupt @ 0x1402F7EF4 (KiRequestSoftwareInterrupt.c)
 *     KiRequestProcessInSwap @ 0x1402FF1B0 (KiRequestProcessInSwap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140403E60 (KiSwapContext.c)
 *     EtwTraceReadyThread @ 0x1405A6540 (EtwTraceReadyThread.c)
 */

char __fastcall KiExitDispatcher(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned int a4, unsigned __int8 a5)
{
  unsigned __int8 v5; // r14
  char v6; // bl
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 **v12; // r13
  __int64 v13; // rax
  __int64 *v14; // rbp
  __int64 *v15; // rsi
  __int64 *v16; // r15
  int v17; // eax
  _QWORD *v18; // rcx
  __int64 *v19; // rcx
  __int64 **v20; // rax
  __int64 v21; // rcx
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *SchedulerAssist; // rcx
  __int64 v24; // rbp
  volatile signed __int32 *v25; // rsi
  signed __int64 *v26; // rbp
  signed __int64 v27; // rax
  signed __int64 v28; // rcx
  _DWORD *v29; // rcx
  _DWORD *v30; // rcx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  struct _KPRCB *v34; // rcx
  _DWORD *v35; // rdx
  bool v36; // zf
  _DWORD *v37; // rdx
  struct _KPRCB *v38; // r10
  _DWORD *v39; // r9
  volatile signed __int32 *v41; // [rsp+20h] [rbp-48h]
  _QWORD *v42; // [rsp+70h] [rbp+8h] BYREF
  int v43; // [rsp+78h] [rbp+10h] BYREF

  v5 = a4;
  v6 = a2 & 1;
  if ( *(_QWORD *)(a1 + 11528) )
  {
    if ( v6 && (unsigned __int8)KiDirectSwitchThread(a1, a4, (a2 & 2) != 0) )
      goto LABEL_32;
    v12 = *(__int64 ***)(a1 + 11528);
    *(_QWORD *)(a1 + 11528) = 0LL;
    do
    {
      v13 = *((unsigned __int8 *)v12 + 371);
      v14 = (__int64 *)(v12 - 27);
      v15 = *(v12 - 1);
      v12 = (__int64 **)*v12;
      v16 = &v15[6 * v13];
      do
      {
        if ( *((_BYTE *)v15 + 17) < 5u )
        {
          v41 = (volatile signed __int32 *)v15[4];
          KiAcquireKobjectLockSafe(v41);
          if ( *((_BYTE *)v15 + 17) == 4 )
          {
            v19 = (__int64 *)*v15;
            v20 = (__int64 **)v15[1];
            if ( *(__int64 **)(*v15 + 8) != v15 || *v20 != v15 )
              __fastfail(3u);
            *v20 = v19;
            v19[1] = (__int64)v20;
          }
          _InterlockedAnd(v41, 0xFFFFFF7F);
        }
        v15 += 6;
      }
      while ( v15 != v16 );
      *((_BYTE *)v14 + 566) = a3;
      *((_BYTE *)v14 + 567) = v5;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceReadyThread(v14, a3, v5, 0LL);
      v17 = *((_DWORD *)v14 + 30);
      if ( (v17 & 0x20000) != 0 )
      {
        if ( (v17 & 0x100000) == 0 )
          goto LABEL_18;
        _interlockedbittestandreset((volatile signed __int32 *)v14 + 30, 0x14u);
        if ( (_InterlockedExchangeAdd((volatile signed __int32 *)(v14[23] + 840), 8u) & 7) == 0 )
          goto LABEL_18;
        v25 = (volatile signed __int32 *)v14[23];
        KiAcquireKobjectLockSafe(v25);
        if ( (v25[210] & 7) == 0 )
        {
          _InterlockedAnd(v25, 0xFFFFFF7F);
LABEL_18:
          v18 = v14 + 27;
          v42 = 0LL;
          v14[27] = 0LL;
          while ( 1 )
          {
            KiDeferredReadySingleThread(a1, v18 - 27, &v42);
            v18 = v42;
            if ( !v42 )
              break;
            v42 = (_QWORD *)*v42;
          }
          continue;
        }
      }
      else
      {
        v25 = (volatile signed __int32 *)v14[23];
        KiAcquireKobjectLockSafe(v25);
        if ( (v25[210] & 7) == 0 )
        {
          _InterlockedExchangeAdd(v25 + 210, 8u);
          _InterlockedAnd(v25, 0xFFFFFF7F);
          _interlockedbittestandreset((volatile signed __int32 *)v14 + 30, 0x14u);
          *((_BYTE *)v14 + 388) = 6;
          v26 = v14 + 27;
          _m_prefetchw(&KiStackInSwapListHead);
          v27 = KiStackInSwapListHead;
          do
          {
            *v26 = v27;
            v28 = v27;
            v27 = _InterlockedCompareExchange64(&KiStackInSwapListHead, (signed __int64)v26, v27);
          }
          while ( v27 != v28 );
          if ( !v27 )
            KeSetEvent(&KiSwapEvent, 10, 0);
          continue;
        }
      }
      KiRequestProcessInSwap(v14, v25);
    }
    while ( v12 );
  }
  if ( v6 )
  {
LABEL_32:
    v21 = *(_QWORD *)(a1 + 8);
    LOBYTE(v10) = a5;
    *(_DWORD *)(v21 + 116) |= 4u;
    *(_BYTE *)(v21 + 390) = v10;
    return v10;
  }
  v9 = a5;
  v10 = *(_QWORD *)(a1 + 16);
  if ( a5 < 2u )
  {
    v11 = *(_QWORD *)(a1 + 8);
    if ( v10 )
    {
      KiAbProcessContextSwitch(*(_QWORD *)(a1 + 8), 0LL);
      CurrentPrcb = KeGetCurrentPrcb();
      v43 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v31 = SchedulerAssist[6];
          SchedulerAssist[6] = v31 + 1;
          if ( v31 == -1 )
LABEL_58:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        v29 = CurrentPrcb->SchedulerAssist;
        if ( v29 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v32 = v29[6] - 1;
            v29[6] = v32;
            if ( !v32 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v43);
        while ( *(_QWORD *)(a1 + 48) );
        v30 = CurrentPrcb->SchedulerAssist;
        if ( v30 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v33 = v30[6];
            v30[6] = v33 + 1;
            if ( v33 == -1 )
              goto LABEL_58;
          }
        }
      }
      v24 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(a1, v11, 0LL);
      _enable();
      *(_QWORD *)(a1 + 8) = v24;
      if ( *(_BYTE *)(v24 + 388) == 1 )
        *(_DWORD *)(v24 + 132) = *(_DWORD *)(v24 + 132) - *(_DWORD *)(v24 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v24 + 388) = 2;
      *(_BYTE *)(v11 + 643) = 32;
      *(_BYTE *)(v11 + 390) = v9;
      KiQueueReadyThread(a1, v11);
      if ( !(unsigned __int8)KiSwapContext(v11, v24, (unsigned __int8)v9) )
        goto LABEL_6;
      if ( !KiIrqlFlags )
        goto LABEL_41;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_41;
      if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
        goto LABEL_41;
      v34 = KeGetCurrentPrcb();
      v35 = v34->SchedulerAssist;
      v36 = (v35[5] & 0xFFFF0003) == 0;
      v35[5] &= 0xFFFF0003;
      if ( !v36 )
        goto LABEL_41;
    }
    else
    {
      if ( (*(_DWORD *)(v11 + 116) & 0x40) == 0 )
        goto LABEL_6;
      if ( !KiIrqlFlags
        || (KiIrqlFlags & 1) == 0
        || (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu
        || (v34 = KeGetCurrentPrcb(),
            v37 = v34->SchedulerAssist,
            v36 = (v37[5] & 0xFFFF0003) == 0,
            v37[5] &= 0xFFFF0003,
            !v36) )
      {
LABEL_41:
        __writecr8(1uLL);
        *(_DWORD *)(v11 + 116) &= ~0x40u;
        KiDeliverApc(0LL, 0LL, 0LL);
LABEL_6:
        LOBYTE(v10) = KiIrqlFlags;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            LOBYTE(v10) = KeGetCurrentIrql() - 2;
            if ( (unsigned __int8)v10 <= 0xDu )
            {
              v38 = KeGetCurrentPrcb();
              v39 = v38->SchedulerAssist;
              LODWORD(v10) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
              v36 = ((unsigned int)v10 & v39[5]) == 0;
              v39[5] &= v10;
              if ( v36 )
                LOBYTE(v10) = KiRemoveSystemWorkPriorityKick(v38);
            }
          }
        }
        __writecr8(v9);
        return v10;
      }
    }
    KiRemoveSystemWorkPriorityKick(v34);
    goto LABEL_41;
  }
  if ( v10 )
  {
    LOBYTE(v10) = *(_BYTE *)(a1 + 12586);
    if ( !(_BYTE)v10 )
    {
      LOBYTE(a2) = 2;
      LOBYTE(v10) = KiRequestSoftwareInterrupt(a1, a2);
    }
  }
  return v10;
}
