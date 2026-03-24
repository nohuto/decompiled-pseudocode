/*
 * XREFs of MiRelockFaultState @ 0x1403052A8
 * Callers:
 *     MiFinishHardFault @ 0x140239890 (MiFinishHardFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14028C1F0 (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x14028CA28 (MiPrivateFixup.c)
 *     MiIssueHardFault @ 0x14030E9B0 (MiIssueHardFault.c)
 *     MiKernelWriteToExecutableMemory @ 0x1405489B4 (MiKernelWriteToExecutableMemory.c)
 *     MiIdealClusterPage @ 0x140555E14 (MiIdealClusterPage.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x14021AF50 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiLockLowestValidPageTable @ 0x1403055C0 (MiLockLowestValidPageTable.c)
 */

char __fastcall MiRelockFaultState(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int8 v8; // r14
  unsigned __int64 valid; // rax
  LONG *SharedVm; // rbx
  char v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)a1;
  v5 = 0LL;
  if ( !a2 )
    goto LABEL_6;
  v8 = MiLockWorkingSetShared(*(_QWORD *)a1, a2, a3, a4);
  valid = MiLockLowestValidPageTable(v4, a2 << 25 >> 16, &v12);
  v5 = valid;
  if ( valid != a2 )
  {
    MiUnlockPageTableInternal(v4, valid);
    LOBYTE(valid) = MiUnlockWorkingSetShared(v4, v8);
    v5 = 0LL;
  }
  if ( !v5 )
  {
LABEL_6:
    *(_BYTE *)(a1 + 13) |= 1u;
    SharedVm = MiGetSharedVm(v4);
    LOBYTE(valid) = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
  }
  *(_QWORD *)(a1 + 16) = v5;
  return valid;
}
