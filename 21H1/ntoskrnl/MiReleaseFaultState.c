/*
 * XREFs of MiReleaseFaultState @ 0x1402B4E68
 * Callers:
 *     MiUserFault @ 0x14020CC40 (MiUserFault.c)
 *     MiFinishHardFault @ 0x140283A50 (MiFinishHardFault.c)
 *     MiInPagePageTable @ 0x1402B1DE0 (MiInPagePageTable.c)
 *     MiIssueHardFault @ 0x1402B4770 (MiIssueHardFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x140341A74 (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x140344248 (MiPrivateFixup.c)
 *     MiStealPage @ 0x140349B20 (MiStealPage.c)
 *     MiKernelWriteToExecutableMemory @ 0x140542E94 (MiKernelWriteToExecutableMemory.c)
 *     MiReleaseFaultSynchronization @ 0x1405433A4 (MiReleaseFaultSynchronization.c)
 *     MiIdealClusterPage @ 0x140550324 (MiIdealClusterPage.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiUnlockFaultPageTable @ 0x14022B558 (MiUnlockFaultPageTable.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
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
