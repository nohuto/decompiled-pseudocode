/*
 * XREFs of PopFanReportBootStartDevices @ 0x140A706FC
 * Callers:
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopSqmFanEnumeration @ 0x1407C6B48 (PopSqmFanEnumeration.c)
 */

void PopFanReportBootStartDevices()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *i; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  for ( i = (__int64 *)PopFans; i != &PopFans; i = (__int64 *)*i )
    PopSqmFanEnumeration();
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
}
