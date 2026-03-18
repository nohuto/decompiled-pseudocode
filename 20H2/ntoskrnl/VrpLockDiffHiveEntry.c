/*
 * XREFs of VrpLockDiffHiveEntry @ 0x1405D31F8
 * Callers:
 *     VrpLoadDifferencingHive @ 0x1405D2EB8 (VrpLoadDifferencingHive.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall VrpLockDiffHiveEntry(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 24, 0LL);
}
