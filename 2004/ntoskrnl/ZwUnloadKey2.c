/*
 * XREFs of ZwUnloadKey2 @ 0x1403F6EC0
 * Callers:
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1405CA3EC (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpUnloadDifferencingHive @ 0x1405CCC78 (VrpUnloadDifferencingHive.c)
 *     PiDrvDbUnloadHive @ 0x140713AB8 (PiDrvDbUnloadHive.c)
 *     PiDrvDbLoadHive @ 0x140713B04 (PiDrvDbLoadHive.c)
 *     BiUnloadHiveByName @ 0x140766424 (BiUnloadHiveByName.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x140A6F424 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnloadKey2(POBJECT_ATTRIBUTES TargetKey, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
