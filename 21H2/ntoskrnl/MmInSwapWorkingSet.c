/*
 * XREFs of MmInSwapWorkingSet @ 0x14025F4D4
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140687754 (PspChangeProcessExecutionState.c)
 * Callees:
 *     MiProcessWsInSwapSupport @ 0x14025EC08 (MiProcessWsInSwapSupport.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x14026099C (MiReAllocateWorkingSetSwapSupport.c)
 *     MiGetWorkingSetSwapSupport @ 0x1402829A8 (MiGetWorkingSetSwapSupport.c)
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItemToPartition @ 0x1402EF060 (ExQueueWorkItemToPartition.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiInSwapStore @ 0x1406EBCCC (MiInSwapStore.c)
 *     MiFreeWorkingSetSwapContext @ 0x1406EC158 (MiFreeWorkingSetSwapContext.c)
 *     MiContractWsSwapPageFile @ 0x1406EC1C4 (MiContractWsSwapPageFile.c)
 *     EtwTraceWorkingSetSwap @ 0x1406EC338 (EtwTraceWorkingSetSwap.c)
 *     SmStoreSetProcessVaRanges @ 0x1406EC47C (SmStoreSetProcessVaRanges.c)
 *     VmCheckLargePageInswap @ 0x1409D8CD4 (VmCheckLargePageInswap.c)
 *     VmPrefetchVirtualAddresses @ 0x1409D8CF8 (VmPrefetchVirtualAddresses.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmInSwapWorkingSet(PEPROCESS Process)
{
  unsigned __int64 *v1; // r13
  void **v3; // r14
  __int64 v4; // r15
  unsigned __int64 v5; // rsi
  __int64 WorkingSetSwapSupport; // rax
  __int64 v7; // rcx
  __int64 *v8; // rdi
  unsigned int v9; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *SchedulerAssist; // r9
  char v14; // bl
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  _DWORD *v23; // r8
  int v24; // eax

  v1 = &Process[1].ActiveProcessors.StaticBitmap[26];
  v3 = 0LL;
  EtwTraceWorkingSetSwap(Process);
  v4 = *(_QWORD *)(qword_140C51F48 + 8LL * *((unsigned __int16 *)v1 + 87));
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1160));
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v1);
  v8 = (__int64 *)WorkingSetSwapSupport;
  if ( WorkingSetSwapSupport )
  {
    if ( WorkingSetSwapSupport == 1 )
    {
      v9 = -1073740682;
    }
    else if ( WorkingSetSwapSupport == 2 )
    {
      v9 = -1073741558;
    }
    else
    {
      *(_QWORD *)(MiGetSharedVm(v7) + 24) = 1LL;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 1160));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v11 = -1LL << ((unsigned __int8)v5 + 1);
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v19 = ~(unsigned __int16)v11;
            v20 = (v19 & SchedulerAssist[5]) == 0;
            v12 = (unsigned int)v19 & SchedulerAssist[5];
            SchedulerAssist[5] = v12;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v5);
      if ( *(_DWORD *)(v4 + 1176) )
      {
        MiInSwapStore(Process);
        SmStoreSetProcessVaRanges(0LL);
      }
      v14 = 0;
      if ( Process[2].Affinity.StaticBitmap[5] && *(_QWORD *)(*v8 + 16) )
      {
        v3 = (void **)MiReAllocateWorkingSetSwapSupport(*v8, v11, v12, SchedulerAssist, 0LL);
        if ( v3 )
          v14 = (*(_BYTE *)(*v8 + 32) & 1) == 0;
        if ( (unsigned int)VmCheckLargePageInswap(Process) )
          v14 |= 4u;
      }
      MiProcessWsInSwapSupport(*v8, v14);
      if ( v3 )
        VmPrefetchVirtualAddresses(*v3);
      v15 = v8[7];
      if ( v15 )
        MiProcessWsInSwapSupport(v15, 1);
      if ( v8[1] )
      {
        v8[5] = (__int64)v8;
        v8[4] = (__int64)MiInSwapSharedWorkingSetWorker;
        v8[2] = 0LL;
        ObfReferenceObjectWithTag(Process, 0x73576D4Du);
        v8[6] = (__int64)Process;
        ExQueueWorkItemToPartition((ULONG_PTR)(v8 + 2));
      }
      else
      {
        MiFreeWorkingSetSwapContext(v4, v8);
      }
      LOBYTE(v5) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1160));
      if ( MiGetWorkingSetSwapSupport(v1) == 1 )
        *(_QWORD *)(MiGetSharedVm(v16) + 24) = 0LL;
      v9 = 0;
    }
  }
  else
  {
    v9 = -1073741275;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 1160));
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
  return v9;
}
