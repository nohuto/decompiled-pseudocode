/*
 * XREFs of KeReleaseSemaphoreEx @ 0x140330D70
 * Callers:
 *     AlpcpSignalAndWait @ 0x140259F40 (AlpcpSignalAndWait.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140268DF0 (NtWaitForWorkViaWorkerFactory.c)
 *     MiCheckForControlAreaDeletion @ 0x1402F1478 (MiCheckForControlAreaDeletion.c)
 *     PopFxRequestWorker @ 0x1403122C0 (PopFxRequestWorker.c)
 *     VslpEnterIumSecureMode @ 0x14032A7E0 (VslpEnterIumSecureMode.c)
 *     AlpcpSignal @ 0x14033495C (AlpcpSignal.c)
 *     PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x14036B2B8 (PnpDeviceCompletionQueueDispatchedEntryCompleted.c)
 *     PopFxQueueWorkOrder @ 0x14037E838 (PopFxQueueWorkOrder.c)
 *     PopCompleteNotifyTransitionCommon @ 0x140384F48 (PopCompleteNotifyTransitionCommon.c)
 *     PopDispatchQuerySetIrp @ 0x1403952A4 (PopDispatchQuerySetIrp.c)
 *     IoRaiseInformationalHardError @ 0x140500490 (IoRaiseInformationalHardError.c)
 *     PnpProcessRebalance @ 0x14050A9EC (PnpProcessRebalance.c)
 *     MiQueuePageFileExtension @ 0x14053E2DC (MiQueuePageFileExtension.c)
 *     PopCompleteDirectedPowerTransitionCallback @ 0x140570F94 (PopCompleteDirectedPowerTransitionCallback.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x14060C1E0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x14060DDF0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpDoPortCleanup @ 0x140646DFC (AlpcpDoPortCleanup.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140647758 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14064A8F4 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x14064ACC0 (AlpcpCancelMessage.c)
 *     AlpcpSignalPortAndUnlock @ 0x1406E9E0C (AlpcpSignalPortAndUnlock.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140243980 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x1402462E0 (KiWakeOtherQueueWaiters.c)
 *     KiExitDispatcher @ 0x14024A750 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14024C350 (KiTryUnwaitThread.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     KiCompleteDirectSwitchThread @ 0x140331058 (KiCompleteDirectSwitchThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x14050D594 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A1C00 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeReleaseSemaphoreEx(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist, char a5)
{
  int v5; // edi
  unsigned int v6; // r14d
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // esi
  int v13; // eax
  unsigned int v14; // r12d
  _QWORD *v15; // r14
  _QWORD *v16; // rax
  __int64 v17; // rdi
  _QWORD *v18; // rcx
  char v19; // al
  bool v20; // zf
  unsigned __int8 v22; // cl
  __int64 CurrentThread; // r9
  __int64 v24; // rcx
  char v25; // al
  __int64 v26; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v28; // r9
  _DWORD *v29; // r9
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r9
  _DWORD *v32; // r8
  int v33; // eax
  struct _KPRCB *v34; // [rsp+30h] [rbp-48h]
  __int64 v35; // [rsp+38h] [rbp-40h]
  unsigned int v36; // [rsp+88h] [rbp+10h]
  __int64 v37; // [rsp+98h] [rbp+20h]

  v36 = a2;
  v5 = a3;
  v6 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, a2, a3, (__int64)SchedulerAssist);
  v12 = *(_DWORD *)(a1 + 4);
  v13 = v12 + v5;
  if ( (signed int)(v12 + v5) > *(_DWORD *)(a1 + 24) || v13 < (int)v12 )
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
          v20 = (v33 & v32[5]) == 0;
          v32[5] &= v33;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(v31);
        }
      }
    }
    __writecr8(CurrentIrql);
    RtlRaiseStatus(-1073741753);
  }
  v14 = 0;
  *(_DWORD *)(a1 + 4) = v13;
  if ( !v12 )
  {
    v15 = *(_QWORD **)(a1 + 8);
    while ( v15 != (_QWORD *)(a1 + 8) )
    {
      v16 = (_QWORD *)*v15;
      v17 = (__int64)v15;
      v15 = v16;
      v18 = *(_QWORD **)(v17 + 8);
      if ( v16[1] != v17 || *v18 != v17 )
LABEL_7:
        __fastfail(3u);
      *v18 = v16;
      v16[1] = v18;
      v19 = *(_BYTE *)(v17 + 16);
      if ( v19 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v17, *(unsigned __int16 *)(v17 + 18), 0LL) )
        {
          v20 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v20 )
            break;
        }
      }
      else
      {
        if ( v19 == 2 )
        {
          *(_BYTE *)(v17 + 17) = 5;
          v37 = *(_QWORD *)(v17 + 24);
          *(_QWORD *)v17 = 0LL;
          v22 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v22 <= 0xFu )
          {
            v29 = KeGetCurrentPrcb()->SchedulerAssist;
            v10 = (_QWORD *)((-1LL << (v22 + 1)) & 4);
            v11 = (unsigned int)v10 | v29[5];
            v29[5] = v11;
          }
          v34 = KeGetCurrentPrcb();
          CurrentThread = (__int64)v34->CurrentThread;
          v35 = CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(CurrentThread, v10);
            EtwTraceEnqueueWork(v28, v17, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v37, (__int64)v10, v11, CurrentThread);
          v11 = v37 + 8;
          v24 = v37;
          if ( *(_QWORD *)v11 == v11
            || *(_DWORD *)(v37 + 40) >= *(_DWORD *)(v37 + 44)
            || *(_QWORD *)(v35 + 232) == v37 && *(_BYTE *)(v35 + 643) == 15 )
          {
LABEL_33:
            v26 = *(unsigned int *)(v24 + 4);
            *(_DWORD *)(v24 + 4) = v26 + 1;
            v10 = *(_QWORD **)(v24 + 32);
            if ( *v10 != v24 + 24 )
              goto LABEL_7;
            *(_QWORD *)v17 = v24 + 24;
            *(_QWORD *)(v17 + 8) = v10;
            *v10 = v17;
            *(_QWORD *)(v24 + 32) = v17;
            if ( !(_DWORD)v26 && *(_QWORD *)v11 != v11 )
            {
              KiWakeOtherQueueWaiters((__int64)v34, v24, v11, v26);
              v24 = v37;
            }
          }
          else
          {
            v25 = KiWakeQueueWaiter((__int64)v34, v37, v17);
            v24 = v37;
            if ( !v25 )
            {
              v11 = v37 + 8;
              goto LABEL_33;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v24, 0xFFFFFF7F);
          v20 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v20 )
            break;
          continue;
        }
        KiTryUnwaitThread((__int64)CurrentPrcb, v17, 256LL, 0LL);
      }
    }
    v6 = v36;
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( (a5 & 1) != 0 )
  {
    v14 = 1;
    if ( (a5 & 4) == 0 )
      v14 = 3;
  }
  else if ( (a5 & 2) != 0 )
  {
    KiCompleteDirectSwitchThread(CurrentPrcb, CurrentPrcb->CurrentThread);
  }
  KiExitDispatcher((__int64)CurrentPrcb, v14, 1LL, v6, CurrentIrql);
  return v12;
}
