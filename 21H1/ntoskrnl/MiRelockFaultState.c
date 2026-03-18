/*
 * XREFs of MiRelockFaultState @ 0x1402ACF4C
 * Callers:
 *     MiFinishHardFault @ 0x140283A50 (MiFinishHardFault.c)
 *     MiIssueHardFault @ 0x1402B4770 (MiIssueHardFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x140341A74 (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x140344248 (MiPrivateFixup.c)
 *     MiKernelWriteToExecutableMemory @ 0x140542E94 (MiKernelWriteToExecutableMemory.c)
 *     MiIdealClusterPage @ 0x140550324 (MiIdealClusterPage.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     MiLockLowestValidPageTable @ 0x1402ACFF0 (MiLockLowestValidPageTable.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 */

char __fastcall MiRelockFaultState(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned __int8 v6; // r14
  __int64 valid; // rax
  LONG *SharedVm; // rbx
  char v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)a1;
  v3 = 0LL;
  if ( !a2 )
    goto LABEL_6;
  v6 = MiLockWorkingSetShared(*(_QWORD *)a1);
  valid = MiLockLowestValidPageTable(v2, a2 << 25 >> 16, &v10);
  v3 = valid;
  if ( valid != a2 )
  {
    MiUnlockPageTableInternal(v2, valid);
    LOBYTE(valid) = MiUnlockWorkingSetShared(v2, v6);
    v3 = 0LL;
  }
  if ( !v3 )
  {
LABEL_6:
    *(_BYTE *)(a1 + 13) |= 1u;
    SharedVm = MiGetSharedVm(v2);
    LOBYTE(valid) = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
  }
  *(_QWORD *)(a1 + 16) = v3;
  return valid;
}
