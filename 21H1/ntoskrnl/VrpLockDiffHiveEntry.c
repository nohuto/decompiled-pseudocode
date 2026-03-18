/*
 * XREFs of VrpLockDiffHiveEntry @ 0x1405CB7C8
 * Callers:
 *     VrpLoadDifferencingHive @ 0x1405CB488 (VrpLoadDifferencingHive.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall VrpLockDiffHiveEntry(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 24, 0LL);
}
