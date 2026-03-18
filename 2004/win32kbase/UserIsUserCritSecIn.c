/*
 * XREFs of UserIsUserCritSecIn @ 0x1C00A5D80
 * Callers:
 *     DrvNotifySessionStateChange @ 0x1C0023190 (DrvNotifySessionStateChange.c)
 *     DrvIsNotUsingGraphicsDevice @ 0x1C005D9D0 (DrvIsNotUsingGraphicsDevice.c)
 *     GreGetDCPoint @ 0x1C00A4F40 (GreGetDCPoint.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C00A695C (CheckOrAcquireDwmStateLock.c)
 *     DrvSessionHasAnyGraphicsDevice @ 0x1C00CC4D0 (DrvSessionHasAnyGraphicsDevice.c)
 *     DrvCleanupRemoteGraphicsDevices @ 0x1C014A3D8 (DrvCleanupRemoteGraphicsDevices.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C014BC78 (DrvUpdateRemoteGraphicsDeviceList.c)
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
