/*
 * XREFs of KeSetAffinityThread @ 0x14039951C
 * Callers:
 *     ExpWorkerThread @ 0x1402E66D0 (ExpWorkerThread.c)
 *     NtSetInformationThread @ 0x140714260 (NtSetInformationThread.c)
 *     ExpWorkQueueManagerThread @ 0x1407AF9E0 (ExpWorkQueueManagerThread.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140211DC4 (KiRequestSoftwareInterrupt.c)
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     KiSetAffinityThread @ 0x14029D724 (KiSetAffinityThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1402D28D0 (KiEndThreadCycleAccumulation.c)
 *     KiReadyDeferredReadyList @ 0x1402D55B0 (KiReadyDeferredReadyList.c)
 *     KiDeliverApc @ 0x1402EEFA0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbProcessContextSwitch @ 0x1403529A0 (KiAbProcessContextSwitch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140406650 (KiSwapContext.c)
 *     KiExtendProcessAffinity @ 0x14052463C (KiExtendProcessAffinity.c)
 */

unsigned __int8 __fastcall KeSetAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v8; // r8
  unsigned __int8 result; // al
  ULONG_PTR CurrentThread; // rsi
  bool v11; // zf
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _KPRCB *v15; // rdi
  _DWORD *v16; // rcx
  _KTHREAD *NextThread; // rdi
  __int64 v18; // r8
  __int64 v19; // r8
  _DWORD *v20; // rcx
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  int v23; // eax
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  int v28; // eax
  int v29; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v30; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(unsigned __int16 *)(a2 + 8);
  v4 = *(_QWORD *)(a1 + 544);
  v30 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  v8 = *(_QWORD *)(v4 + 8 * v2 + 88);
  if ( !v8 || (v8 & *(_QWORD *)a2) != *(_QWORD *)a2 )
    KiExtendProcessAffinity(v4);
  if ( !*(_QWORD *)a2 )
    *(_QWORD *)a2 = *(_QWORD *)(v4 + 8 * v2 + 88);
  KiSetAffinityThread(a1, (__int64)&v30, (__int128 *)a2);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  result = (unsigned __int8)KiReadyDeferredReadyList((__int64)CurrentPrcb, &v30);
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
      v15 = KeGetCurrentPrcb();
      v29 = 0;
      while ( 1 )
      {
        v16 = v15->SchedulerAssist;
        if ( v16 )
        {
          if ( v15->NestingLevel <= 1u )
          {
            v22 = v16[6];
            v16[6] = v22 + 1;
            if ( v22 == -1 )
              KiRemoveSystemWorkPriorityKick(v15);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v20 = v15->SchedulerAssist;
        if ( v20 )
        {
          if ( v15->NestingLevel <= 1u )
          {
            v23 = v20[6] - 1;
            v20[6] = v23;
            if ( !v23 )
              KiRemoveSystemWorkPriorityKick(v15);
          }
        }
        do
          KeYieldProcessorEx(&v29, v12, v13, v14);
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
        v18 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v18 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, CurrentThread, v18);
      LOBYTE(v19) = CurrentIrql;
      v11 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v19) == 0;
    }
    else
    {
      v11 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v11 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v24 = KeGetCurrentPrcb();
          v25 = v24->SchedulerAssist;
          v11 = (v25[5] & 0xFFFF0003) == 0;
          v25[5] &= 0xFFFF0003;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick(v24);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0LL, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v26 = KeGetCurrentPrcb();
      v27 = v26->SchedulerAssist;
      v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v11 = (v28 & v27[5]) == 0;
      v27[5] &= v28;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(v26);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
