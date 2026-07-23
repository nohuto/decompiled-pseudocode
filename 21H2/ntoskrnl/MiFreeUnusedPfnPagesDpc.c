/*
 * XREFs of MiFreeUnusedPfnPagesDpc @ 0x1403B97C0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiFreedUnusedPfnPagesWorker @ 0x1403B98C8 (MiFreedUnusedPfnPagesWorker.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFreeUnusedPfnPagesDpc(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  signed __int32 v7; // eax
  unsigned int v8; // ebx
  __int64 result; // rax
  char *AnyMultiplexedVm; // r14
  LONG *SharedVm; // rbx
  KIRQL v12; // al
  unsigned __int8 v13; // r15
  int v14; // ecx
  __int64 v15; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v18; // zf
  signed __int32 v19; // eax
  unsigned int v20; // ebx
  int v21[10]; // [rsp+20h] [rbp-28h] BYREF
  int v22; // [rsp+68h] [rbp+20h] BYREF

  v22 = 0;
  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    while ( (*(_DWORD *)a4 & 0x80000000) != v8 )
      KeYieldProcessorEx(&v22, a2, (__int64)a3, a4);
  }
  else
  {
    *(_DWORD *)a4 = v8 | *(_DWORD *)(a4 + 4);
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
    v12 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v13 = v12;
    ExAcquireSpinLockExclusive(&dword_140C50E88);
    if ( qword_140C50DE8 )
    {
      if ( *(_QWORD *)a2 )
      {
        v15 = *(_QWORD *)(a2 + 8);
        *(_DWORD *)(v15 + 12) = 0;
        *(_QWORD *)(v15 + 24) = v15 + 16;
        *(_QWORD *)(v15 + 16) = v15 + 16;
        *(_WORD *)(v15 + 8) = 263;
        *(_BYTE *)(v15 + 10) = 6;
        *(_QWORD *)v15 = qword_140C50E18;
        qword_140C50E18 = v15;
      }
      else
      {
        stru_140C50DF0.List.Flink = 0LL;
        stru_140C50DF0.WorkerRoutine = (void (__fastcall *)(void *))MiFreeUnusedPfnPages;
        stru_140C50DF0.Parameter = &MiSystemPartition;
        ExQueueWorkItem(&stru_140C50DF0, DelayedWorkQueue);
        byte_140C50E8C = 1;
      }
      v14 = 259;
    }
    else
    {
      MiFreedUnusedPfnPagesWorker(a2);
      v14 = 0;
    }
    *(_DWORD *)(a2 + 16) = v14;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C50E88);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v18 = (SchedulerAssist[5] & 0xFFFF0007) == 0;
        SchedulerAssist[5] &= 0xFFFF0007;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(2uLL);
    MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v13);
  }
  v19 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v20 = ~v19 & 0x80000000;
  if ( (v19 & 0x7FFFFFFF) != 0 )
  {
    v21[0] = 0;
    while ( 1 )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v20 )
        break;
      KeYieldProcessorEx(v21, a2, (__int64)a3, a4);
    }
  }
  else
  {
    result = v20 | *(_DWORD *)(a4 + 4);
    *(_DWORD *)a4 = result;
  }
  _InterlockedDecrement(a3);
  return result;
}
