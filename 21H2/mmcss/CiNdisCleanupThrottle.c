/*
 * XREFs of CiNdisCleanupThrottle @ 0x1C000CC10
 * Callers:
 *     CsTerminate @ 0x1C000C7D8 (CsTerminate.c)
 * Callees:
 *     CiAcquireThreadCountLock @ 0x1C000CBA8 (CiAcquireThreadCountLock.c)
 *     CiReleaseThreadCountLock @ 0x1C000CBE0 (CiReleaseThreadCountLock.c)
 */

void CiNdisCleanupThrottle()
{
  char v0; // [rsp+40h] [rbp+8h] BYREF

  if ( CiNdisThrottleWorkItem )
  {
    CiAcquireThreadCountLock();
    v0 = CiNdisThrottleInProgress;
    CiReleaseThreadCountLock();
    if ( v0 )
    {
      ExBlockOnAddressPushLock(&CiNdisThrottleInProgressPushLock, &CiNdisThrottleInProgress, &v0, 1LL, 0LL);
      CiAcquireThreadCountLock();
      CiReleaseThreadCountLock();
    }
    IoFreeWorkItem(CiNdisThrottleWorkItem);
    CiNdisThrottleWorkItem = 0LL;
    if ( CiNdisDeviceHandle )
    {
      ZwClose(CiNdisDeviceHandle);
      CiNdisDeviceHandle = 0LL;
    }
  }
}
