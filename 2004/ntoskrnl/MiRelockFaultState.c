/*
 * XREFs of MiRelockFaultState @ 0x140253F1C
 * Callers:
 *     MiFinishHardFault @ 0x14022AA00 (MiFinishHardFault.c)
 *     MiIssueHardFault @ 0x14025B740 (MiIssueHardFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14031273C (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x140314F08 (MiPrivateFixup.c)
 *     MiKernelWriteToExecutableMemory @ 0x1405434E4 (MiKernelWriteToExecutableMemory.c)
 *     MiIdealClusterPage @ 0x140550974 (MiIdealClusterPage.c)
 * Callees:
 *     MiLockLowestValidPageTable @ 0x140253FC0 (MiLockLowestValidPageTable.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
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
    MiUnlockPageTableInternal(v2, valid);
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
