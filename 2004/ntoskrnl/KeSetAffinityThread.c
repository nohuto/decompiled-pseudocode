/*
 * XREFs of KeSetAffinityThread @ 0x140396A9C
 * Callers:
 *     ExpWorkerThread @ 0x1402B84F0 (ExpWorkerThread.c)
 *     NtSetInformationThread @ 0x140673B60 (NtSetInformationThread.c)
 *     ExpWorkQueueManagerThread @ 0x140797760 (ExpWorkQueueManagerThread.c)
 * Callees:
 *     KiAbProcessContextSwitch @ 0x14020D880 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14020EAE0 (KiDeliverApc.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiReadyDeferredReadyList @ 0x140214140 (KiReadyDeferredReadyList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14024A7A0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRequestSoftwareInterrupt @ 0x140273DA8 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x1402EB520 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1402EDF50 (KiQueueReadyThread.c)
 *     KiSetAffinityThread @ 0x14030BB20 (KiSetAffinityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1403FDDE0 (KiSwapContext.c)
 *     KiExtendProcessAffinity @ 0x14051EF4C (KiExtendProcessAffinity.c)
 */

unsigned __int8 __fastcall KeSetAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int8 result; // al
  ULONG_PTR CurrentThread; // rsi
  bool v14; // zf
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  struct _KPRCB *v18; // rdi
  _DWORD *v19; // rcx
  _KTHREAD *NextThread; // rdi
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r8
  _DWORD *v24; // rcx
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  int v27; // eax
  struct _KPRCB *v28; // rcx
  _DWORD *v29; // rdx
  struct _KPRCB *v30; // r9
  _DWORD *v31; // r8
  int v32; // eax
  int v33; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v34; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(unsigned __int16 *)(a2 + 8);
  v4 = *(_QWORD *)(a1 + 544);
  v34 = 0LL;
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
  KiSetAffinityThread(a1, (__int64)&v34, a2, v8);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  result = (unsigned __int8)KiReadyDeferredReadyList((__int64)CurrentPrcb, &v34, v10, v11);
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
      v18 = KeGetCurrentPrcb();
      v33 = 0;
      while ( 1 )
      {
        v19 = v18->SchedulerAssist;
        if ( v19 )
        {
          if ( v18->NestingLevel <= 1u )
          {
            v26 = v19[6];
            v19[6] = v26 + 1;
            if ( v26 == -1 )
              KiRemoveSystemWorkPriorityKick(v18);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v24 = v18->SchedulerAssist;
        if ( v24 )
        {
          if ( v18->NestingLevel <= 1u )
          {
            v27 = v24[6] - 1;
            v24[6] = v27;
            if ( !v27 )
              KiRemoveSystemWorkPriorityKick(v18);
          }
        }
        do
          KeYieldProcessorEx(&v33, v15, v16, v17);
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
        v21 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v21 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, CurrentThread, v21, v22);
      LOBYTE(v23) = CurrentIrql;
      v14 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v23) == 0;
    }
    else
    {
      v14 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v14 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v28 = KeGetCurrentPrcb();
          v29 = v28->SchedulerAssist;
          v14 = (v29[5] & 0xFFFF0003) == 0;
          v29[5] &= 0xFFFF0003;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(v28);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0LL, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v30 = KeGetCurrentPrcb();
      v31 = v30->SchedulerAssist;
      v32 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v14 = (v32 & v31[5]) == 0;
      v31[5] &= v32;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(v30);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
