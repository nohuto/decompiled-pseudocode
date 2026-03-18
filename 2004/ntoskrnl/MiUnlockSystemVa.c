/*
 * XREFs of MiUnlockSystemVa @ 0x1402BE18C
 * Callers:
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     MiSystemFault @ 0x1402BD490 (MiSystemFault.c)
 *     MiSynchronizeSystemVa @ 0x1402BDCD0 (MiSynchronizeSystemVa.c)
 *     MiUnlockStealVm @ 0x14031BE4C (MiUnlockStealVm.c)
 *     MiTrimSharedPageFromViews @ 0x14031EC94 (MiTrimSharedPageFromViews.c)
 *     MmCopyMemory @ 0x14033F6D0 (MmCopyMemory.c)
 *     MiTranslatePageForCopy @ 0x14033FBD4 (MiTranslatePageForCopy.c)
 *     MiReleaseFaultSynchronization @ 0x1405439F4 (MiReleaseFaultSynchronization.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiUnlockFaultPageTable @ 0x1402BE1D8 (MiUnlockFaultPageTable.c)
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
