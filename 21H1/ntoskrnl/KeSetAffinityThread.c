/*
 * XREFs of KeSetAffinityThread @ 0x140395ECC
 * Callers:
 *     ExpWorkerThread @ 0x140225870 (ExpWorkerThread.c)
 *     NtSetInformationThread @ 0x1405FBA80 (NtSetInformationThread.c)
 *     ExpWorkQueueManagerThread @ 0x1407979B0 (ExpWorkQueueManagerThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1402668D0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140267B30 (KiDeliverApc.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiReadyDeferredReadyList @ 0x14026D190 (KiReadyDeferredReadyList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402A37D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiSetAffinityThread @ 0x1402CA140 (KiSetAffinityThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140330660 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140333090 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140359A48 (KiRequestSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1403FCB50 (KiSwapContext.c)
 *     KiExtendProcessAffinity @ 0x14051E8FC (KiExtendProcessAffinity.c)
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
  _DWORD *v13; // r9
  ULONG_PTR CurrentThread; // rsi
  bool v15; // zf
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _KPRCB *v19; // rdi
  _DWORD *v20; // rcx
  _KTHREAD *NextThread; // rdi
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r8
  _DWORD *v25; // rcx
  _DWORD *SchedulerAssist; // r9
  int v27; // eax
  int v28; // eax
  struct _KPRCB *v29; // rcx
  _DWORD *v30; // rdx
  struct _KPRCB *v31; // r9
  _DWORD *v32; // r8
  int v33; // eax
  int v34; // [rsp+60h] [rbp+8h] BYREF
  __int64 v35; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(unsigned __int16 *)(a2 + 8);
  v4 = *(_QWORD *)(a1 + 544);
  v35 = 0LL;
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
  KiSetAffinityThread(a1, (__int64)&v35, a2, v8);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  result = (unsigned __int8)KiReadyDeferredReadyList((__int64)CurrentPrcb, &v35, v10, v11);
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
      v19 = KeGetCurrentPrcb();
      v34 = 0;
      while ( 1 )
      {
        v20 = v19->SchedulerAssist;
        if ( v20 )
        {
          if ( v19->NestingLevel <= 1u )
          {
            v27 = v20[6];
            v20[6] = v27 + 1;
            if ( v27 == -1 )
              KiRemoveSystemWorkPriorityKick(v19);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v25 = v19->SchedulerAssist;
        if ( v25 )
        {
          if ( v19->NestingLevel <= 1u )
          {
            v28 = v25[6] - 1;
            v25[6] = v28;
            if ( !v28 )
              KiRemoveSystemWorkPriorityKick(v19);
          }
        }
        do
          KeYieldProcessorEx(&v34, v16, v17, v18);
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
        v22 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v22 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v22, v23);
      LOBYTE(v24) = CurrentIrql;
      v15 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v24) == 0;
    }
    else
    {
      v15 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v15 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v29 = KeGetCurrentPrcb();
          v30 = v29->SchedulerAssist;
          v15 = (v30[5] & 0xFFFF0003) == 0;
          v30[5] &= 0xFFFF0003;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(v29);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0LL, 0LL, v13);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v31 = KeGetCurrentPrcb();
      v32 = v31->SchedulerAssist;
      v33 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v15 = (v33 & v32[5]) == 0;
      v32[5] &= v33;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick(v31);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
