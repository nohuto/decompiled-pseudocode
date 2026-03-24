/*
 * XREFs of KiExitDispatcher @ 0x140343AC0
 * Callers:
 *     KeRegisterObjectNotification @ 0x140202F18 (KeRegisterObjectNotification.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140203150 (NtWaitForWorkViaWorkerFactory.c)
 *     NtAssociateWaitCompletionPacket @ 0x140229620 (NtAssociateWaitCompletionPacket.c)
 *     KeInsertPriQueue @ 0x14023BF70 (KeInsertPriQueue.c)
 *     ExpQueueWorkItem @ 0x1402414A0 (ExpQueueWorkItem.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140242B70 (NtReleaseWorkerFactoryWorker.c)
 *     IopfCompleteRequest @ 0x1402434C0 (IopfCompleteRequest.c)
 *     IoSetIoCompletionEx2 @ 0x140246230 (IoSetIoCompletionEx2.c)
 *     ExpSetTimerObject @ 0x140249420 (ExpSetTimerObject.c)
 *     KeSetProcess @ 0x140251D1C (KeSetProcess.c)
 *     KeAlertThreadByThreadId @ 0x14025CA90 (KeAlertThreadByThreadId.c)
 *     KeInsertQueueApc @ 0x14025F8C0 (KeInsertQueueApc.c)
 *     KiSetTimerEx @ 0x14025FD70 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x14025FF30 (KeSetTimerEx.c)
 *     KeReleaseSemaphoreEx @ 0x1402631F0 (KeReleaseSemaphoreEx.c)
 *     KePulseEvent @ 0x140271AC0 (KePulseEvent.c)
 *     KiRundownMutants @ 0x140277650 (KiRundownMutants.c)
 *     KeForceResumeThread @ 0x14027980C (KeForceResumeThread.c)
 *     KiSchedulerApc @ 0x140279C00 (KiSchedulerApc.c)
 *     KeResumeThread @ 0x14027A148 (KeResumeThread.c)
 *     KeSuspendThread @ 0x14027A260 (KeSuspendThread.c)
 *     KeFreezeProcess @ 0x1402830E8 (KeFreezeProcess.c)
 *     KeThawProcess @ 0x140283E7C (KeThawProcess.c)
 *     KeTimeOutQueueWaiters @ 0x1402871CC (KeTimeOutQueueWaiters.c)
 *     IoSetIoCompletionEx @ 0x14028FFC0 (IoSetIoCompletionEx.c)
 *     KeInsertQueueEx @ 0x1402901A0 (KeInsertQueueEx.c)
 *     KeReleaseSemaphore @ 0x14029AC70 (KeReleaseSemaphore.c)
 *     KeRundownQueueEx @ 0x1402A9CF8 (KeRundownQueueEx.c)
 *     KeDeleteMutant @ 0x1402AA058 (KeDeleteMutant.c)
 *     KeWakeWaitChain @ 0x1402BA75C (KeWakeWaitChain.c)
 *     KeSignalGate @ 0x1402C2B70 (KeSignalGate.c)
 *     KeInsertQueue @ 0x1402CCD30 (KeInsertQueue.c)
 *     KeRequestTerminationThread @ 0x1402EA7C8 (KeRequestTerminationThread.c)
 *     KeAlertThread @ 0x1402EA930 (KeAlertThread.c)
 *     KeForceResumeProcess @ 0x1402EAA58 (KeForceResumeProcess.c)
 *     KeSetEventBoostPriorityEx @ 0x1402F1788 (KeSetEventBoostPriorityEx.c)
 *     CcUnpinFileDataEx @ 0x1402F4630 (CcUnpinFileDataEx.c)
 *     KeReleaseMutant @ 0x1403424B0 (KeReleaseMutant.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14034B5C0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14034D1C0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KiSetSystemTimeDpc @ 0x14039DFB0 (KiSetSystemTimeDpc.c)
 *     KeAdjustTimerDelayProcess @ 0x1405137CC (KeAdjustTimerDelayProcess.c)
 *     KeInsertHeadQueue @ 0x14051AF80 (KeInsertHeadQueue.c)
 *     KeRundownPriQueue @ 0x14052446C (KeRundownPriQueue.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x14022E080 (KiEndThreadCycleAccumulation.c)
 *     KiDeliverApc @ 0x14024A750 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x14024C4A0 (KiAcquireKobjectLockSafe.c)
 *     KiDirectSwitchThread @ 0x14024C840 (KiDirectSwitchThread.c)
 *     KiQueueReadyThread @ 0x1402593B0 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140293E54 (KiRequestSoftwareInterrupt.c)
 *     KiRequestProcessInSwap @ 0x14029BB70 (KiRequestProcessInSwap.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     KiDeferredReadySingleThread @ 0x140343EC0 (KiDeferredReadySingleThread.c)
 *     KiAbProcessContextSwitch @ 0x140347C50 (KiAbProcessContextSwitch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140406470 (KiSwapContext.c)
 *     EtwTraceReadyThread @ 0x1405A7F70 (EtwTraceReadyThread.c)
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
  __int64 v29; // r9
  volatile signed __int32 *v30; // rsi
  signed __int64 *v31; // rbp
  signed __int64 v32; // rax
  signed __int64 v33; // rcx
  _DWORD *v34; // rcx
  _DWORD *v35; // rcx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  struct _KPRCB *v39; // rcx
  _DWORD *v40; // rdx
  bool v41; // zf
  _DWORD *v42; // rdx
  struct _KPRCB *v43; // r10
  _DWORD *v44; // r9
  volatile signed __int32 *v46; // [rsp+20h] [rbp-48h]
  _QWORD *v47; // [rsp+70h] [rbp+8h] BYREF
  int v48; // [rsp+78h] [rbp+10h] BYREF

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
          v46 = (volatile signed __int32 *)v15[4];
          KiAcquireKobjectLockSafe(v46, a2, a3, a4);
          if ( *((_BYTE *)v15 + 17) == 4 )
          {
            v19 = (__int64 *)*v15;
            v20 = (__int64 **)v15[1];
            if ( *(__int64 **)(*v15 + 8) != v15 || *v20 != v15 )
              __fastfail(3u);
            *v20 = v19;
            v19[1] = (__int64)v20;
          }
          _InterlockedAnd(v46, 0xFFFFFF7F);
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
        v30 = *(volatile signed __int32 **)(v14 + 184);
        KiAcquireKobjectLockSafe(v30, a2, a3, a4);
        if ( (v30[210] & 7) == 0 )
        {
          _InterlockedAnd(v30, 0xFFFFFF7F);
LABEL_18:
          v18 = (_QWORD *)(v14 + 216);
          v47 = 0LL;
          *(_QWORD *)(v14 + 216) = 0LL;
          while ( 1 )
          {
            KiDeferredReadySingleThread(a1, v18 - 27, &v47);
            v18 = v47;
            if ( !v47 )
              break;
            v47 = (_QWORD *)*v47;
          }
          continue;
        }
      }
      else
      {
        v30 = *(volatile signed __int32 **)(v14 + 184);
        KiAcquireKobjectLockSafe(v30, a2, a3, a4);
        if ( (v30[210] & 7) == 0 )
        {
          _InterlockedExchangeAdd(v30 + 210, 8u);
          _InterlockedAnd(v30, 0xFFFFFF7F);
          _interlockedbittestandreset((volatile signed __int32 *)(v14 + 120), 0x14u);
          *(_BYTE *)(v14 + 388) = 6;
          v31 = (signed __int64 *)(v14 + 216);
          _m_prefetchw(&KiStackInSwapListHead);
          v32 = KiStackInSwapListHead;
          do
          {
            *v31 = v32;
            v33 = v32;
            v32 = _InterlockedCompareExchange64(&KiStackInSwapListHead, (signed __int64)v31, v32);
          }
          while ( v32 != v33 );
          if ( !v32 )
            KeSetEvent(&KiSwapEvent, 10, 0);
          continue;
        }
      }
      KiRequestProcessInSwap(v14, (__int64)v30, a3, a4);
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
      v48 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v36 = SchedulerAssist[6];
          SchedulerAssist[6] = v36 + 1;
          if ( v36 == -1 )
LABEL_58:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        v34 = CurrentPrcb->SchedulerAssist;
        if ( v34 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v37 = v34[6] - 1;
            v34[6] = v37;
            if ( !v37 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v48, v22, v23, v24);
        while ( *(_QWORD *)(a1 + 48) );
        v35 = CurrentPrcb->SchedulerAssist;
        if ( v35 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v38 = v35[6];
            v35[6] = v38 + 1;
            if ( v38 == -1 )
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
      KiQueueReadyThread(a1, v11, v28, v29);
      if ( !(unsigned __int8)KiSwapContext(v11, v27, (unsigned __int8)v9) )
        goto LABEL_6;
      if ( !KiIrqlFlags )
        goto LABEL_41;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_41;
      if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
        goto LABEL_41;
      v39 = KeGetCurrentPrcb();
      v40 = v39->SchedulerAssist;
      v41 = (v40[5] & 0xFFFF0003) == 0;
      v40[5] &= 0xFFFF0003;
      if ( !v41 )
        goto LABEL_41;
    }
    else
    {
      if ( (*(_DWORD *)(v11 + 116) & 0x40) == 0 )
        goto LABEL_6;
      if ( !KiIrqlFlags
        || (KiIrqlFlags & 1) == 0
        || (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu
        || (v39 = KeGetCurrentPrcb(),
            v42 = v39->SchedulerAssist,
            v41 = (v42[5] & 0xFFFF0003) == 0,
            v42[5] &= 0xFFFF0003,
            !v41) )
      {
LABEL_41:
        __writecr8(1uLL);
        *(_DWORD *)(v11 + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
LABEL_6:
        LOBYTE(v10) = KiIrqlFlags;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            LOBYTE(v10) = KeGetCurrentIrql() - 2;
            if ( (unsigned __int8)v10 <= 0xDu )
            {
              v43 = KeGetCurrentPrcb();
              v44 = v43->SchedulerAssist;
              LODWORD(v10) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
              v41 = ((unsigned int)v10 & v44[5]) == 0;
              v44[5] &= v10;
              if ( v41 )
                LOBYTE(v10) = KiRemoveSystemWorkPriorityKick(v43);
            }
          }
        }
        __writecr8(v9);
        return v10;
      }
    }
    KiRemoveSystemWorkPriorityKick(v39);
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
