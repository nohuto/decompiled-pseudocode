/*
 * XREFs of MiReleaseFaultState @ 0x14027DA5C
 * Callers:
 *     MiPrivateFixup @ 0x14024076C (MiPrivateFixup.c)
 *     MiWaitForCollidedFaultComplete @ 0x14027FEF8 (MiWaitForCollidedFaultComplete.c)
 *     MiStealPage @ 0x1402E97D4 (MiStealPage.c)
 *     MiUserFault @ 0x14031CD90 (MiUserFault.c)
 *     MiFinishHardFault @ 0x140334C40 (MiFinishHardFault.c)
 *     MiInPagePageTable @ 0x140353230 (MiInPagePageTable.c)
 *     MiKernelWriteToExecutableMemory @ 0x1405A7608 (MiKernelWriteToExecutableMemory.c)
 *     MiReleaseFaultSynchronization @ 0x1405A7A00 (MiReleaseFaultSynchronization.c)
 *     MiIdealClusterPage @ 0x1405C3C6C (MiIdealClusterPage.c)
 * Callees:
 *     MiUnlockFaultPageTable @ 0x14027A9D0 (MiUnlockFaultPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 */

__int64 __fastcall MiReleaseFaultState(__int64 a1, char a2, _BYTE *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbp
  __int64 v8; // rdx

  v3 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(a1 + 16);
  MiUnlockFaultPageTable(a1);
  if ( a3 )
    *a3 = *(_BYTE *)(a1 + 12);
  else
    a2 = *(_BYTE *)(a1 + 12);
  LOBYTE(v8) = a2;
  if ( (*(_BYTE *)(a1 + 13) & 1) != 0 )
    MiUnlockWorkingSetExclusive(v3, v8);
  else
    MiUnlockWorkingSetShared(v3, v8);
  return v5;
}
