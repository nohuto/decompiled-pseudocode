/*
 * XREFs of MiLockPoolCommitWs @ 0x1403165A8
 * Callers:
 *     MiCommitPoolMemory @ 0x140315F7C (MiCommitPoolMemory.c)
 *     MiFillPoolCommitPageTable @ 0x140316730 (MiFillPoolCommitPageTable.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 */

__int64 __fastcall MiLockPoolCommitWs(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned __int8 CurrentIrql; // r10
  __int64 v6; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a3 = (unsigned int)SchedulerAssist[5];
    a2 = (unsigned int)a3 | ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    SchedulerAssist[5] = a2;
  }
  v6 = *(_QWORD *)(a1 + 48);
  *(_BYTE *)(a1 + 76) = CurrentIrql;
  return MiLockWorkingSetShared(v6, a2, a3, SchedulerAssist);
}
