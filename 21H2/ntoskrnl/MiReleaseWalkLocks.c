/*
 * XREFs of MiReleaseWalkLocks @ 0x1402341A4
 * Callers:
 *     MiDeleteEmptyPageTableTail @ 0x140233B60 (MiDeleteEmptyPageTableTail.c)
 *     MiYieldPageTableWalk @ 0x140234128 (MiYieldPageTableWalk.c)
 *     MiGetNextPageTablePte @ 0x14031B510 (MiGetNextPageTablePte.c)
 *     MiQueryEPTAccessedState @ 0x14045BCA2 (MiQueryEPTAccessedState.c)
 *     MiProtectDriverSectionPte @ 0x140582320 (MiProtectDriverSectionPte.c)
 *     MiUnlockPhysicalPageByVa @ 0x140584A30 (MiUnlockPhysicalPageByVa.c)
 *     MiCombineWorkingSetTail @ 0x1405B60A0 (MiCombineWorkingSetTail.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
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
  if ( (*(_DWORD *)a1 & 4) != 0 )
  {
    LOBYTE(v1) = *(_BYTE *)(a1 + 7);
    result = MiUnlockWorkingSetShared(v3, v1);
  }
  else
  {
    if ( (*(_DWORD *)a1 & 0x400) != 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C51BA4);
    LOBYTE(v1) = *(_BYTE *)(a1 + 7);
    result = MiUnlockWorkingSetExclusive(v3, v1);
  }
  *(_BYTE *)(a1 + 4) |= 1u;
  return result;
}
