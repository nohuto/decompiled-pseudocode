/*
 * XREFs of KiAcquireSecondarySignalListLock @ 0x14051749C
 * Callers:
 *     KiInsertSecondarySignalList @ 0x140517898 (KiInsertSecondarySignalList.c)
 *     KiProcessSecondarySignalList @ 0x140517B70 (KiProcessSecondarySignalList.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14021E680 (KxAcquireSpinLock.c)
 */

void __fastcall KiAcquireSecondarySignalListLock(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // r10
  _DWORD *SchedulerAssist; // r9

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ~((unsigned __int16)(1LL << (CurrentIrql + 1)) - 1) & 0x1FFC;
  }
  *a1 = CurrentIrql;
  KxAcquireSpinLock(&KiSecondarySignalListLock);
}
