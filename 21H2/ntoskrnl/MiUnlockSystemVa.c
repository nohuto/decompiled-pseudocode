/*
 * XREFs of MiUnlockSystemVa @ 0x1403120FC
 * Callers:
 *     MmAccessFault @ 0x14020D090 (MmAccessFault.c)
 *     MiUnlockStealVm @ 0x14026D310 (MiUnlockStealVm.c)
 *     MmCopyMemory @ 0x1402B48E0 (MmCopyMemory.c)
 *     MiTranslatePageForCopy @ 0x1402B4DE4 (MiTranslatePageForCopy.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC44 (MiTrimSharedPageFromViews.c)
 *     MiSystemFault @ 0x140311400 (MiSystemFault.c)
 *     MiSynchronizeSystemVa @ 0x140311C40 (MiSynchronizeSystemVa.c)
 *     MiReleaseFaultSynchronization @ 0x140548EC4 (MiReleaseFaultSynchronization.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAE0 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockFaultPageTable @ 0x140312148 (MiUnlockFaultPageTable.c)
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
