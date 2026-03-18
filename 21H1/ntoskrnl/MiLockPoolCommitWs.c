/*
 * XREFs of MiLockPoolCommitWs @ 0x1402B1A78
 * Callers:
 *     MiFillPoolCommitPageTable @ 0x140223CC0 (MiFillPoolCommitPageTable.c)
 *     MiCommitPoolMemory @ 0x1402B16DC (MiCommitPoolMemory.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
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
