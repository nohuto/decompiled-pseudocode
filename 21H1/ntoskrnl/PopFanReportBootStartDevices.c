/*
 * XREFs of PopFanReportBootStartDevices @ 0x140A69970
 * Callers:
 *     PoInitSystem @ 0x140A3BEEC (PoInitSystem.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     PopSqmFanEnumeration @ 0x1407B5148 (PopSqmFanEnumeration.c)
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
