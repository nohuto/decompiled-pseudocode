/*
 * XREFs of MmInSwapWorkingSet @ 0x14030DA98
 * Callers:
 *     PspChangeProcessExecutionState @ 0x14065A9AC (PspChangeProcessExecutionState.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     ExQueueWorkItemToPartition @ 0x1402C7E8C (ExQueueWorkItemToPartition.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     MiGetWorkingSetSwapSupport @ 0x1402F237C (MiGetWorkingSetSwapSupport.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x14030E4B4 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiProcessWsInSwapSupport @ 0x14030E55C (MiProcessWsInSwapSupport.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     SmStoreSetProcessVaRanges @ 0x1406D0138 (SmStoreSetProcessVaRanges.c)
 *     EtwTraceWorkingSetSwap @ 0x1406D01E0 (EtwTraceWorkingSetSwap.c)
 *     MiContractWsSwapPageFile @ 0x1406D05B8 (MiContractWsSwapPageFile.c)
 *     MiFreeWorkingSetSwapContext @ 0x1406D05FC (MiFreeWorkingSetSwapContext.c)
 *     MiInSwapStore @ 0x1406D0668 (MiInSwapStore.c)
 *     VmCheckLargePageInswap @ 0x14092B204 (VmCheckLargePageInswap.c)
 *     VmPrefetchVirtualAddresses @ 0x14092B250 (VmPrefetchVirtualAddresses.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmInSwapWorkingSet(PEPROCESS Process)
{
  unsigned __int64 *v1; // r13
  void **v3; // r14
  __int64 v4; // r15
  unsigned __int64 v5; // rsi
  __int64 WorkingSetSwapSupport; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  _DWORD *v23; // r8
  int v24; // eax

  v1 = &Process[1].ActiveProcessorsPadding[6];
  v3 = 0LL;
  EtwTraceWorkingSetSwap(Process);
  v4 = *(_QWORD *)(qword_140C4E448 + 8LL * *((unsigned __int16 *)v1 + 87));
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1136));
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport((__int64)v1);
  v8 = (_QWORD *)WorkingSetSwapSupport;
  if ( WorkingSetSwapSupport )
  {
    if ( WorkingSetSwapSupport == 1 )
    {
      v15 = -1073740682;
    }
    else if ( WorkingSetSwapSupport == 2 )
    {
      v15 = -1073741558;
    }
    else
    {
      *((_QWORD *)MiGetSharedVm(v7) + 3) = 1LL;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 1136));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v9 = -1LL << ((unsigned __int8)v5 + 1);
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v19 = ~(unsigned __int16)v9;
            v20 = (v19 & SchedulerAssist[5]) == 0;
            v10 = (unsigned int)v19 & SchedulerAssist[5];
            SchedulerAssist[5] = v10;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v5);
      if ( *(_DWORD *)(v4 + 1160) )
      {
        MiInSwapStore(Process);
        SmStoreSetProcessVaRanges(0LL);
      }
      v12 = 0;
      if ( Process[2].Affinity.Bitmap[5] && *(_QWORD *)(*v8 + 16LL) )
      {
        v3 = (void **)MiReAllocateWorkingSetSwapSupport(*v8, v9, v10, SchedulerAssist, 0LL);
        if ( v3 )
          v12 = (*(_BYTE *)(*v8 + 32LL) & 1) == 0;
        if ( (unsigned int)VmCheckLargePageInswap(Process) )
          v12 |= 4u;
      }
      MiProcessWsInSwapSupport(*v8, v12);
      if ( v3 )
        VmPrefetchVirtualAddresses(*v3);
      v13 = v8[7];
      if ( v13 )
        MiProcessWsInSwapSupport(v13, 1LL);
      if ( v8[1] )
      {
        v8[5] = v8;
        v8[4] = MiInSwapSharedWorkingSetWorker;
        v8[2] = 0LL;
        ObfReferenceObjectWithTag(Process, 0x73576D4Du);
        v8[6] = Process;
        ExQueueWorkItemToPartition(v8 + 2, 3, 0xFFFFFFFF, *(_QWORD *)(v4 + 176));
      }
      else
      {
        MiFreeWorkingSetSwapContext(v4, v8);
      }
      LOBYTE(v5) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1136));
      if ( MiGetWorkingSetSwapSupport((__int64)v1) == 1 )
        *((_QWORD *)MiGetSharedVm(v14) + 3) = 0LL;
      v15 = 0;
    }
  }
  else
  {
    v15 = -1073741275;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 1136));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v21 = KeGetCurrentIrql();
      if ( v21 <= 0xFu && (unsigned __int8)v5 <= 0xFu && v21 >= 2u )
      {
        v22 = KeGetCurrentPrcb();
        v23 = v22->SchedulerAssist;
        v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v20 = (v24 & v23[5]) == 0;
        v23[5] &= v24;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v22);
      }
    }
  }
  __writecr8((unsigned __int8)v5);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  MiContractWsSwapPageFile(v4);
  EtwTraceWorkingSetSwap(Process);
  return v15;
}
