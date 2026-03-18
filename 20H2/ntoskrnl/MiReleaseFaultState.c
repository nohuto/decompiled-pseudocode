/*
 * XREFs of MiReleaseFaultState @ 0x1402D0698
 * Callers:
 *     MiWaitForCollidedFaultComplete @ 0x140201D9C (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x140239840 (MiPrivateFixup.c)
 *     MiUserFault @ 0x14026EA90 (MiUserFault.c)
 *     MiFinishHardFault @ 0x1402C80B0 (MiFinishHardFault.c)
 *     MiInPagePageTable @ 0x1402CBBA0 (MiInPagePageTable.c)
 *     MiIssueHardFault @ 0x1402CFFA0 (MiIssueHardFault.c)
 *     MiStealPage @ 0x1403523FC (MiStealPage.c)
 *     MiKernelWriteToExecutableMemory @ 0x140546EB4 (MiKernelWriteToExecutableMemory.c)
 *     MiReleaseFaultSynchronization @ 0x1405473C4 (MiReleaseFaultSynchronization.c)
 *     MiIdealClusterPage @ 0x140554344 (MiIdealClusterPage.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027F090 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockFaultPageTable @ 0x140299728 (MiUnlockFaultPageTable.c)
 */

__int64 __fastcall MiReleaseFaultState(__int64 a1, unsigned __int8 a2, _BYTE *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbp

  v3 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(a1 + 16);
  MiUnlockFaultPageTable((__int64 *)a1);
  if ( a3 )
    *a3 = *(_BYTE *)(a1 + 12);
  else
    a2 = *(_BYTE *)(a1 + 12);
  if ( (*(_BYTE *)(a1 + 13) & 1) != 0 )
    MiUnlockWorkingSetExclusive(v3, a2);
  else
    MiUnlockWorkingSetShared(v3, a2);
  return v5;
}
