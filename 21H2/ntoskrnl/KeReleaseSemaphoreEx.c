/*
 * XREFs of KeReleaseSemaphoreEx @ 0x140284630
 * Callers:
 *     PopFxRequestWorker @ 0x140284030 (PopFxRequestWorker.c)
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     MiCheckForControlAreaDeletion @ 0x1402850C8 (MiCheckForControlAreaDeletion.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A7A90 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpSignalAndWait @ 0x1402A9AC0 (AlpcpSignalAndWait.c)
 *     AlpcpSignal @ 0x1402AA060 (AlpcpSignal.c)
 *     PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x14036FAE8 (PnpDeviceCompletionQueueDispatchedEntryCompleted.c)
 *     PopFxQueueWorkOrder @ 0x1403811A8 (PopFxQueueWorkOrder.c)
 *     PopCompleteNotifyTransitionCommon @ 0x140388908 (PopCompleteNotifyTransitionCommon.c)
 *     PopDispatchQuerySetIrp @ 0x1403988F4 (PopDispatchQuerySetIrp.c)
 *     IoRaiseInformationalHardError @ 0x140505EB0 (IoRaiseInformationalHardError.c)
 *     PnpProcessRebalance @ 0x1405106DC (PnpProcessRebalance.c)
 *     MiQueuePageFileExtension @ 0x14054403C (MiQueuePageFileExtension.c)
 *     PopCompleteDirectedPowerTransitionCallback @ 0x140576C64 (PopCompleteDirectedPowerTransitionCallback.c)
 *     AlpcpSignalPortAndUnlock @ 0x1405F27DC (AlpcpSignalPortAndUnlock.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1406D133C (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpDoPortCleanup @ 0x1406D1848 (AlpcpDoPortCleanup.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1406D21B0 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpCancelMessage @ 0x1406D277C (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1406D3BA0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x1406D4D10 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     KiCompleteDirectSwitchThread @ 0x140284918 (KiCompleteDirectSwitchThread.c)
 *     KiWakeOtherQueueWaiters @ 0x1402E7B60 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F0D40 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x14034D570 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x140513294 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A79F0 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeReleaseSemaphoreEx(__int64 a1, int a2, int a3, __int64 a4, char a5)
{
  int v6; // r14d
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned int v10; // esi
  int v11; // eax
  int v12; // r12d
  _QWORD *v13; // r14
  _QWORD *v14; // rax
  _QWORD *v15; // rdi
  _QWORD *v16; // rcx
  char v17; // al
  bool v18; // zf
  unsigned __int8 v20; // cl
  _QWORD *v21; // r8
  __int64 v22; // rcx
  char v23; // al
  int v24; // r9d
  _QWORD *v25; // rdx
  unsigned __int8 IsThreadRunning; // al
  __int64 v27; // r9
  _DWORD *v28; // r9
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r9
  _DWORD *v32; // r8
  int v33; // eax
  struct _KPRCB *v34; // [rsp+30h] [rbp-48h]
  _KTHREAD *CurrentThread; // [rsp+38h] [rbp-40h]
  __int64 v37; // [rsp+98h] [rbp+20h]

  v6 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(a1);
  v10 = *(_DWORD *)(a1 + 4);
  v11 = v10 + a3;
  if ( (signed int)(v10 + a3) > *(_DWORD *)(a1 + 24) || v11 < (int)v10 )
  {
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
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
          v18 = (v33 & v32[5]) == 0;
          v32[5] &= v33;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(v31);
        }
      }
    }
    __writecr8(CurrentIrql);
    RtlRaiseStatus(-1073741753);
  }
  v12 = 0;
  *(_DWORD *)(a1 + 4) = v11;
  if ( !v10 )
  {
    v13 = *(_QWORD **)(a1 + 8);
    while ( v13 != (_QWORD *)(a1 + 8) )
    {
      v14 = (_QWORD *)*v13;
      v15 = v13;
      v13 = v14;
      v16 = (_QWORD *)v15[1];
      if ( (_QWORD *)v14[1] != v15 || (_QWORD *)*v16 != v15 )
LABEL_7:
        __fastfail(3u);
      *v16 = v14;
      v14[1] = v16;
      v17 = *((_BYTE *)v15 + 16);
      if ( v17 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v15, *((unsigned __int16 *)v15 + 9), 0LL) )
        {
          v18 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v18 )
            break;
        }
      }
      else
      {
        if ( v17 == 2 )
        {
          *((_BYTE *)v15 + 17) = 5;
          v37 = v15[3];
          *v15 = 0LL;
          v20 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v20 <= 0xFu )
          {
            v28 = KeGetCurrentPrcb()->SchedulerAssist;
            v28[5] |= (-1 << (v20 + 1)) & 4;
          }
          v34 = KeGetCurrentPrcb();
          CurrentThread = v34->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(v34->CurrentThread);
            EtwTraceEnqueueWork(v27, v15, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe(v37);
          v21 = (_QWORD *)(v37 + 8);
          v22 = v37;
          if ( (_QWORD *)*v21 == v21
            || *(_DWORD *)(v37 + 40) >= *(_DWORD *)(v37 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v37 && CurrentThread->WaitReason == 15 )
          {
LABEL_33:
            v24 = *(_DWORD *)(v22 + 4);
            *(_DWORD *)(v22 + 4) = v24 + 1;
            v25 = *(_QWORD **)(v22 + 32);
            if ( *v25 != v22 + 24 )
              goto LABEL_7;
            *v15 = v22 + 24;
            v15[1] = v25;
            *v25 = v15;
            *(_QWORD *)(v22 + 32) = v15;
            if ( !v24 && (_QWORD *)*v21 != v21 )
            {
              KiWakeOtherQueueWaiters(v34, v22);
              v22 = v37;
            }
          }
          else
          {
            v23 = KiWakeQueueWaiter(v34, v37, v15);
            v22 = v37;
            if ( !v23 )
            {
              v21 = (_QWORD *)(v37 + 8);
              goto LABEL_33;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v22, 0xFFFFFF7F);
          v18 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v18 )
            break;
          continue;
        }
        KiTryUnwaitThread(CurrentPrcb, v15, 256LL, 0LL);
      }
    }
    v6 = a2;
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( (a5 & 1) != 0 )
  {
    v12 = 1;
    if ( (a5 & 4) == 0 )
      v12 = 3;
  }
  else if ( (a5 & 2) != 0 )
  {
    KiCompleteDirectSwitchThread(CurrentPrcb, CurrentPrcb->CurrentThread);
  }
  KiExitDispatcher((_DWORD)CurrentPrcb, v12, 1, v6, CurrentIrql);
  return v10;
}
