/*
 * XREFs of KiExitDispatcher @ 0x14034E810
 * Callers:
 *     KeTimeOutQueueWaiters @ 0x14020436C (KeTimeOutQueueWaiters.c)
 *     IoSetIoCompletionEx @ 0x14020DF30 (IoSetIoCompletionEx.c)
 *     KeInsertQueueEx @ 0x14020E110 (KeInsertQueueEx.c)
 *     KeReleaseSemaphore @ 0x140212600 (KeReleaseSemaphore.c)
 *     KeRundownQueueEx @ 0x140227E38 (KeRundownQueueEx.c)
 *     KeDeleteMutant @ 0x140228198 (KeDeleteMutant.c)
 *     KeWakeWaitChain @ 0x14023896C (KeWakeWaitChain.c)
 *     KeThawProcess @ 0x14023A474 (KeThawProcess.c)
 *     KeFreezeProcess @ 0x14023A64C (KeFreezeProcess.c)
 *     KeSignalGate @ 0x140241090 (KeSignalGate.c)
 *     KePulseEvent @ 0x14025FA60 (KePulseEvent.c)
 *     KiRundownMutants @ 0x1402655F0 (KiRundownMutants.c)
 *     KeForceResumeThread @ 0x1402677AC (KeForceResumeThread.c)
 *     KiSchedulerApc @ 0x140267BA0 (KiSchedulerApc.c)
 *     KeResumeThread @ 0x1402680E8 (KeResumeThread.c)
 *     KeSuspendThread @ 0x140268200 (KeSuspendThread.c)
 *     KeAlertThreadByThreadId @ 0x14027E000 (KeAlertThreadByThreadId.c)
 *     KeInsertQueueApc @ 0x14027E260 (KeInsertQueueApc.c)
 *     KiSetTimerEx @ 0x1402814E0 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x1402816A0 (KeSetTimerEx.c)
 *     KeReleaseSemaphoreEx @ 0x140284630 (KeReleaseSemaphoreEx.c)
 *     KeRequestTerminationThread @ 0x14029BB18 (KeRequestTerminationThread.c)
 *     KeAlertThread @ 0x14029BC80 (KeAlertThread.c)
 *     KeForceResumeProcess @ 0x14029BDA8 (KeForceResumeProcess.c)
 *     KeInsertQueue @ 0x14029EAA0 (KeInsertQueue.c)
 *     KeRegisterObjectNotification @ 0x1402A7858 (KeRegisterObjectNotification.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A7A90 (NtWaitForWorkViaWorkerFactory.c)
 *     NtAssociateWaitCompletionPacket @ 0x1402CDF20 (NtAssociateWaitCompletionPacket.c)
 *     KeInsertPriQueue @ 0x1402E07C0 (KeInsertPriQueue.c)
 *     ExpQueueWorkItem @ 0x1402E5CF0 (ExpQueueWorkItem.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402E73C0 (NtReleaseWorkerFactoryWorker.c)
 *     IopfCompleteRequest @ 0x1402E7D10 (IopfCompleteRequest.c)
 *     IoSetIoCompletionEx2 @ 0x1402EAA80 (IoSetIoCompletionEx2.c)
 *     ExpSetTimerObject @ 0x1402EDC70 (ExpSetTimerObject.c)
 *     KeSetProcess @ 0x1402F652C (KeSetProcess.c)
 *     KeSetEventBoostPriorityEx @ 0x1402FC4D8 (KeSetEventBoostPriorityEx.c)
 *     CcUnpinFileDataEx @ 0x1402FF380 (CcUnpinFileDataEx.c)
 *     KeReleaseMutant @ 0x14034D200 (KeReleaseMutant.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140356310 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x140357F10 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KiSetSystemTimeDpc @ 0x14039E100 (KiSetSystemTimeDpc.c)
 *     KeAdjustTimerDelayProcess @ 0x140513A0C (KeAdjustTimerDelayProcess.c)
 *     KeInsertHeadQueue @ 0x14051B1C0 (KeInsertHeadQueue.c)
 *     KeRundownPriQueue @ 0x1405246AC (KeRundownPriQueue.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140211DC4 (KiRequestSoftwareInterrupt.c)
 *     KiRequestProcessInSwap @ 0x140213540 (KiRequestProcessInSwap.c)
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1402D28D0 (KiEndThreadCycleAccumulation.c)
 *     KiDeliverApc @ 0x1402EEFA0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiDirectSwitchThread @ 0x1402F1090 (KiDirectSwitchThread.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KiDeferredReadySingleThread @ 0x14034EC10 (KiDeferredReadySingleThread.c)
 *     KiAbProcessContextSwitch @ 0x1403529A0 (KiAbProcessContextSwitch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140406650 (KiSwapContext.c)
 *     EtwTraceReadyThread @ 0x1405A81A0 (EtwTraceReadyThread.c)
 */

char __fastcall KiExitDispatcher(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  unsigned __int8 v5; // r14
  char v6; // bl
  unsigned __int8 v7; // r12
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  ULONG_PTR v11; // rsi
  __int64 **v12; // r13
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 *v15; // rsi
  __int64 *v16; // r15
  int v17; // eax
  _QWORD *v18; // rcx
  __int64 *v19; // rcx
  __int64 **v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *SchedulerAssist; // rcx
  __int64 v27; // rbp
  __int64 v28; // r8
  volatile signed __int32 *v29; // rsi
  signed __int64 *v30; // rbp
  signed __int64 v31; // rax
  signed __int64 v32; // rcx
  _DWORD *v33; // rcx
  _DWORD *v34; // rcx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  struct _KPRCB *v38; // rcx
  _DWORD *v39; // rdx
  bool v40; // zf
  _DWORD *v41; // rdx
  struct _KPRCB *v42; // r10
  _DWORD *v43; // r9
  volatile signed __int32 *v45; // [rsp+20h] [rbp-48h]
  _QWORD *v46; // [rsp+70h] [rbp+8h] BYREF
  int v47; // [rsp+78h] [rbp+10h] BYREF

  v5 = a4;
  v6 = a2 & 1;
  v7 = a3;
  if ( *(_QWORD *)(a1 + 11528) )
  {
    if ( v6 && KiDirectSwitchThread(a1, (unsigned int)a4, (a2 & 2) != 0, a4) )
      goto LABEL_32;
    v12 = *(__int64 ***)(a1 + 11528);
    *(_QWORD *)(a1 + 11528) = 0LL;
    do
    {
      v13 = *((unsigned __int8 *)v12 + 371);
      v14 = (__int64)(v12 - 27);
      v15 = *(v12 - 1);
      v12 = (__int64 **)*v12;
      v16 = &v15[6 * v13];
      do
      {
        if ( *((_BYTE *)v15 + 17) < 5u )
        {
          v45 = (volatile signed __int32 *)v15[4];
          KiAcquireKobjectLockSafe(v45, a2, a3, a4);
          if ( *((_BYTE *)v15 + 17) == 4 )
          {
            v19 = (__int64 *)*v15;
            v20 = (__int64 **)v15[1];
            if ( *(__int64 **)(*v15 + 8) != v15 || *v20 != v15 )
              __fastfail(3u);
            *v20 = v19;
            v19[1] = (__int64)v20;
          }
          _InterlockedAnd(v45, 0xFFFFFF7F);
        }
        v15 += 6;
      }
      while ( v15 != v16 );
      *(_BYTE *)(v14 + 566) = v7;
      *(_BYTE *)(v14 + 567) = v5;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceReadyThread(v14, v7, v5, 0LL);
      v17 = *(_DWORD *)(v14 + 120);
      if ( (v17 & 0x20000) != 0 )
      {
        if ( (v17 & 0x100000) == 0 )
          goto LABEL_18;
        _interlockedbittestandreset((volatile signed __int32 *)(v14 + 120), 0x14u);
        if ( (_InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v14 + 184) + 840LL), 8u) & 7) == 0 )
          goto LABEL_18;
        v29 = *(volatile signed __int32 **)(v14 + 184);
        KiAcquireKobjectLockSafe(v29, a2, a3, a4);
        if ( (v29[210] & 7) == 0 )
        {
          _InterlockedAnd(v29, 0xFFFFFF7F);
LABEL_18:
          v18 = (_QWORD *)(v14 + 216);
          v46 = 0LL;
          *(_QWORD *)(v14 + 216) = 0LL;
          while ( 1 )
          {
            KiDeferredReadySingleThread(a1, v18 - 27, &v46);
            v18 = v46;
            if ( !v46 )
              break;
            v46 = (_QWORD *)*v46;
          }
          continue;
        }
      }
      else
      {
        v29 = *(volatile signed __int32 **)(v14 + 184);
        KiAcquireKobjectLockSafe(v29, a2, a3, a4);
        if ( (v29[210] & 7) == 0 )
        {
          _InterlockedExchangeAdd(v29 + 210, 8u);
          _InterlockedAnd(v29, 0xFFFFFF7F);
          _interlockedbittestandreset((volatile signed __int32 *)(v14 + 120), 0x14u);
          *(_BYTE *)(v14 + 388) = 6;
          v30 = (signed __int64 *)(v14 + 216);
          _m_prefetchw(&KiStackInSwapListHead);
          v31 = KiStackInSwapListHead;
          do
          {
            *v30 = v31;
            v32 = v31;
            v31 = _InterlockedCompareExchange64(&KiStackInSwapListHead, (signed __int64)v30, v31);
          }
          while ( v31 != v32 );
          if ( !v31 )
            KeSetEvent(&KiSwapEvent, 10, 0);
          continue;
        }
      }
      KiRequestProcessInSwap(v14, (__int64)v29);
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
      v47 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v35 = SchedulerAssist[6];
          SchedulerAssist[6] = v35 + 1;
          if ( v35 == -1 )
LABEL_58:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        v33 = CurrentPrcb->SchedulerAssist;
        if ( v33 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v36 = v33[6] - 1;
            v33[6] = v36;
            if ( !v36 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v47, v22, v23, v24);
        while ( *(_QWORD *)(a1 + 48) );
        v34 = CurrentPrcb->SchedulerAssist;
        if ( v34 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v37 = v34[6];
            v34[6] = v37 + 1;
            if ( v37 == -1 )
              goto LABEL_58;
          }
        }
      }
      v27 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(a1, v11, 0LL);
      _enable();
      *(_QWORD *)(a1 + 8) = v27;
      if ( *(_BYTE *)(v27 + 388) == 1 )
        *(_DWORD *)(v27 + 132) = *(_DWORD *)(v27 + 132) - *(_DWORD *)(v27 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v27 + 388) = 2;
      *(_BYTE *)(v11 + 643) = 32;
      *(_BYTE *)(v11 + 390) = v9;
      KiQueueReadyThread((struct _KPRCB *)a1, v11, v28);
      if ( !(unsigned __int8)KiSwapContext(v11, v27, (unsigned __int8)v9) )
        goto LABEL_6;
      if ( !KiIrqlFlags )
        goto LABEL_41;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_41;
      if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
        goto LABEL_41;
      v38 = KeGetCurrentPrcb();
      v39 = v38->SchedulerAssist;
      v40 = (v39[5] & 0xFFFF0003) == 0;
      v39[5] &= 0xFFFF0003;
      if ( !v40 )
        goto LABEL_41;
    }
    else
    {
      if ( (*(_DWORD *)(v11 + 116) & 0x40) == 0 )
        goto LABEL_6;
      if ( !KiIrqlFlags
        || (KiIrqlFlags & 1) == 0
        || (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu
        || (v38 = KeGetCurrentPrcb(),
            v41 = v38->SchedulerAssist,
            v40 = (v41[5] & 0xFFFF0003) == 0,
            v41[5] &= 0xFFFF0003,
            !v40) )
      {
LABEL_41:
        __writecr8(1uLL);
        *(_DWORD *)(v11 + 116) &= ~0x40u;
        KiDeliverApc(0, 0LL, 0LL);
LABEL_6:
        LOBYTE(v10) = KiIrqlFlags;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            LOBYTE(v10) = KeGetCurrentIrql() - 2;
            if ( (unsigned __int8)v10 <= 0xDu )
            {
              v42 = KeGetCurrentPrcb();
              v43 = v42->SchedulerAssist;
              LODWORD(v10) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
              v40 = ((unsigned int)v10 & v43[5]) == 0;
              v43[5] &= v10;
              if ( v40 )
                LOBYTE(v10) = KiRemoveSystemWorkPriorityKick(v42);
            }
          }
        }
        __writecr8(v9);
        return v10;
      }
    }
    KiRemoveSystemWorkPriorityKick(v38);
    goto LABEL_41;
  }
  if ( v10 )
  {
    LOBYTE(v10) = *(_BYTE *)(a1 + 12586);
    if ( !(_BYTE)v10 )
      LOBYTE(v10) = KiRequestSoftwareInterrupt((struct _KPRCB *)a1, 2);
  }
  return v10;
}
