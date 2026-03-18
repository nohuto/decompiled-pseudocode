/*
 * XREFs of UserIsUserCritSecIn @ 0x1C00B4D20
 * Callers:
 *     DrvNotifySessionStateChange @ 0x1C000E250 (DrvNotifySessionStateChange.c)
 *     DrvIsNotUsingGraphicsDevice @ 0x1C004FF80 (DrvIsNotUsingGraphicsDevice.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C00B45E4 (CheckOrAcquireDwmStateLock.c)
 *     GreGetDCPoint @ 0x1C00B4970 (GreGetDCPoint.c)
 *     DrvSessionHasAnyGraphicsDevice @ 0x1C00CBC20 (DrvSessionHasAnyGraphicsDevice.c)
 *     DrvCleanupRemoteGraphicsDevices @ 0x1C0150728 (DrvCleanupRemoteGraphicsDevices.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C0151FC8 (DrvUpdateRemoteGraphicsDeviceList.c)
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
