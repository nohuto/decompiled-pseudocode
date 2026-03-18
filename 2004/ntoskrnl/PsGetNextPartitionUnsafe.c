/*
 * XREFs of PsGetNextPartitionUnsafe @ 0x140343E98
 * Callers:
 *     PsGetNextPartition @ 0x140343D04 (PsGetNextPartition.c)
 *     CcForEachPartition @ 0x140343DA0 (CcForEachPartition.c)
 *     CcUnmapInactiveViews @ 0x1404E62C0 (CcUnmapInactiveViews.c)
 *     ExSwapinWorkerThreads @ 0x140767E14 (ExSwapinWorkerThreads.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14020AF40 (ObReferenceObjectSafeWithTag.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140224640 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140228470 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

_UNKNOWN **__fastcall PsGetNextPartitionUnsafe(_QWORD *Object)
{
  _UNKNOWN **v2; // rbp
  KIRQL v3; // al
  _UNKNOWN **v4; // rbx
  unsigned __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  v2 = 0LL;
  v3 = ExAcquireSpinLockShared(&PspActivePartitionListLock);
  v4 = (_UNKNOWN **)PspActivePartitionListHead;
  v5 = v3;
  if ( Object )
    v4 = (_UNKNOWN **)Object[5];
  while ( v4 != &PspActivePartitionListHead )
  {
    if ( ObReferenceObjectSafeWithTag((__int64)(v4 - 5)) )
    {
      v2 = v4 - 5;
      break;
    }
    v4 = (_UNKNOWN **)*v4;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&PspActivePartitionListLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  return v2;
}
