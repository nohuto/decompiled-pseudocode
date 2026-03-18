/*
 * XREFs of MiReleaseWalkLocks @ 0x14030BCFC
 * Callers:
 *     MiGetNextPageTablePte @ 0x14026E0D0 (MiGetNextPageTablePte.c)
 *     MiYieldPageTableWalk @ 0x14030BC80 (MiYieldPageTableWalk.c)
 *     MiDeleteEmptyPageTableTail @ 0x1403F3600 (MiDeleteEmptyPageTableTail.c)
 *     MiQueryEPTAccessedState @ 0x140539F00 (MiQueryEPTAccessedState.c)
 *     MiCombineWorkingSetTail @ 0x14055B330 (MiCombineWorkingSetTail.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027F090 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 */

void __fastcall MiReleaseWalkLocks(__int64 a1)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 48) )
  {
    MiUnlockPageTableInternal(*(_QWORD *)(a1 + 24));
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  if ( (*(_WORD *)a1 & 4) != 0 )
  {
    MiUnlockWorkingSetShared(v2, *(_BYTE *)(a1 + 6));
  }
  else
  {
    if ( (*(_WORD *)a1 & 0x400) != 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4E19C);
    MiUnlockWorkingSetExclusive(v2, *(_BYTE *)(a1 + 6));
  }
  *(_BYTE *)(a1 + 2) |= 1u;
}
