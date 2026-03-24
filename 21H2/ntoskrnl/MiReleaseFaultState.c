/*
 * XREFs of MiReleaseFaultState @ 0x14030F4F4
 * Callers:
 *     MiUserFault @ 0x14020D770 (MiUserFault.c)
 *     MiFinishHardFault @ 0x140239890 (MiFinishHardFault.c)
 *     MiStealPage @ 0x14026BCA4 (MiStealPage.c)
 *     MiWaitForCollidedFaultComplete @ 0x14028C1F0 (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x14028CA28 (MiPrivateFixup.c)
 *     MiInPagePageTable @ 0x14030BDC0 (MiInPagePageTable.c)
 *     MiIssueHardFault @ 0x14030E9B0 (MiIssueHardFault.c)
 *     MiKernelWriteToExecutableMemory @ 0x1405489B4 (MiKernelWriteToExecutableMemory.c)
 *     MiReleaseFaultSynchronization @ 0x140548EC4 (MiReleaseFaultSynchronization.c)
 *     MiIdealClusterPage @ 0x140555E14 (MiIdealClusterPage.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAE0 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockFaultPageTable @ 0x140312148 (MiUnlockFaultPageTable.c)
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
