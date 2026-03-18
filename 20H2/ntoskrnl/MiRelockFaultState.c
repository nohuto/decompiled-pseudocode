/*
 * XREFs of MiRelockFaultState @ 0x140235F50
 * Callers:
 *     MiWaitForCollidedFaultComplete @ 0x140201D9C (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x140239840 (MiPrivateFixup.c)
 *     MiFinishHardFault @ 0x1402C80B0 (MiFinishHardFault.c)
 *     MiIssueHardFault @ 0x1402CFFA0 (MiIssueHardFault.c)
 *     MiKernelWriteToExecutableMemory @ 0x140546EB4 (MiKernelWriteToExecutableMemory.c)
 *     MiIdealClusterPage @ 0x140554344 (MiIdealClusterPage.c)
 * Callees:
 *     MiLockLowestValidPageTable @ 0x140236270 (MiLockLowestValidPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 */

char __fastcall MiRelockFaultState(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  char v6; // r14
  __int64 valid; // rax
  __int64 SharedVm; // rbx
  __int64 v9; // rdx
  char v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = 0LL;
  if ( !a2 )
    goto LABEL_6;
  v6 = MiLockWorkingSetShared(*a1);
  valid = MiLockLowestValidPageTable(v2, a2 << 25 >> 16, &v11);
  v3 = valid;
  if ( valid != a2 )
  {
    MiUnlockPageTableInternal(v2);
    LOBYTE(v9) = v6;
    LOBYTE(valid) = MiUnlockWorkingSetShared(v2, v9);
    v3 = 0LL;
  }
  if ( !v3 )
  {
LABEL_6:
    *((_BYTE *)a1 + 13) |= 1u;
    SharedVm = MiGetSharedVm(v2, a2);
    LOBYTE(valid) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
  }
  a1[2] = v3;
  return valid;
}
