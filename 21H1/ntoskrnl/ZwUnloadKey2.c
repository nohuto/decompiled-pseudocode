/*
 * XREFs of ZwUnloadKey2 @ 0x1403F5C30
 * Callers:
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1405C901C (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpUnloadDifferencingHive @ 0x1405CB8A8 (VrpUnloadDifferencingHive.c)
 *     PiDrvDbUnloadHive @ 0x140711C08 (PiDrvDbUnloadHive.c)
 *     PiDrvDbLoadHive @ 0x140711C54 (PiDrvDbLoadHive.c)
 *     BiUnloadHiveByName @ 0x140764A70 (BiUnloadHiveByName.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x140A6E924 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnloadKey2(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
