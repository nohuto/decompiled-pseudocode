/*
 * XREFs of MiFreeUnusedPfnPagesDpc @ 0x1403C89A0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     MiFreedUnusedPfnPagesWorker @ 0x1403C8AA8 (MiFreedUnusedPfnPagesWorker.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFreeUnusedPfnPagesDpc(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  signed __int32 v7; // eax
  unsigned int v8; // ebx
  char *AnyMultiplexedVm; // r15
  volatile LONG *SharedVm; // rbx
  KIRQL v11; // al
  unsigned __int8 v12; // r12
  int v13; // ecx
  __int64 result; // rax
  __int64 v15; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v18; // zf
  signed __int32 v19; // eax
  unsigned int v20; // ebx
  int v21[10]; // [rsp+20h] [rbp-28h] BYREF
  int v22; // [rsp+68h] [rbp+20h] BYREF

  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    v22 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v8 )
      KeYieldProcessorEx(&v22, a2, (__int64)a3, a4);
  }
  else
  {
    *(_DWORD *)a4 = v8 | *(_DWORD *)(a4 + 4);
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    SharedVm = (volatile LONG *)MiGetSharedVm((__int64)AnyMultiplexedVm);
    v11 = ExAcquireSpinLockExclusive(SharedVm);
    *((_DWORD *)SharedVm + 1) = 0;
    v12 = v11;
    ExAcquireSpinLockExclusive(&dword_140C55048);
    if ( qword_140C54FA8 )
    {
      if ( *(_QWORD *)a2 )
      {
        v15 = *(_QWORD *)(a2 + 8);
        *(_DWORD *)(v15 + 12) = 0;
        *(_QWORD *)(v15 + 24) = v15 + 16;
        *(_QWORD *)(v15 + 16) = v15 + 16;
        *(_WORD *)(v15 + 8) = 263;
        *(_BYTE *)(v15 + 10) = 6;
        *(_QWORD *)v15 = qword_140C54FD8;
        qword_140C54FD8 = v15;
      }
      else
      {
        stru_140C54FB0.List.Flink = 0LL;
        stru_140C54FB0.WorkerRoutine = (void (__fastcall *)(void *))MiFreeUnusedPfnPages;
        stru_140C54FB0.Parameter = &MiSystemPartition;
        ExQueueWorkItem(&stru_140C54FB0, DelayedWorkQueue);
        byte_140C5504C = 1;
      }
      v13 = 259;
    }
    else
    {
      MiFreedUnusedPfnPagesWorker(a2);
      v13 = 0;
    }
    *(_DWORD *)(a2 + 16) = v13;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C55048);
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
    MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v12);
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
