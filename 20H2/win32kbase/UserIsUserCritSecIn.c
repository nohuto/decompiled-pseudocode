/*
 * XREFs of UserIsUserCritSecIn @ 0x1C0060D80
 * Callers:
 *     GreGetDCPoint @ 0x1C0060930 (GreGetDCPoint.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C0066FA4 (CheckOrAcquireDwmStateLock.c)
 *     DrvNotifySessionStateChange @ 0x1C0086880 (DrvNotifySessionStateChange.c)
 *     DrvIsNotUsingGraphicsDevice @ 0x1C00BE030 (DrvIsNotUsingGraphicsDevice.c)
 *     DrvSessionHasAnyGraphicsDevice @ 0x1C00CB6E0 (DrvSessionHasAnyGraphicsDevice.c)
 *     DrvCleanupRemoteGraphicsDevices @ 0x1C0147F08 (DrvCleanupRemoteGraphicsDevices.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C01497A8 (DrvUpdateRemoteGraphicsDeviceList.c)
 * Callees:
 *     <none>
 */

__int64 UserIsUserCritSecIn()
{
  ULONG IsResourceAcquiredSharedLite; // eax
  unsigned int v1; // ecx

  if ( ExIsResourceAcquiredExclusiveLite(gpresUser) == 1 )
    return 1;
  IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(gpresUser);
  v1 = 0;
  if ( IsResourceAcquiredSharedLite )
    return 1;
  return v1;
}
