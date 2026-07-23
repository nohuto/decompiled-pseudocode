/*
 * XREFs of KeReleaseSemaphore @ 0x140212600
 * Callers:
 *     PopIrpWorker @ 0x14039FFC0 (PopIrpWorker.c)
 *     NtSignalAndWaitForSingleObject @ 0x140564BB0 (NtSignalAndWaitForSingleObject.c)
 *     NtReleaseSemaphore @ 0x1405DD5C0 (NtReleaseSemaphore.c)
 *     AlpcpDoPortCleanup @ 0x1406D1848 (AlpcpDoPortCleanup.c)
 *     IopUncacheInterfaceInformation @ 0x14073E5B8 (IopUncacheInterfaceInformation.c)
 *     PnpAllocateResources @ 0x14074FEA8 (PnpAllocateResources.c)
 *     IopLegacyResourceAllocation @ 0x140753634 (IopLegacyResourceAllocation.c)
 *     IopAllocateBootResources @ 0x1407B5F60 (IopAllocateBootResources.c)
 *     IopInsertLegacyBusDeviceNode @ 0x1407C6DE8 (IopInsertLegacyBusDeviceNode.c)
 *     FsRtlpRegisterUncProvider @ 0x1407C7C38 (FsRtlpRegisterUncProvider.c)
 *     FsRtlDeregisterUncProvider @ 0x14088B8D0 (FsRtlDeregisterUncProvider.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x1408AB508 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x1408AB590 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x1408AB63C (PpProfileCommitTransitioningDock.c)
 *     PnpReallocateResources @ 0x1408B32C0 (PnpReallocateResources.c)
 *     IopQueryConflictList @ 0x1408B99B4 (IopQueryConflictList.c)
 *     NtReleaseKeyedEvent @ 0x14095B410 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x14095B7D0 (NtWaitForKeyedEvent.c)
 *     PopSystemIrpCompletion @ 0x140998040 (PopSystemIrpCompletion.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     KiWakeOtherQueueWaiters @ 0x1402E7B60 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F0D40 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x14034D570 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x140513294 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A79F0 (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeReleaseSemaphore(PRKSEMAPHORE Semaphore, KPRIORITY Increment, LONG Adjustment, BOOLEAN Wait)
{
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  LONG SignalState; // edi
  LONG v10; // eax
  struct _KSEMAPHORE *Flink; // r13
  struct _KSEMAPHORE *v12; // rax
  struct _KSEMAPHORE *v13; // rsi
  struct _LIST_ENTRY *v14; // rcx
  char Blink; // al
  bool v16; // zf
  int v17; // edx
  unsigned __int8 v19; // cl
  _QWORD *v20; // rdx
  __int64 v21; // rcx
  char v22; // al
  int v23; // r9d
  struct _KSEMAPHORE **v24; // r8
  _DWORD *v25; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v27; // r9
  BOOL v28; // r14d
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r9
  _DWORD *v32; // r8
  int v33; // eax
  struct _KPRCB *v34; // [rsp+38h] [rbp-40h]
  _KTHREAD *CurrentThread; // [rsp+40h] [rbp-38h]
  __int64 v36; // [rsp+80h] [rbp+8h]

  v28 = Wait != 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(Semaphore);
  SignalState = Semaphore->Header.SignalState;
  v10 = SignalState + Adjustment;
  if ( SignalState + Adjustment > Semaphore->Limit || v10 < SignalState )
  {
    _InterlockedAnd(&Semaphore->Header.Lock, 0xFFFFFF7F);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v30 = KeGetCurrentIrql();
        if ( v30 <= 0xFu && CurrentIrql <= 0xFu && v30 >= 2u )
        {
          v31 = KeGetCurrentPrcb();
          v32 = v31->SchedulerAssist;
          v33 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v16 = (v33 & v32[5]) == 0;
          v32[5] &= v33;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(v31);
        }
      }
    }
    __writecr8(CurrentIrql);
    RtlRaiseStatus(-1073741753);
  }
  Semaphore->Header.SignalState = v10;
  if ( !SignalState )
  {
    Flink = (struct _KSEMAPHORE *)Semaphore->Header.WaitListHead.Flink;
    while ( Flink != (struct _KSEMAPHORE *)&Semaphore->Header.WaitListHead )
    {
      v12 = *(struct _KSEMAPHORE **)&Flink->Header.Lock;
      v13 = Flink;
      Flink = v12;
      v14 = v13->Header.WaitListHead.Flink;
      if ( (struct _KSEMAPHORE *)v12->Header.WaitListHead.Flink != v13 || (struct _KSEMAPHORE *)v14->Flink != v13 )
LABEL_7:
        __fastfail(3u);
      v14->Flink = (struct _LIST_ENTRY *)v12;
      v12->Header.WaitListHead.Flink = v14;
      Blink = (char)v13->Header.WaitListHead.Blink;
      if ( Blink == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v13, WORD1(v13->Header.WaitListHead.Blink), 0LL) )
        {
          v16 = Semaphore->Header.SignalState-- == 1;
          if ( v16 )
            break;
        }
      }
      else
      {
        if ( Blink == 2 )
        {
          BYTE1(v13->Header.WaitListHead.Blink) = 5;
          v36 = *(_QWORD *)&v13->Limit;
          *(_QWORD *)&v13->Header.Lock = 0LL;
          v19 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v19 <= 0xFu )
          {
            v25 = KeGetCurrentPrcb()->SchedulerAssist;
            v25[5] |= (-1 << (v19 + 1)) & 4;
          }
          v34 = KeGetCurrentPrcb();
          CurrentThread = v34->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(v34->CurrentThread);
            EtwTraceEnqueueWork(v27, v13, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe(v36);
          v20 = (_QWORD *)(v36 + 8);
          v21 = v36;
          if ( (_QWORD *)*v20 == v20
            || *(_DWORD *)(v36 + 40) >= *(_DWORD *)(v36 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v36 && CurrentThread->WaitReason == 15 )
          {
LABEL_31:
            v23 = *(_DWORD *)(v21 + 4);
            *(_DWORD *)(v21 + 4) = v23 + 1;
            v24 = *(struct _KSEMAPHORE ***)(v21 + 32);
            if ( *v24 != (struct _KSEMAPHORE *)(v21 + 24) )
              goto LABEL_7;
            *(_QWORD *)&v13->Header.Lock = v21 + 24;
            v13->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v24;
            *v24 = v13;
            *(_QWORD *)(v21 + 32) = v13;
            if ( !v23 && (_QWORD *)*v20 != v20 )
            {
              KiWakeOtherQueueWaiters(v34, v21);
              v21 = v36;
            }
          }
          else
          {
            v22 = KiWakeQueueWaiter(v34, v36, v13);
            v21 = v36;
            if ( !v22 )
            {
              v20 = (_QWORD *)(v36 + 8);
              goto LABEL_31;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v21, 0xFFFFFF7F);
          v16 = Semaphore->Header.SignalState-- == 1;
          if ( v16 )
            break;
          continue;
        }
        KiTryUnwaitThread(CurrentPrcb, v13, 256LL, 0LL);
      }
    }
  }
  _InterlockedAnd(&Semaphore->Header.Lock, 0xFFFFFF7F);
  v17 = 3;
  if ( !v28 )
    v17 = 0;
  KiExitDispatcher((_DWORD)CurrentPrcb, v17, 1, Increment, CurrentIrql);
  return SignalState;
}
