/*
 * XREFs of KeSetAffinityThread @ 0x140398F5C
 * Callers:
 *     ExpWorkerThread @ 0x14028E4C0 (ExpWorkerThread.c)
 *     NtSetInformationThread @ 0x14060E970 (NtSetInformationThread.c)
 *     ExpWorkQueueManagerThread @ 0x1407A6A90 (ExpWorkQueueManagerThread.c)
 * Callees:
 *     KiAbProcessContextSwitch @ 0x14021DA40 (KiAbProcessContextSwitch.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14022EA40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiReadyDeferredReadyList @ 0x1402BE7C0 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x1402DAAA0 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1402DC4D0 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402DDAB0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiSetAffinityThread @ 0x1402F7A00 (KiSetAffinityThread.c)
 *     KiRequestSoftwareInterrupt @ 0x1402F7EF4 (KiRequestSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140403E60 (KiSwapContext.c)
 *     KiExtendProcessAffinity @ 0x14052291C (KiExtendProcessAffinity.c)
 */

unsigned __int8 __fastcall KeSetAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v8; // r9
  __int64 v9; // r8
  unsigned __int8 result; // al
  ULONG_PTR CurrentThread; // rsi
  bool v12; // zf
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  struct _KPRCB *v16; // rdi
  _DWORD *v17; // rcx
  _KTHREAD *NextThread; // rdi
  __int64 v19; // r8
  __int64 v20; // r8
  _DWORD *v21; // rcx
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  int v24; // eax
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rdx
  struct _KPRCB *v27; // r9
  _DWORD *v28; // r8
  int v29; // eax
  int v30; // [rsp+60h] [rbp+8h] BYREF
  _SINGLE_LIST_ENTRY v31; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(unsigned __int16 *)(a2 + 8);
  v4 = *(_QWORD *)(a1 + 544);
  v31.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  v9 = *(_QWORD *)(v4 + 8 * v2 + 88);
  if ( !v9 || (v9 & *(_QWORD *)a2) != *(_QWORD *)a2 )
    KiExtendProcessAffinity(v4);
  if ( !*(_QWORD *)a2 )
    *(_QWORD *)a2 = *(_QWORD *)(v4 + 8 * v2 + 88);
  KiSetAffinityThread(a1, (__int64)&v31, a2, v8);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  result = (unsigned __int8)KiReadyDeferredReadyList((__int64)CurrentPrcb, &v31);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      result = CurrentPrcb->DpcRoutineActive;
      if ( !result )
        return KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    }
  }
  else
  {
    CurrentThread = (ULONG_PTR)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
      v16 = KeGetCurrentPrcb();
      v30 = 0;
      while ( 1 )
      {
        v17 = v16->SchedulerAssist;
        if ( v17 )
        {
          if ( v16->NestingLevel <= 1u )
          {
            v23 = v17[6];
            v17[6] = v23 + 1;
            if ( v23 == -1 )
              KiRemoveSystemWorkPriorityKick(v16);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v21 = v16->SchedulerAssist;
        if ( v21 )
        {
          if ( v16->NestingLevel <= 1u )
          {
            v24 = v21[6] - 1;
            v21[6] = v24;
            if ( !v24 )
              KiRemoveSystemWorkPriorityKick(v16);
          }
        }
        do
          KeYieldProcessorEx(&v30, v13, v14, v15);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
      {
        v19 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v19 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v19);
      LOBYTE(v20) = CurrentIrql;
      v12 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v20) == 0;
    }
    else
    {
      v12 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v12 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v25 = KeGetCurrentPrcb();
          v26 = v25->SchedulerAssist;
          v12 = (v26[5] & 0xFFFF0003) == 0;
          v26[5] &= 0xFFFF0003;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(v25);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v27 = KeGetCurrentPrcb();
      v28 = v27->SchedulerAssist;
      v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v12 = (v29 & v28[5]) == 0;
      v28[5] &= v29;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick(v27);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
