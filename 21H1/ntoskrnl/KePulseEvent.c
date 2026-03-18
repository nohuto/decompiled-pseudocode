/*
 * XREFs of KePulseEvent @ 0x1402F6B10
 * Callers:
 *     MiWorkingSetManager @ 0x140240450 (MiWorkingSetManager.c)
 *     MmResourcesAvailable @ 0x140252360 (MmResourcesAvailable.c)
 *     KeBalanceSetManager @ 0x1403B4E10 (KeBalanceSetManager.c)
 *     MiPulseCommitSignal @ 0x14054AA64 (MiPulseCommitSignal.c)
 *     MiPulseLowAvailableEvent @ 0x1405564EC (MiPulseLowAvailableEvent.c)
 *     NtPulseEvent @ 0x1406BB5D0 (NtPulseEvent.c)
 *     MiAddPhysicalMemory @ 0x1408C0540 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1408C163C (MiRemovePhysicalMemory.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140243980 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x1402462E0 (KiWakeOtherQueueWaiters.c)
 *     KiExitDispatcher @ 0x14024A750 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14024C350 (KiTryUnwaitThread.c)
 *     KeIsThreadRunning @ 0x14050D594 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A1C00 (EtwTraceEnqueueWork.c)
 */

// local variable allocation has failed, the output may be wrong!
LONG __stdcall KePulseEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait)
{
  _DWORD *SchedulerAssist; // r9
  char v5; // bl
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rdi
  _QWORD *v8; // rdx
  __int64 v9; // r8
  _DWORD *v10; // r9
  LIST_ENTRY *p_WaitListHead; // r14
  struct _LIST_ENTRY *Flink; // r15
  __int64 v14; // rbx
  char v15; // al
  __int64 v16; // r8
  struct _LIST_ENTRY *v17; // rax
  __int64 v18; // rbx
  struct _LIST_ENTRY *v19; // rcx
  char v20; // al
  bool v21; // zf
  __int64 v22; // rdi
  _QWORD *v23; // r12
  unsigned __int8 v24; // cl
  struct _KPRCB *v25; // r13
  _KTHREAD *v26; // rbp
  __int64 v27; // r8
  __int64 v28; // rdi
  _QWORD *v29; // r12
  unsigned __int8 v30; // cl
  struct _KPRCB *v31; // r13
  _KTHREAD *CurrentThread; // rbp
  __int64 v33; // r8
  unsigned __int8 v34; // [rsp+30h] [rbp-58h]
  LONG SignalState; // [rsp+90h] [rbp+8h]
  unsigned int v36; // [rsp+98h] [rbp+10h]
  BOOLEAN v37; // [rsp+A0h] [rbp+18h]
  __int64 v38; // [rsp+A8h] [rbp+20h]

  v37 = Wait;
  v36 = Increment;
  v5 = Event->Header.Type & 0x7F;
  CurrentIrql = KeGetCurrentIrql();
  v34 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    *(_QWORD *)&Increment = (-1LL << (CurrentIrql + 1)) & 4;
    *(_QWORD *)&Wait = (unsigned int)Increment | SchedulerAssist[5];
    SchedulerAssist[5] = Wait;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v38 = (__int64)CurrentPrcb;
  KiAcquireKobjectLockSafe(&Event->Header.Lock, *(__int64 *)&Increment, Wait, (__int64)SchedulerAssist);
  SignalState = Event->Header.SignalState;
  if ( !SignalState )
  {
    Event->Header.SignalState = 1;
    p_WaitListHead = &Event->Header.WaitListHead;
    Flink = Event->Header.WaitListHead.Flink;
    if ( !v5 )
    {
      while ( 1 )
      {
        if ( Flink == p_WaitListHead )
        {
          Event->Header.WaitListHead.Blink = &Event->Header.WaitListHead;
          p_WaitListHead->Flink = p_WaitListHead;
          goto LABEL_6;
        }
        v14 = (__int64)Flink;
        Flink = Flink->Flink;
        v15 = *(_BYTE *)(v14 + 16);
        if ( v15 == 1 )
          break;
        if ( v15 == 2 )
        {
          *(_BYTE *)(v14 + 17) = 5;
          v28 = *(_QWORD *)(v14 + 24);
          *(_QWORD *)v14 = 0LL;
          v29 = (_QWORD *)(v28 + 8);
          v30 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v30 <= 0xFu )
          {
            v10 = KeGetCurrentPrcb()->SchedulerAssist;
            v8 = (_QWORD *)((-1LL << (v30 + 1)) & 4);
            v9 = (unsigned int)v8 | v10[5];
            v10[5] = v9;
          }
          v31 = KeGetCurrentPrcb();
          CurrentThread = v31->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            LOBYTE(v33) = KeIsThreadRunning(v31->CurrentThread, v8);
            EtwTraceEnqueueWork(CurrentThread, v14, v33);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v28, (__int64)v8, v9, (__int64)v10);
          if ( (_QWORD *)*v29 == v29
            || *(_DWORD *)(v28 + 40) >= *(_DWORD *)(v28 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v28 && CurrentThread->WaitReason == 15
            || !KiWakeQueueWaiter((__int64)v31, v28, v14) )
          {
            v9 = *(unsigned int *)(v28 + 4);
            *(_DWORD *)(v28 + 4) = v9 + 1;
            v8 = *(_QWORD **)(v28 + 32);
            if ( *v8 != v28 + 24 )
              goto LABEL_58;
            *(_QWORD *)v14 = v28 + 24;
            *(_QWORD *)(v14 + 8) = v8;
            *v8 = v14;
            *(_QWORD *)(v28 + 32) = v14;
            if ( !(_DWORD)v9 && (_QWORD *)*v29 != v29 )
              KiWakeOtherQueueWaiters((__int64)v31, v28, v9, (__int64)v10);
          }
          _InterlockedAnd((volatile signed __int32 *)v28, 0xFFFFFF7F);
          CurrentPrcb = (struct _KPRCB *)v38;
        }
        else
        {
          v16 = 256LL;
LABEL_9:
          KiTryUnwaitThread((__int64)CurrentPrcb, v14, v16, 0LL);
        }
      }
      v16 = *(unsigned __int16 *)(v14 + 18);
      goto LABEL_9;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        if ( Flink == p_WaitListHead )
          goto LABEL_6;
        v17 = Flink->Flink;
        v18 = (__int64)Flink;
        Flink = v17;
        v19 = *(struct _LIST_ENTRY **)(v18 + 8);
        if ( v17->Blink != (struct _LIST_ENTRY *)v18 || v19->Flink != (struct _LIST_ENTRY *)v18 )
LABEL_58:
          __fastfail(3u);
        v19->Flink = v17;
        v17->Blink = v19;
        v20 = *(_BYTE *)(v18 + 16);
        if ( v20 == 1 )
          break;
        if ( v20 == 2 )
        {
          *(_BYTE *)(v18 + 17) = 5;
          v22 = *(_QWORD *)(v18 + 24);
          *(_QWORD *)v18 = 0LL;
          v23 = (_QWORD *)(v22 + 8);
          v24 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v24 <= 0xFu )
          {
            v10 = KeGetCurrentPrcb()->SchedulerAssist;
            v8 = (_QWORD *)((-1LL << (v24 + 1)) & 4);
            v9 = (unsigned int)v8 | v10[5];
            v10[5] = v9;
          }
          v25 = KeGetCurrentPrcb();
          v26 = v25->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            LOBYTE(v27) = KeIsThreadRunning(v25->CurrentThread, v8);
            EtwTraceEnqueueWork(v26, v18, v27);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v22, (__int64)v8, v9, (__int64)v10);
          if ( (_QWORD *)*v23 == v23
            || *(_DWORD *)(v22 + 40) >= *(_DWORD *)(v22 + 44)
            || v26->Queue == (_DISPATCHER_HEADER *volatile)v22 && v26->WaitReason == 15
            || !KiWakeQueueWaiter((__int64)v25, v22, v18) )
          {
            v9 = *(unsigned int *)(v22 + 4);
            *(_DWORD *)(v22 + 4) = v9 + 1;
            v8 = *(_QWORD **)(v22 + 32);
            if ( *v8 != v22 + 24 )
              goto LABEL_58;
            *(_QWORD *)v18 = v22 + 24;
            *(_QWORD *)(v18 + 8) = v8;
            *v8 = v18;
            *(_QWORD *)(v22 + 32) = v18;
            if ( !(_DWORD)v9 && (_QWORD *)*v23 != v23 )
              KiWakeOtherQueueWaiters((__int64)v25, v22, v9, (__int64)v10);
          }
          _InterlockedAnd((volatile signed __int32 *)v22, 0xFFFFFF7F);
          v21 = Event->Header.SignalState-- == 1;
          if ( v21 )
            goto LABEL_6;
          CurrentPrcb = (struct _KPRCB *)v38;
        }
        else
        {
          KiTryUnwaitThread((__int64)CurrentPrcb, v18, 256LL, 0LL);
        }
      }
      if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v18, *(unsigned __int16 *)(v18 + 18), 0LL) )
      {
        v21 = Event->Header.SignalState-- == 1;
        if ( v21 )
          break;
      }
    }
  }
LABEL_6:
  Event->Header.SignalState = 0;
  _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
  KiExitDispatcher(v38, v37 != 0 ? 3 : 0, 1LL, v36, v34);
  return SignalState;
}
