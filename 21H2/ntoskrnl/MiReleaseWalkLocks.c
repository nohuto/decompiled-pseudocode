/*
 * XREFs of MiReleaseWalkLocks @ 0x1402AA590
 * Callers:
 *     MiGetNextPageTablePte @ 0x14020CDB0 (MiGetNextPageTablePte.c)
 *     MiYieldPageTableWalk @ 0x1402AA514 (MiYieldPageTableWalk.c)
 *     MiDeleteEmptyPageTableTail @ 0x1403F4E40 (MiDeleteEmptyPageTableTail.c)
 *     MiQueryEPTAccessedState @ 0x14053BA00 (MiQueryEPTAccessedState.c)
 *     MiCombineWorkingSetTail @ 0x14055CE00 (MiCombineWorkingSetTail.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAE0 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
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
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4E31C);
    MiUnlockWorkingSetExclusive(v3, *(_BYTE *)(a1 + 6));
  }
  *(_BYTE *)(a1 + 2) |= 1u;
}
