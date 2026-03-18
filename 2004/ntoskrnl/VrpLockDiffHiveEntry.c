/*
 * XREFs of VrpLockDiffHiveEntry @ 0x1405CCB98
 * Callers:
 *     VrpLoadDifferencingHive @ 0x1405CC858 (VrpLoadDifferencingHive.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall VrpLockDiffHiveEntry(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 24, 0LL);
}
