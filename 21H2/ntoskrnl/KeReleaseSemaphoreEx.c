/*
 * XREFs of KeReleaseSemaphoreEx @ 0x14035AD70
 * Callers:
 *     MiCheckForControlAreaDeletion @ 0x140220944 (MiCheckForControlAreaDeletion.c)
 *     NtSignalAndWaitForSingleObject @ 0x14024F140 (NtSignalAndWaitForSingleObject.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402BA130 (NtWaitForWorkViaWorkerFactory.c)
 *     PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x1402DE734 (PnpDeviceCompletionQueueDispatchedEntryCompleted.c)
 *     AlpcpSignalAndWait @ 0x1402F63D0 (AlpcpSignalAndWait.c)
 *     PopFxRequestWorker @ 0x140358140 (PopFxRequestWorker.c)
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     AlpcpSignal @ 0x14035AA74 (AlpcpSignal.c)
 *     PopCompleteNotifyTransitionCommon @ 0x1403945DC (PopCompleteNotifyTransitionCommon.c)
 *     PopDispatchQuerySetIrp @ 0x1403A3B18 (PopDispatchQuerySetIrp.c)
 *     PopIrpWorker @ 0x1403B1270 (PopIrpWorker.c)
 *     PopFxQueueWorkItem @ 0x1403B19D4 (PopFxQueueWorkItem.c)
 *     IoRaiseInformationalHardError @ 0x140557960 (IoRaiseInformationalHardError.c)
 *     PnpProcessRebalance @ 0x140564C24 (PnpProcessRebalance.c)
 *     MiQueuePageFileExtension @ 0x14059CE7C (MiQueuePageFileExtension.c)
 *     PopCompleteDirectedPowerTransitionCallback @ 0x1405D6DC4 (PopCompleteDirectedPowerTransitionCallback.c)
 *     AlpcpCancelMessage @ 0x140662E08 (AlpcpCancelMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1406652DC (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSignalPortAndUnlock @ 0x14074B82C (AlpcpSignalPortAndUnlock.c)
 *     AlpcpDoPortCleanup @ 0x14074DB0C (AlpcpDoPortCleanup.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14074E474 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1407A9A80 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x1407AACC0 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F6A70 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x1402F6BC0 (KiTryUnwaitThread.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     KiCompleteDirectSwitchThread @ 0x14035B090 (KiCompleteDirectSwitchThread.c)
 *     KiWakeOtherQueueWaiters @ 0x14035B550 (KiWakeOtherQueueWaiters.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x14056B1E4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14062DA60 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeReleaseSemaphoreEx(
        volatile signed __int32 *SystemArgument1,
        __int64 a2,
        __int64 a3,
        _DWORD *SchedulerAssist,
        char a5)
{
  int v5; // edi
  int v6; // r13d
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // esi
  int v13; // eax
  volatile signed __int32 *v14; // r14
  __int64 v15; // rax
  volatile signed __int32 *v16; // rdi
  void **v17; // rcx
  char v18; // al
  bool v19; // zf
  char v20; // bl
  unsigned __int8 v22; // cl
  __int64 CurrentThread; // r9
  __int64 v24; // r9
  __int64 v25; // rcx
  char v26; // al
  int v27; // r9d
  _DWORD *v28; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v30; // r9
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r9
  _DWORD *v33; // r8
  int v34; // eax
  struct _KPRCB *v35; // [rsp+30h] [rbp-48h]
  __int64 v36; // [rsp+38h] [rbp-40h]
  __int64 v37; // [rsp+98h] [rbp+20h]

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
  KiAcquireKobjectLockSafe(SystemArgument1, a2, a3, (__int64)SchedulerAssist);
  v12 = *((_DWORD *)SystemArgument1 + 1);
  v13 = v12 + v5;
  if ( (signed int)(v12 + v5) > *((_DWORD *)SystemArgument1 + 6) || v13 < (int)v12 )
  {
    _InterlockedAnd(SystemArgument1, 0xFFFFFF7F);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v31 = KeGetCurrentIrql();
        if ( v31 <= 0xFu && CurrentIrql <= 0xFu && v31 >= 2u )
        {
          v32 = KeGetCurrentPrcb();
          v33 = v32->SchedulerAssist;
          v34 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v19 = (v34 & v33[5]) == 0;
          v33[5] &= v34;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(v32);
        }
      }
    }
    __writecr8(CurrentIrql);
    RtlRaiseStatus(-1073741753);
  }
  *((_DWORD *)SystemArgument1 + 1) = v13;
  if ( !v12 )
  {
    v14 = (volatile signed __int32 *)*((_QWORD *)SystemArgument1 + 1);
    while ( v14 != SystemArgument1 + 2 )
    {
      v15 = *(_QWORD *)v14;
      v16 = v14;
      v14 = (volatile signed __int32 *)v15;
      v17 = (void **)*((_QWORD *)v16 + 1);
      if ( *(volatile signed __int32 **)(v15 + 8) != v16 || *v17 != v16 )
LABEL_7:
        __fastfail(3u);
      *v17 = (void *)v15;
      *(_QWORD *)(v15 + 8) = v17;
      v18 = *((_BYTE *)v16 + 16);
      switch ( v18 )
      {
        case 1:
          if ( (unsigned __int8)KiTryUnwaitThread(
                                  (__int64)CurrentPrcb,
                                  (__int64)v16,
                                  *((unsigned __int16 *)v16 + 9),
                                  0LL) )
          {
            v19 = (*((_DWORD *)SystemArgument1 + 1))-- == 1;
            if ( v19 )
              goto LABEL_15;
          }
          break;
        case 2:
          *((_BYTE *)v16 + 17) = 5;
          v37 = *((_QWORD *)v16 + 3);
          *(_QWORD *)v16 = 0LL;
          v22 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v22 <= 0xFu )
          {
            v28 = KeGetCurrentPrcb()->SchedulerAssist;
            v10 = (_QWORD *)((-1LL << (v22 + 1)) & 4);
            v11 = (unsigned int)v10 | v28[5];
            v28[5] = v11;
          }
          v35 = KeGetCurrentPrcb();
          CurrentThread = (__int64)v35->CurrentThread;
          v36 = CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(CurrentThread);
            EtwTraceEnqueueWork(v30, v16, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v37, (__int64)v10, v11, CurrentThread);
          v11 = v37 + 8;
          v25 = v37;
          if ( *(_QWORD *)v11 == v11
            || *(_DWORD *)(v37 + 40) >= *(_DWORD *)(v37 + 44)
            || *(_QWORD *)(v36 + 232) == v37 && *(_BYTE *)(v36 + 643) == 15 )
          {
LABEL_35:
            v27 = *(_DWORD *)(v25 + 4);
            *(_DWORD *)(v25 + 4) = v27 + 1;
            v10 = *(_QWORD **)(v25 + 32);
            if ( *v10 != v25 + 24 )
              goto LABEL_7;
            *(_QWORD *)v16 = v25 + 24;
            *((_QWORD *)v16 + 1) = v10;
            *v10 = v16;
            *(_QWORD *)(v25 + 32) = v16;
            if ( !v27 && *(_QWORD *)v11 != v11 )
            {
              KiWakeOtherQueueWaiters(v35, v25);
              v25 = v37;
            }
          }
          else
          {
            v26 = KiWakeQueueWaiter((__int64)v35, v37, (__int64)v16, v24);
            v25 = v37;
            if ( !v26 )
            {
              v11 = v37 + 8;
              goto LABEL_35;
            }
            *(_QWORD *)v16 = 0LL;
          }
          _InterlockedAnd((volatile signed __int32 *)v25, 0xFFFFFF7F);
          v19 = (*((_DWORD *)SystemArgument1 + 1))-- == 1;
          if ( v19 )
            goto LABEL_15;
          break;
        case 4:
          *((_BYTE *)v16 + 17) = 5;
          *((_DWORD *)SystemArgument1 + 1) = 0;
          KeInsertQueueDpc(*((PRKDPC *)v16 + 3), (PVOID)SystemArgument1, (PVOID)v16);
          break;
        default:
          KiTryUnwaitThread((__int64)CurrentPrcb, (__int64)v16, 256LL, 0LL);
          break;
      }
    }
  }
LABEL_15:
  _InterlockedAnd(SystemArgument1, 0xFFFFFF7F);
  if ( (a5 & 1) != 0 )
  {
    v20 = 1;
    if ( (a5 & 4) == 0 )
      v20 = 3;
  }
  else
  {
    v20 = 0;
    if ( (a5 & 2) != 0 )
      KiCompleteDirectSwitchThread(CurrentPrcb, CurrentPrcb->CurrentThread);
  }
  KiExitDispatcher((__int64)CurrentPrcb, v20, 1, v6, CurrentIrql);
  return v12;
}
