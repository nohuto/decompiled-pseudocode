/*
 * XREFs of PopFanReportBootStartDevices @ 0x140A6E67C
 * Callers:
 *     PoInitSystem @ 0x140A40948 (PoInitSystem.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     PopSqmFanEnumeration @ 0x1407CB158 (PopSqmFanEnumeration.c)
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
