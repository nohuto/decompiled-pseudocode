/*
 * XREFs of MiReleaseFaultState @ 0x14025BE38
 * Callers:
 *     MiFinishHardFault @ 0x14022AA00 (MiFinishHardFault.c)
 *     MiInPagePageTable @ 0x140258DB0 (MiInPagePageTable.c)
 *     MiIssueHardFault @ 0x14025B740 (MiIssueHardFault.c)
 *     MiUserFault @ 0x14029F750 (MiUserFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14031273C (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x140314F08 (MiPrivateFixup.c)
 *     MiStealPage @ 0x14031A7E0 (MiStealPage.c)
 *     MiKernelWriteToExecutableMemory @ 0x1405434E4 (MiKernelWriteToExecutableMemory.c)
 *     MiReleaseFaultSynchronization @ 0x1405439F4 (MiReleaseFaultSynchronization.c)
 *     MiIdealClusterPage @ 0x140550974 (MiIdealClusterPage.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiUnlockFaultPageTable @ 0x1402BE1D8 (MiUnlockFaultPageTable.c)
 */

__int64 __fastcall MiReleaseFaultState(__int64 a1, unsigned __int8 a2, _BYTE *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbp
  __int64 v8; // rdx

  v3 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(a1 + 16);
  MiUnlockFaultPageTable();
  if ( a3 )
    *a3 = *(_BYTE *)(a1 + 12);
  else
    a2 = *(_BYTE *)(a1 + 12);
  LOBYTE(v8) = a2;
  if ( (*(_BYTE *)(a1 + 13) & 1) != 0 )
    MiUnlockWorkingSetExclusive(v3, a2);
  else
    MiUnlockWorkingSetShared(v3, v8);
  return v5;
}
