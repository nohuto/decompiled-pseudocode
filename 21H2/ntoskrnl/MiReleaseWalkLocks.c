/*
 * XREFs of MiReleaseWalkLocks @ 0x1402286D0
 * Callers:
 *     MiYieldPageTableWalk @ 0x140228654 (MiYieldPageTableWalk.c)
 *     MiGetNextPageTablePte @ 0x1402B16B0 (MiGetNextPageTablePte.c)
 *     MiDeleteEmptyPageTableTail @ 0x1403F4E40 (MiDeleteEmptyPageTableTail.c)
 *     MiQueryEPTAccessedState @ 0x14053BC40 (MiQueryEPTAccessedState.c)
 *     MiCombineWorkingSetTail @ 0x14055D040 (MiCombineWorkingSetTail.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiReleaseWalkLocks(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v3; // rdi
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    MiUnlockPageTableInternal(*(_QWORD *)(a1 + 24), v1);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  if ( (*(_WORD *)a1 & 4) != 0 )
  {
    LOBYTE(v1) = *(_BYTE *)(a1 + 6);
    result = MiUnlockWorkingSetShared(v3, v1);
  }
  else
  {
    if ( (*(_WORD *)a1 & 0x400) != 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4E35C);
    LOBYTE(v1) = *(_BYTE *)(a1 + 6);
    result = MiUnlockWorkingSetExclusive(v3, v1);
  }
  *(_BYTE *)(a1 + 2) |= 1u;
  return result;
}
