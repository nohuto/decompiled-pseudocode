/*
 * XREFs of MiReleaseWalkLocks @ 0x1402FC23C
 * Callers:
 *     MiGetNextPageTablePte @ 0x14020C280 (MiGetNextPageTablePte.c)
 *     MiYieldPageTableWalk @ 0x1402FC1C0 (MiYieldPageTableWalk.c)
 *     MiDeleteEmptyPageTableTail @ 0x1403EDE30 (MiDeleteEmptyPageTableTail.c)
 *     MiQueryEPTAccessedState @ 0x140535EE0 (MiQueryEPTAccessedState.c)
 *     MiCombineWorkingSetTail @ 0x140557310 (MiCombineWorkingSetTail.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 */

void __fastcall MiReleaseWalkLocks(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdx
  __int64 v5; // rdi

  v3 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    MiUnlockPageTableInternal(*(_QWORD *)(a1 + 24), v3, a3);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  if ( (*(_WORD *)a1 & 4) != 0 )
  {
    MiUnlockWorkingSetShared(v5, *(_BYTE *)(a1 + 6));
  }
  else
  {
    if ( (*(_WORD *)a1 & 0x400) != 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock);
    MiUnlockWorkingSetExclusive(v5, *(_BYTE *)(a1 + 6));
  }
  *(_BYTE *)(a1 + 2) |= 1u;
}
