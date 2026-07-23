/*
 * XREFs of MiRelockFaultState @ 0x14030FFF8
 * Callers:
 *     MiWaitForCollidedFaultComplete @ 0x140209390 (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x140209BC8 (MiPrivateFixup.c)
 *     MiFinishHardFault @ 0x1402DE0E0 (MiFinishHardFault.c)
 *     MiIssueHardFault @ 0x140319700 (MiIssueHardFault.c)
 *     MiKernelWriteToExecutableMemory @ 0x140548BF4 (MiKernelWriteToExecutableMemory.c)
 *     MiIdealClusterPage @ 0x140556054 (MiIdealClusterPage.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiLockLowestValidPageTable @ 0x140310310 (MiLockLowestValidPageTable.c)
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
