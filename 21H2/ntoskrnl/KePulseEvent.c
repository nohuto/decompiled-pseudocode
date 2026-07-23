/*
 * XREFs of KePulseEvent @ 0x14025FA60
 * Callers:
 *     MiWorkingSetManager @ 0x140260C00 (MiWorkingSetManager.c)
 *     MmResourcesAvailable @ 0x1403493B0 (MmResourcesAvailable.c)
 *     KeBalanceSetManager @ 0x1403B9250 (KeBalanceSetManager.c)
 *     MiPulseCommitSignal @ 0x140550794 (MiPulseCommitSignal.c)
 *     MiPulseLowAvailableEvent @ 0x14055C21C (MiPulseLowAvailableEvent.c)
 *     NtPulseEvent @ 0x14063B520 (NtPulseEvent.c)
 *     MiAddPhysicalMemory @ 0x1408C4FF0 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1408C60EC (MiRemovePhysicalMemory.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x1402E7B60 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F0D40 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x14034D570 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     KeIsThreadRunning @ 0x140513294 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A79F0 (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KePulseEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait)
{
  char v4; // bl
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rdi
  LIST_ENTRY *p_WaitListHead; // r14
  struct _LIST_ENTRY *Flink; // r15
  struct _LIST_ENTRY *v10; // rbx
  char v11; // al
  __int64 v12; // r8
  _DWORD *SchedulerAssist; // r9
  struct _LIST_ENTRY *v14; // rax
  struct _LIST_ENTRY *v15; // rbx
  struct _LIST_ENTRY *v16; // rcx
  char v17; // al
  bool v18; // zf
  struct _LIST_ENTRY *v19; // rdi
  struct _LIST_ENTRY **v20; // r12
  unsigned __int8 v21; // cl
  _DWORD *v22; // r9
  struct _KPRCB *v23; // r13
  _KTHREAD *v24; // rbp
  __int64 v25; // r8
  int v26; // r8d
  struct _LIST_ENTRY *v27; // rdx
  struct _LIST_ENTRY *Blink; // rdi
  struct _LIST_ENTRY **p_Blink; // r12
  unsigned __int8 v30; // cl
  _DWORD *v31; // r9
  struct _KPRCB *v32; // r13
  _KTHREAD *CurrentThread; // rbp
  __int64 v34; // r8
  int Flink_high; // r8d
  struct _LIST_ENTRY *v36; // rdx
  char v37; // [rsp+30h] [rbp-58h]
  LONG SignalState; // [rsp+90h] [rbp+8h]
  struct _KPRCB *v41; // [rsp+A8h] [rbp+20h]

  v4 = Event->Header.Type & 0x7F;
  CurrentIrql = KeGetCurrentIrql();
  v37 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v41 = CurrentPrcb;
  KiAcquireKobjectLockSafe(Event);
  SignalState = Event->Header.SignalState;
  if ( !SignalState )
  {
    Event->Header.SignalState = 1;
    p_WaitListHead = &Event->Header.WaitListHead;
    Flink = Event->Header.WaitListHead.Flink;
    if ( !v4 )
    {
      while ( 1 )
      {
        if ( Flink == p_WaitListHead )
        {
          Event->Header.WaitListHead.Blink = &Event->Header.WaitListHead;
          p_WaitListHead->Flink = p_WaitListHead;
          goto LABEL_6;
        }
        v10 = Flink;
        Flink = Flink->Flink;
        v11 = (char)v10[1].Flink;
        if ( v11 == 1 )
          break;
        if ( v11 == 2 )
        {
          BYTE1(v10[1].Flink) = 5;
          Blink = v10[1].Blink;
          v10->Flink = 0LL;
          p_Blink = &Blink->Blink;
          v30 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v30 <= 0xFu )
          {
            v31 = KeGetCurrentPrcb()->SchedulerAssist;
            v31[5] |= (-1 << (v30 + 1)) & 4;
          }
          v32 = KeGetCurrentPrcb();
          CurrentThread = v32->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            LOBYTE(v34) = KeIsThreadRunning(v32->CurrentThread);
            EtwTraceEnqueueWork(CurrentThread, v10, v34);
          }
          KiAcquireKobjectLockSafe(Blink);
          if ( *p_Blink == (struct _LIST_ENTRY *)p_Blink
            || LODWORD(Blink[2].Blink) >= HIDWORD(Blink[2].Blink)
            || (struct _LIST_ENTRY *)CurrentThread->Queue == Blink && CurrentThread->WaitReason == 15
            || !(unsigned __int8)KiWakeQueueWaiter(v32, Blink, v10) )
          {
            Flink_high = HIDWORD(Blink->Flink);
            HIDWORD(Blink->Flink) = Flink_high + 1;
            v36 = Blink[2].Flink;
            if ( v36->Flink != (struct _LIST_ENTRY *)&Blink[1].Blink )
              goto LABEL_58;
            v10->Flink = (struct _LIST_ENTRY *)((char *)Blink + 24);
            v10->Blink = v36;
            v36->Flink = v10;
            Blink[2].Flink = v10;
            if ( !Flink_high && *p_Blink != (struct _LIST_ENTRY *)p_Blink )
              KiWakeOtherQueueWaiters(v32, Blink);
          }
          _InterlockedAnd((volatile signed __int32 *)Blink, 0xFFFFFF7F);
          CurrentPrcb = v41;
        }
        else
        {
          v12 = 256LL;
LABEL_9:
          KiTryUnwaitThread(CurrentPrcb, v10, v12, 0LL);
        }
      }
      v12 = WORD1(v10[1].Flink);
      goto LABEL_9;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        if ( Flink == p_WaitListHead )
          goto LABEL_6;
        v14 = Flink->Flink;
        v15 = Flink;
        Flink = v14;
        v16 = v15->Blink;
        if ( v14->Blink != v15 || v16->Flink != v15 )
LABEL_58:
          __fastfail(3u);
        v16->Flink = v14;
        v14->Blink = v16;
        v17 = (char)v15[1].Flink;
        if ( v17 == 1 )
          break;
        if ( v17 == 2 )
        {
          BYTE1(v15[1].Flink) = 5;
          v19 = v15[1].Blink;
          v15->Flink = 0LL;
          v20 = &v19->Blink;
          v21 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v21 <= 0xFu )
          {
            v22 = KeGetCurrentPrcb()->SchedulerAssist;
            v22[5] |= (-1 << (v21 + 1)) & 4;
          }
          v23 = KeGetCurrentPrcb();
          v24 = v23->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            LOBYTE(v25) = KeIsThreadRunning(v23->CurrentThread);
            EtwTraceEnqueueWork(v24, v15, v25);
          }
          KiAcquireKobjectLockSafe(v19);
          if ( *v20 == (struct _LIST_ENTRY *)v20
            || LODWORD(v19[2].Blink) >= HIDWORD(v19[2].Blink)
            || (struct _LIST_ENTRY *)v24->Queue == v19 && v24->WaitReason == 15
            || !(unsigned __int8)KiWakeQueueWaiter(v23, v19, v15) )
          {
            v26 = HIDWORD(v19->Flink);
            HIDWORD(v19->Flink) = v26 + 1;
            v27 = v19[2].Flink;
            if ( v27->Flink != (struct _LIST_ENTRY *)&v19[1].Blink )
              goto LABEL_58;
            v15->Flink = (struct _LIST_ENTRY *)((char *)v19 + 24);
            v15->Blink = v27;
            v27->Flink = v15;
            v19[2].Flink = v15;
            if ( !v26 && *v20 != (struct _LIST_ENTRY *)v20 )
              KiWakeOtherQueueWaiters(v23, v19);
          }
          _InterlockedAnd((volatile signed __int32 *)v19, 0xFFFFFF7F);
          v18 = Event->Header.SignalState-- == 1;
          if ( v18 )
            goto LABEL_6;
          CurrentPrcb = v41;
        }
        else
        {
          KiTryUnwaitThread(CurrentPrcb, v15, 256LL, 0LL);
        }
      }
      if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v15, WORD1(v15[1].Flink), 0LL) )
      {
        v18 = Event->Header.SignalState-- == 1;
        if ( v18 )
          break;
      }
    }
  }
LABEL_6:
  Event->Header.SignalState = 0;
  _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
  KiExitDispatcher((_DWORD)v41, Wait != 0 ? 3 : 0, 1, Increment, v37);
  return SignalState;
}
