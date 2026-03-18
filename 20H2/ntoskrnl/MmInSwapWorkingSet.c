/*
 * XREFs of MmInSwapWorkingSet @ 0x140339228
 * Callers:
 *     PspChangeProcessExecutionState @ 0x14062E290 (PspChangeProcessExecutionState.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     MiGetWorkingSetSwapSupport @ 0x140250E80 (MiGetWorkingSetSwapSupport.c)
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     ExQueueWorkItemToPartition @ 0x1402D4564 (ExQueueWorkItemToPartition.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x140339C44 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiProcessWsInSwapSupport @ 0x140339CEC (MiProcessWsInSwapSupport.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     SmStoreSetProcessVaRanges @ 0x1406F0730 (SmStoreSetProcessVaRanges.c)
 *     EtwTraceWorkingSetSwap @ 0x1406F07D8 (EtwTraceWorkingSetSwap.c)
 *     MiFreeWorkingSetSwapContext @ 0x1406F0B5C (MiFreeWorkingSetSwapContext.c)
 *     MiContractWsSwapPageFile @ 0x1406F0C78 (MiContractWsSwapPageFile.c)
 *     MiInSwapStore @ 0x1406F0CBC (MiInSwapStore.c)
 *     VmCheckLargePageInswap @ 0x140931034 (VmCheckLargePageInswap.c)
 *     VmPrefetchVirtualAddresses @ 0x140931080 (VmPrefetchVirtualAddresses.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmInSwapWorkingSet(PEPROCESS Process)
{
  unsigned __int64 *v1; // r13
  void **v3; // r14
  __int64 v4; // r15
  unsigned __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 WorkingSetSwapSupport; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v21; // eax
  bool v22; // zf
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  _DWORD *v25; // r8
  int v26; // eax

  v1 = &Process[1].ActiveProcessorsPadding[6];
  v3 = 0LL;
  EtwTraceWorkingSetSwap(Process);
  v4 = *(_QWORD *)(qword_140C4E4C8 + 8LL * *((unsigned __int16 *)v1 + 87));
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1136));
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport((__int64)v1, v6);
  v9 = (_QWORD *)WorkingSetSwapSupport;
  if ( WorkingSetSwapSupport )
  {
    if ( WorkingSetSwapSupport == 1 )
    {
      v17 = -1073740682;
    }
    else if ( WorkingSetSwapSupport == 2 )
    {
      v17 = -1073741558;
    }
    else
    {
      *((_QWORD *)MiGetSharedVm(v8) + 3) = 1LL;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 1136));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v10 = -1LL << ((unsigned __int8)v5 + 1);
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v21 = ~(unsigned __int16)v10;
            v22 = (v21 & SchedulerAssist[5]) == 0;
            v11 = (unsigned int)v21 & SchedulerAssist[5];
            SchedulerAssist[5] = v11;
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
      v13 = 0;
      if ( Process[2].Affinity.Bitmap[5] && *(_QWORD *)(*v9 + 16LL) )
      {
        v3 = (void **)MiReAllocateWorkingSetSwapSupport(*v9, v10, v11, SchedulerAssist, 0LL);
        if ( v3 )
          v13 = (*(_BYTE *)(*v9 + 32LL) & 1) == 0;
        if ( (unsigned int)VmCheckLargePageInswap(Process) )
          v13 |= 4u;
      }
      MiProcessWsInSwapSupport(*v9, v13);
      if ( v3 )
        VmPrefetchVirtualAddresses(*v3);
      v14 = v9[7];
      if ( v14 )
        MiProcessWsInSwapSupport(v14, 1LL);
      if ( v9[1] )
      {
        v9[5] = v9;
        v9[4] = MiInSwapSharedWorkingSetWorker;
        v9[2] = 0LL;
        ObfReferenceObjectWithTag(Process, 0x73576D4Du);
        v9[6] = Process;
        ExQueueWorkItemToPartition(v9 + 2, 3, 0xFFFFFFFF, *(_QWORD *)(v4 + 176));
      }
      else
      {
        MiFreeWorkingSetSwapContext(v4, v9);
      }
      LOBYTE(v5) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1136));
      if ( MiGetWorkingSetSwapSupport((__int64)v1, v15) == 1 )
        *((_QWORD *)MiGetSharedVm(v16) + 3) = 0LL;
      v17 = 0;
    }
  }
  else
  {
    v17 = -1073741275;
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
  return v17;
}
