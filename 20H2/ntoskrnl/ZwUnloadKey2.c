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

__int64 __fastcall ZwUnloadKey2(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
