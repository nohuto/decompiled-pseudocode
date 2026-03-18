/*
 * XREFs of MiLockPoolCommitWs @ 0x1402CB348
 * Callers:
 *     MiFillPoolCommitPageTable @ 0x1402CA5C0 (MiFillPoolCommitPageTable.c)
 *     MiCommitPoolMemory @ 0x1402CAD1C (MiCommitPoolMemory.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 */

__int64 __fastcall MiLockPoolCommitWs(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r10
  __int64 v3; // rcx
  _DWORD *SchedulerAssist; // r9

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
  }
  v3 = *(_QWORD *)(a1 + 48);
  *(_BYTE *)(a1 + 76) = CurrentIrql;
  return MiLockWorkingSetShared(v3);
}
