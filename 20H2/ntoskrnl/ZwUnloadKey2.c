/*
 * XREFs of ZwUnloadKey2 @ 0x1403FBA90
 * Callers:
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1405D05AC (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpUnloadDifferencingHive @ 0x1405D32D8 (VrpUnloadDifferencingHive.c)
 *     PiDrvDbUnloadHive @ 0x1407217A8 (PiDrvDbUnloadHive.c)
 *     PiDrvDbLoadHive @ 0x1407217F4 (PiDrvDbLoadHive.c)
 *     BiUnloadHiveByName @ 0x140775454 (BiUnloadHiveByName.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x140A75928 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnloadKey2(POBJECT_ATTRIBUTES TargetKey, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
