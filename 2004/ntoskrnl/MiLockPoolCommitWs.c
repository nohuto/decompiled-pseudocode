/*
 * XREFs of MiLockPoolCommitWs @ 0x140258A48
 * Callers:
 *     MiCommitPoolMemory @ 0x1402586AC (MiCommitPoolMemory.c)
 *     MiFillPoolCommitPageTable @ 0x1402B6940 (MiFillPoolCommitPageTable.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
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
