/*
 * XREFs of KeReleaseSemaphore @ 0x140327E90
 * Callers:
 *     PopIrpWorker @ 0x14039D0E0 (PopIrpWorker.c)
 *     NtSignalAndWaitForSingleObject @ 0x14055F4D0 (NtSignalAndWaitForSingleObject.c)
 *     AlpcpDoPortCleanup @ 0x14062924C (AlpcpDoPortCleanup.c)
 *     NtReleaseSemaphore @ 0x1406D57C0 (NtReleaseSemaphore.c)
 *     IopUncacheInterfaceInformation @ 0x14072C9C4 (IopUncacheInterfaceInformation.c)
 *     PnpAllocateResources @ 0x14073A218 (PnpAllocateResources.c)
 *     IopLegacyResourceAllocation @ 0x14073D9A4 (IopLegacyResourceAllocation.c)
 *     IopAllocateBootResources @ 0x1407A1AA0 (IopAllocateBootResources.c)
 *     IopInsertLegacyBusDeviceNode @ 0x1407B3FD4 (IopInsertLegacyBusDeviceNode.c)
 *     FsRtlpRegisterUncProvider @ 0x1407B4E28 (FsRtlpRegisterUncProvider.c)
 *     FsRtlDeregisterUncProvider @ 0x140888680 (FsRtlDeregisterUncProvider.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x1408A82A8 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x1408A8330 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x1408A83DC (PpProfileCommitTransitioningDock.c)
 *     PnpReallocateResources @ 0x1408B0060 (PnpReallocateResources.c)
 *     IopQueryConflictList @ 0x1408B6754 (IopQueryConflictList.c)
 *     NtReleaseKeyedEvent @ 0x140957C00 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x140957FC0 (NtWaitForKeyedEvent.c)
 *     PopSystemIrpCompletion @ 0x140993CF0 (PopSystemIrpCompletion.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140280030 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140280080 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x140282AC0 (KiWakeOtherQueueWaiters.c)
 *     KiExitDispatcher @ 0x140286FF0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140288BF0 (KiTryUnwaitThread.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x14050DBE4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A22F0 (EtwTraceEnqueueWork.c)
 */

// local variable allocation has failed, the output may be wrong!
LONG __stdcall KeReleaseSemaphore(PRKSEMAPHORE Semaphore, KPRIORITY Increment, LONG Adjustment, BOOLEAN Wait)
{
  LONG v4; // esi
  unsigned int v5; // r15d
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *v9; // rdx
  __int64 v10; // r8
  LONG SignalState; // edi
  LONG v12; // eax
  struct _KSEMAPHORE *Flink; // r13
  struct _KSEMAPHORE *v14; // rax
  __int64 v15; // rsi
  struct _KSEMAPHORE **v16; // rcx
  char v17; // al
  bool v18; // zf
  __int64 v19; // rdx
  unsigned __int8 v21; // cl
  __int64 CurrentThread; // r9
  __int64 v23; // rcx
  char v24; // al
  __int64 v25; // r9
  _DWORD *v26; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v28; // r9
  BOOL v29; // r14d
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r9
  _DWORD *SchedulerAssist; // r8
  int v33; // eax
  struct _KPRCB *v34; // [rsp+38h] [rbp-40h]
  __int64 v35; // [rsp+40h] [rbp-38h]
  __int64 v36; // [rsp+80h] [rbp+8h]

  v4 = Adjustment;
  v5 = Increment;
  v29 = Wait != 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    *(_QWORD *)&Wait = KeGetCurrentPrcb()->SchedulerAssist;
    *(_QWORD *)&Increment = (-1LL << (CurrentIrql + 1)) & 4;
    *(_QWORD *)&Adjustment = (unsigned int)Increment | *(_DWORD *)(Wait + 20LL);
    *(_DWORD *)(Wait + 20LL) = Adjustment;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(&Semaphore->Header.Lock, *(__int64 *)&Increment, *(__int64 *)&Adjustment, Wait);
  SignalState = Semaphore->Header.SignalState;
  v12 = SignalState + v4;
  if ( SignalState + v4 > Semaphore->Limit || v12 < SignalState )
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
          SchedulerAssist = v31->SchedulerAssist;
          v33 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v18 = (v33 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v33;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(v31);
        }
      }
    }
    __writecr8(CurrentIrql);
    RtlRaiseStatus(-1073741753);
  }
  Semaphore->Header.SignalState = v12;
  if ( !SignalState )
  {
    Flink = (struct _KSEMAPHORE *)Semaphore->Header.WaitListHead.Flink;
    while ( Flink != (struct _KSEMAPHORE *)&Semaphore->Header.WaitListHead )
    {
      v14 = *(struct _KSEMAPHORE **)&Flink->Header.Lock;
      v15 = (__int64)Flink;
      Flink = v14;
      v16 = *(struct _KSEMAPHORE ***)(v15 + 8);
      if ( v14->Header.WaitListHead.Flink != (struct _LIST_ENTRY *)v15 || *v16 != (struct _KSEMAPHORE *)v15 )
LABEL_7:
        __fastfail(3u);
      *v16 = v14;
      v14->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v16;
      v17 = *(_BYTE *)(v15 + 16);
      if ( v17 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v15, *(unsigned __int16 *)(v15 + 18), 0LL) )
        {
          v18 = Semaphore->Header.SignalState-- == 1;
          if ( v18 )
            break;
        }
      }
      else
      {
        if ( v17 == 2 )
        {
          *(_BYTE *)(v15 + 17) = 5;
          v36 = *(_QWORD *)(v15 + 24);
          *(_QWORD *)v15 = 0LL;
          v21 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v21 <= 0xFu )
          {
            v26 = KeGetCurrentPrcb()->SchedulerAssist;
            v9 = (_QWORD *)((-1LL << (v21 + 1)) & 4);
            v10 = (unsigned int)v9 | v26[5];
            v26[5] = v10;
          }
          v34 = KeGetCurrentPrcb();
          CurrentThread = (__int64)v34->CurrentThread;
          v35 = CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(CurrentThread, v9);
            EtwTraceEnqueueWork(v28, v15, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v36, (__int64)v9, v10, CurrentThread);
          v9 = (_QWORD *)(v36 + 8);
          v23 = v36;
          if ( (_QWORD *)*v9 == v9
            || *(_DWORD *)(v36 + 40) >= *(_DWORD *)(v36 + 44)
            || *(_QWORD *)(v35 + 232) == v36 && *(_BYTE *)(v35 + 643) == 15 )
          {
LABEL_31:
            v25 = *(unsigned int *)(v23 + 4);
            *(_DWORD *)(v23 + 4) = v25 + 1;
            v10 = *(_QWORD *)(v23 + 32);
            if ( *(_QWORD *)v10 != v23 + 24 )
              goto LABEL_7;
            *(_QWORD *)v15 = v23 + 24;
            *(_QWORD *)(v15 + 8) = v10;
            *(_QWORD *)v10 = v15;
            *(_QWORD *)(v23 + 32) = v15;
            if ( !(_DWORD)v25 && (_QWORD *)*v9 != v9 )
            {
              KiWakeOtherQueueWaiters((__int64)v34, v23, v10, v25);
              v23 = v36;
            }
          }
          else
          {
            v24 = KiWakeQueueWaiter((__int64)v34, v36, v15);
            v23 = v36;
            if ( !v24 )
            {
              v9 = (_QWORD *)(v36 + 8);
              goto LABEL_31;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v23, 0xFFFFFF7F);
          v18 = Semaphore->Header.SignalState-- == 1;
          if ( v18 )
            break;
          continue;
        }
        KiTryUnwaitThread((__int64)CurrentPrcb, v15, 256LL, 0LL);
      }
    }
  }
  _InterlockedAnd(&Semaphore->Header.Lock, 0xFFFFFF7F);
  v19 = 3LL;
  if ( !v29 )
    v19 = 0LL;
  KiExitDispatcher((__int64)CurrentPrcb, v19, 1LL, v5, CurrentIrql);
  return SignalState;
}
