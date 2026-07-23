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

NTSTATUS __cdecl ZwUnloadKey2(POBJECT_ATTRIBUTES TargetKey, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
