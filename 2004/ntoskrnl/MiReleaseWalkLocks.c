/*
 * XREFs of MiReleaseWalkLocks @ 0x140339578
 * Callers:
 *     MiGetNextPageTablePte @ 0x14029ED90 (MiGetNextPageTablePte.c)
 *     MiYieldPageTableWalk @ 0x1403394FC (MiYieldPageTableWalk.c)
 *     MiDeleteEmptyPageTableTail @ 0x1403EF190 (MiDeleteEmptyPageTableTail.c)
 *     MiQueryEPTAccessedState @ 0x140536530 (MiQueryEPTAccessedState.c)
 *     MiCombineWorkingSetTail @ 0x140557960 (MiCombineWorkingSetTail.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 */

void __fastcall MiReleaseWalkLocks(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v3; // rdi

  v1 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    MiUnlockPageTableInternal(*(_QWORD *)(a1 + 24), v1);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  if ( (*(_WORD *)a1 & 4) != 0 )
  {
    MiUnlockWorkingSetShared(v3, *(_BYTE *)(a1 + 6));
  }
  else
  {
    if ( (*(_WORD *)a1 & 0x400) != 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4E11C);
    MiUnlockWorkingSetExclusive(v3, *(_BYTE *)(a1 + 6));
  }
  *(_BYTE *)(a1 + 2) |= 1u;
}
