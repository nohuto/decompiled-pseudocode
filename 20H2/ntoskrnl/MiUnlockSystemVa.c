/*
 * XREFs of MiUnlockSystemVa @ 0x1402996DC
 * Callers:
 *     MiTranslatePageForCopy @ 0x140251058 (MiTranslatePageForCopy.c)
 *     MmCopyMemory @ 0x1402513F0 (MmCopyMemory.c)
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 *     MiSystemFault @ 0x1402989E0 (MiSystemFault.c)
 *     MiSynchronizeSystemVa @ 0x140299220 (MiSynchronizeSystemVa.c)
 *     MiUnlockStealVm @ 0x140353A68 (MiUnlockStealVm.c)
 *     MiTrimSharedPageFromViews @ 0x140354B14 (MiTrimSharedPageFromViews.c)
 *     MiReleaseFaultSynchronization @ 0x1405473C4 (MiReleaseFaultSynchronization.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027F090 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockFaultPageTable @ 0x140299728 (MiUnlockFaultPageTable.c)
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
