/*
 * XREFs of KiExitDispatcher @ 0x140286FF0
 * Callers:
 *     ExpReleaseResourceSharedForThreadLite @ 0x140208710 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14020A310 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14020FDA0 (NtWaitForWorkViaWorkerFactory.c)
 *     KeSetTimerEx @ 0x140210F50 (KeSetTimerEx.c)
 *     ExpSetTimerObject @ 0x140211420 (ExpSetTimerObject.c)
 *     KeRegisterObjectNotification @ 0x14026745C (KeRegisterObjectNotification.c)
 *     KeSetEventBoostPriorityEx @ 0x140274BF8 (KeSetEventBoostPriorityEx.c)
 *     KeSetProcess @ 0x14027BE30 (KeSetProcess.c)
 *     KeAlertThreadByThreadId @ 0x14027D880 (KeAlertThreadByThreadId.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140282320 (NtReleaseWorkerFactoryWorker.c)
 *     IoSetIoCompletionEx2 @ 0x140282C40 (IoSetIoCompletionEx2.c)
 *     IoSetIoCompletionEx @ 0x1402837B0 (IoSetIoCompletionEx.c)
 *     IopfCompleteRequest @ 0x140284EE0 (IopfCompleteRequest.c)
 *     KeReleaseMutant @ 0x140285BF0 (KeReleaseMutant.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     ExpQueueWorkItem @ 0x1402B7B10 (ExpQueueWorkItem.c)
 *     KeInsertPriQueue @ 0x1402BCC20 (KeInsertPriQueue.c)
 *     CcUnpinFileDataEx @ 0x1402C3400 (CcUnpinFileDataEx.c)
 *     KiSetTimerEx @ 0x1402C90A0 (KiSetTimerEx.c)
 *     KeReleaseSemaphoreEx @ 0x1402EBC30 (KeReleaseSemaphoreEx.c)
 *     KePulseEvent @ 0x1402F2EF0 (KePulseEvent.c)
 *     KeForceResumeThread @ 0x1402FA0EC (KeForceResumeThread.c)
 *     KiSchedulerApc @ 0x1402FA4E0 (KiSchedulerApc.c)
 *     KiRundownMutants @ 0x1402FAA28 (KiRundownMutants.c)
 *     KeResumeThread @ 0x1402FAC00 (KeResumeThread.c)
 *     KeSuspendThread @ 0x1402FAD18 (KeSuspendThread.c)
 *     KeInsertQueueApc @ 0x1402FB5E0 (KeInsertQueueApc.c)
 *     KeRequestTerminationThread @ 0x1402FBC30 (KeRequestTerminationThread.c)
 *     KeAlertThread @ 0x1402FBD90 (KeAlertThread.c)
 *     KeForceResumeProcess @ 0x1402FCC94 (KeForceResumeProcess.c)
 *     KeFreezeProcess @ 0x1402FCEBC (KeFreezeProcess.c)
 *     NtAssociateWaitCompletionPacket @ 0x14030EF50 (NtAssociateWaitCompletionPacket.c)
 *     KeReleaseSemaphore @ 0x140327E90 (KeReleaseSemaphore.c)
 *     KeRundownQueueEx @ 0x140338978 (KeRundownQueueEx.c)
 *     KeDeleteMutant @ 0x140338CD8 (KeDeleteMutant.c)
 *     KeInsertQueueEx @ 0x140339334 (KeInsertQueueEx.c)
 *     KeTimeOutQueueWaiters @ 0x140343470 (KeTimeOutQueueWaiters.c)
 *     KeWakeWaitChain @ 0x140346B4C (KeWakeWaitChain.c)
 *     KeThawProcess @ 0x140347AF0 (KeThawProcess.c)
 *     KeSignalGate @ 0x140350B20 (KeSignalGate.c)
 *     KeInsertQueue @ 0x14035ACC0 (KeInsertQueue.c)
 *     KiSetSystemTimeDpc @ 0x14039B220 (KiSetSystemTimeDpc.c)
 *     KeAdjustTimerDelayProcess @ 0x14050E35C (KeAdjustTimerDelayProcess.c)
 *     KeInsertHeadQueue @ 0x140515B10 (KeInsertHeadQueue.c)
 *     KeRundownPriQueue @ 0x14051EFBC (KeRundownPriQueue.c)
 * Callees:
 *     KiAbProcessContextSwitch @ 0x14020D880 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14020EAE0 (KiDeliverApc.c)
 *     KiRequestSoftwareInterrupt @ 0x140273DA8 (KiRequestSoftwareInterrupt.c)
 *     KiAcquireKobjectLockSafe @ 0x140280030 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KiDeferredReadySingleThread @ 0x1402873F0 (KiDeferredReadySingleThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1402EB520 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1402EDF50 (KiQueueReadyThread.c)
 *     KiDirectSwitchThread @ 0x1402EE940 (KiDirectSwitchThread.c)
 *     KiRequestProcessInSwap @ 0x140328610 (KiRequestProcessInSwap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1403FDDE0 (KiSwapContext.c)
 *     EtwTraceReadyThread @ 0x1405A2AA0 (EtwTraceReadyThread.c)
 */

char __fastcall KiExitDispatcher(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  unsigned __int8 v5; // r14
  char v6; // bl
  unsigned __int8 v7; // r12
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
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *SchedulerAssist; // rcx
  __int64 v27; // rbp
  volatile signed __int32 *v28; // rsi
  signed __int64 *v29; // rbp
  signed __int64 v30; // rax
  signed __int64 v31; // rcx
  _DWORD *v32; // rcx
  _DWORD *v33; // rcx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  struct _KPRCB *v37; // rcx
  _DWORD *v38; // rdx
  bool v39; // zf
  _DWORD *v40; // rdx
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r9
  volatile signed __int32 *v44; // [rsp+20h] [rbp-48h]
  _QWORD *v45; // [rsp+70h] [rbp+8h] BYREF
  int v46; // [rsp+78h] [rbp+10h] BYREF

  v5 = a4;
  v6 = a2 & 1;
  v7 = a3;
  if ( *(_QWORD *)(a1 + 11528) )
  {
    if ( v6 && (unsigned __int8)KiDirectSwitchThread(a1, (unsigned int)a4, (a2 & 2) != 0) )
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
          v44 = (volatile signed __int32 *)v15[4];
          KiAcquireKobjectLockSafe(v44, a2, a3, a4);
          if ( *((_BYTE *)v15 + 17) == 4 )
          {
            v19 = (__int64 *)*v15;
            v20 = (__int64 **)v15[1];
            if ( *(__int64 **)(*v15 + 8) != v15 || *v20 != v15 )
              __fastfail(3u);
            *v20 = v19;
            v19[1] = (__int64)v20;
          }
          _InterlockedAnd(v44, 0xFFFFFF7F);
        }
        v15 += 6;
      }
      while ( v15 != v16 );
      *((_BYTE *)v14 + 566) = v7;
      *((_BYTE *)v14 + 567) = v5;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceReadyThread(v14, v7, v5, 0LL);
      v17 = *((_DWORD *)v14 + 30);
      if ( (v17 & 0x20000) != 0 )
      {
        if ( (v17 & 0x100000) == 0 )
          goto LABEL_18;
        _interlockedbittestandreset((volatile signed __int32 *)v14 + 30, 0x14u);
        if ( (_InterlockedExchangeAdd((volatile signed __int32 *)(v14[23] + 840), 8u) & 7) == 0 )
          goto LABEL_18;
        v28 = (volatile signed __int32 *)v14[23];
        KiAcquireKobjectLockSafe(v28, a2, a3, a4);
        if ( (v28[210] & 7) == 0 )
        {
          _InterlockedAnd(v28, 0xFFFFFF7F);
LABEL_18:
          v18 = v14 + 27;
          v45 = 0LL;
          v14[27] = 0LL;
          while ( 1 )
          {
            KiDeferredReadySingleThread(a1, v18 - 27, &v45, a4);
            v18 = v45;
            if ( !v45 )
              break;
            v45 = (_QWORD *)*v45;
          }
          continue;
        }
      }
      else
      {
        v28 = (volatile signed __int32 *)v14[23];
        KiAcquireKobjectLockSafe(v28, a2, a3, a4);
        if ( (v28[210] & 7) == 0 )
        {
          _InterlockedExchangeAdd(v28 + 210, 8u);
          _InterlockedAnd(v28, 0xFFFFFF7F);
          _interlockedbittestandreset((volatile signed __int32 *)v14 + 30, 0x14u);
          *((_BYTE *)v14 + 388) = 6;
          v29 = v14 + 27;
          _m_prefetchw(&KiStackInSwapListHead);
          v30 = KiStackInSwapListHead;
          do
          {
            *v29 = v30;
            v31 = v30;
            v30 = _InterlockedCompareExchange64(&KiStackInSwapListHead, (signed __int64)v29, v30);
          }
          while ( v30 != v31 );
          if ( !v30 )
            KeSetEvent(&KiSwapEvent, 10, 0);
          continue;
        }
      }
      KiRequestProcessInSwap(v14, v28);
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
      KiAbProcessContextSwitch(*(_QWORD *)(a1 + 8), 0);
      CurrentPrcb = KeGetCurrentPrcb();
      v46 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v34 = SchedulerAssist[6];
          SchedulerAssist[6] = v34 + 1;
          if ( v34 == -1 )
LABEL_58:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        v32 = CurrentPrcb->SchedulerAssist;
        if ( v32 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v35 = v32[6] - 1;
            v32[6] = v35;
            if ( !v35 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v46, v22, v23, v24);
        while ( *(_QWORD *)(a1 + 48) );
        v33 = CurrentPrcb->SchedulerAssist;
        if ( v33 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v36 = v33[6];
            v33[6] = v36 + 1;
            if ( v36 == -1 )
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
      KiQueueReadyThread(a1, v11);
      if ( !(unsigned __int8)KiSwapContext(v11, v27, (unsigned __int8)v9) )
        goto LABEL_6;
      if ( !KiIrqlFlags )
        goto LABEL_41;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_41;
      if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
        goto LABEL_41;
      v37 = KeGetCurrentPrcb();
      v38 = v37->SchedulerAssist;
      v39 = (v38[5] & 0xFFFF0003) == 0;
      v38[5] &= 0xFFFF0003;
      if ( !v39 )
        goto LABEL_41;
    }
    else
    {
      if ( (*(_DWORD *)(v11 + 116) & 0x40) == 0 )
        goto LABEL_6;
      if ( !KiIrqlFlags
        || (KiIrqlFlags & 1) == 0
        || (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu
        || (v37 = KeGetCurrentPrcb(),
            v40 = v37->SchedulerAssist,
            v39 = (v40[5] & 0xFFFF0003) == 0,
            v40[5] &= 0xFFFF0003,
            !v39) )
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
              v41 = KeGetCurrentPrcb();
              v42 = v41->SchedulerAssist;
              LODWORD(v10) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
              v39 = ((unsigned int)v10 & v42[5]) == 0;
              v42[5] &= v10;
              if ( v39 )
                LOBYTE(v10) = KiRemoveSystemWorkPriorityKick(v41);
            }
          }
        }
        __writecr8(v9);
        return v10;
      }
    }
    KiRemoveSystemWorkPriorityKick(v37);
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
