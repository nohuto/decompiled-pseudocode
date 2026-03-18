/*
 * XREFs of MiUnlockSystemVa @ 0x14027A168
 * Callers:
 *     MmCopyMemory @ 0x14026BBB0 (MmCopyMemory.c)
 *     MiTranslatePageForCopy @ 0x14026C808 (MiTranslatePageForCopy.c)
 *     MiSystemFault @ 0x140279590 (MiSystemFault.c)
 *     MiSynchronizeSystemVa @ 0x140279DB0 (MiSynchronizeSystemVa.c)
 *     MiTrimSharedPageFromViews @ 0x14027B820 (MiTrimSharedPageFromViews.c)
 *     MiUnlockStealVm @ 0x1402EA5E4 (MiUnlockStealVm.c)
 *     MmAccessFault @ 0x14031C860 (MmAccessFault.c)
 *     MiReleaseFaultSynchronization @ 0x1405A7A00 (MiReleaseFaultSynchronization.c)
 * Callees:
 *     MiUnlockFaultPageTable @ 0x14027A9D0 (MiUnlockFaultPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 */

__int64 __fastcall MiUnlockSystemVa(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 result; // rax

  v1 = a1 + 24;
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    MiUnlockFaultPageTable(a1 + 24);
    LOBYTE(v3) = *(_BYTE *)(v1 + 12);
    if ( (*(_BYTE *)(v1 + 13) & 1) != 0 )
      result = MiUnlockWorkingSetExclusive(v2, v3);
    else
      result = MiUnlockWorkingSetShared(v2, v3);
    *(_QWORD *)v1 = 0LL;
  }
  return result;
}
