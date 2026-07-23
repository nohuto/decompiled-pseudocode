/*
 * XREFs of MmInSwapWorkingSet @ 0x1402A1434
 * Callers:
 *     PspChangeProcessExecutionState @ 0x1406F5340 (PspChangeProcessExecutionState.c)
 * Callees:
 *     MiGetWorkingSetSwapSupport @ 0x1402872B0 (MiGetWorkingSetSwapSupport.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x1402A1E50 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiProcessWsInSwapSupport @ 0x1402A1EF8 (MiProcessWsInSwapSupport.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExQueueWorkItemToPartition @ 0x1403025FC (ExQueueWorkItemToPartition.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiInSwapStore @ 0x1406BEA2C (MiInSwapStore.c)
 *     MiFreeWorkingSetSwapContext @ 0x1406BEC70 (MiFreeWorkingSetSwapContext.c)
 *     MiContractWsSwapPageFile @ 0x1406BECDC (MiContractWsSwapPageFile.c)
 *     EtwTraceWorkingSetSwap @ 0x1406BED6C (EtwTraceWorkingSetSwap.c)
 *     SmStoreSetProcessVaRanges @ 0x1406BF0EC (SmStoreSetProcessVaRanges.c)
 *     VmCheckLargePageInswap @ 0x14092E964 (VmCheckLargePageInswap.c)
 *     VmPrefetchVirtualAddresses @ 0x14092E9B0 (VmPrefetchVirtualAddresses.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmInSwapWorkingSet(PEPROCESS Process)
{
  unsigned __int64 *v1; // r13
  void **v3; // r14
  __int64 v4; // r15
  unsigned __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 WorkingSetSwapSupport; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  _DWORD *v25; // r8
  int v26; // eax

  v1 = &Process[1].ActiveProcessorsPadding[6];
  v3 = 0LL;
  EtwTraceWorkingSetSwap(Process);
  v4 = *(_QWORD *)(qword_140C4E688 + 8LL * *((unsigned __int16 *)v1 + 87));
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1136));
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport((__int64)v1, v6);
  v10 = (_QWORD *)WorkingSetSwapSupport;
  if ( WorkingSetSwapSupport )
  {
    if ( WorkingSetSwapSupport == 1 )
    {
      v16 = -1073740682;
    }
    else if ( WorkingSetSwapSupport == 2 )
    {
      v16 = -1073741558;
    }
    else
    {
      *(_QWORD *)(MiGetSharedVm(v9, v8) + 24) = 1LL;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 1136));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
            v22 = (v21 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v21;
            if ( v22 )
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
      v11 = 0;
      if ( Process[2].Affinity.Bitmap[5] && *(_QWORD *)(*v10 + 16LL) )
      {
        v3 = (void **)MiReAllocateWorkingSetSwapSupport(*v10);
        if ( v3 )
          v11 = (*(_BYTE *)(*v10 + 32LL) & 1) == 0;
        if ( (unsigned int)VmCheckLargePageInswap(Process) )
          v11 |= 4u;
      }
      MiProcessWsInSwapSupport(*v10, v11);
      if ( v3 )
        VmPrefetchVirtualAddresses(*v3);
      v12 = v10[7];
      if ( v12 )
        MiProcessWsInSwapSupport(v12, 1LL);
      if ( v10[1] )
      {
        v10[5] = v10;
        v10[4] = MiInSwapSharedWorkingSetWorker;
        v10[2] = 0LL;
        ObfReferenceObjectWithTag(Process, 0x73576D4Du);
        v10[6] = Process;
        ExQueueWorkItemToPartition((ULONG_PTR)(v10 + 2));
      }
      else
      {
        MiFreeWorkingSetSwapContext(v4, v10);
      }
      LOBYTE(v5) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1136));
      if ( MiGetWorkingSetSwapSupport((__int64)v1, v13) == 1 )
        *(_QWORD *)(MiGetSharedVm(v15, v14) + 24) = 0LL;
      v16 = 0;
    }
  }
  else
  {
    v16 = -1073741275;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 1136));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v23 = KeGetCurrentIrql();
      if ( v23 <= 0xFu && (unsigned __int8)v5 <= 0xFu && v23 >= 2u )
      {
        v24 = KeGetCurrentPrcb();
        v25 = v24->SchedulerAssist;
        v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v22 = (v26 & v25[5]) == 0;
        v25[5] &= v26;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(v24);
      }
    }
  }
  __writecr8((unsigned __int8)v5);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  MiContractWsSwapPageFile(v4);
  EtwTraceWorkingSetSwap(Process);
  return v16;
}
