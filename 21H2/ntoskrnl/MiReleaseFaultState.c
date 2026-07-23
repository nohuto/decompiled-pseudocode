/*
 * XREFs of MiReleaseFaultState @ 0x14031A244
 * Callers:
 *     MiWaitForCollidedFaultComplete @ 0x140209390 (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x140209BC8 (MiPrivateFixup.c)
 *     MiStealPage @ 0x140259C44 (MiStealPage.c)
 *     MiUserFault @ 0x1402B2070 (MiUserFault.c)
 *     MiFinishHardFault @ 0x1402DE0E0 (MiFinishHardFault.c)
 *     MiInPagePageTable @ 0x140316B10 (MiInPagePageTable.c)
 *     MiIssueHardFault @ 0x140319700 (MiIssueHardFault.c)
 *     MiKernelWriteToExecutableMemory @ 0x140548BF4 (MiKernelWriteToExecutableMemory.c)
 *     MiReleaseFaultSynchronization @ 0x140549104 (MiReleaseFaultSynchronization.c)
 *     MiIdealClusterPage @ 0x140556054 (MiIdealClusterPage.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockFaultPageTable @ 0x14031CE98 (MiUnlockFaultPageTable.c)
 */

__int64 __fastcall MiReleaseFaultState(__int64 a1, unsigned __int8 a2, _BYTE *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbp

  v3 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(a1 + 16);
  MiUnlockFaultPageTable(a1);
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
