/*
 * XREFs of MiUnlockSystemVa @ 0x14031CE4C
 * Callers:
 *     MmCopyMemory @ 0x140232A90 (MmCopyMemory.c)
 *     MiTranslatePageForCopy @ 0x140232F94 (MiTranslatePageForCopy.c)
 *     MiUnlockStealVm @ 0x14025B2B0 (MiUnlockStealVm.c)
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MiTrimSharedPageFromViews @ 0x1402FA994 (MiTrimSharedPageFromViews.c)
 *     MiSystemFault @ 0x14031C150 (MiSystemFault.c)
 *     MiSynchronizeSystemVa @ 0x14031C990 (MiSynchronizeSystemVa.c)
 *     MiReleaseFaultSynchronization @ 0x140549104 (MiReleaseFaultSynchronization.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockFaultPageTable @ 0x14031CE98 (MiUnlockFaultPageTable.c)
 */

void __fastcall MiUnlockSystemVa(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  unsigned __int8 v3; // dl

  v1 = a1 + 24;
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    MiUnlockFaultPageTable(a1 + 24);
    v3 = *(_BYTE *)(v1 + 12);
    if ( (*(_BYTE *)(v1 + 13) & 1) != 0 )
      MiUnlockWorkingSetExclusive(v2, v3);
    else
      MiUnlockWorkingSetShared(v2, v3);
    *(_QWORD *)v1 = 0LL;
  }
}
