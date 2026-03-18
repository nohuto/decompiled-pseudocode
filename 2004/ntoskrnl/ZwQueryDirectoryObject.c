/*
 * XREFs of ZwQueryDirectoryObject @ 0x1403F5E20
 * Callers:
 *     IopGetLegacyVetoListDrivers @ 0x14066853C (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406F57C4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     BiGetNtPartitionPath @ 0x140770368 (BiGetNtPartitionPath.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x14078D79C (PiDrvDbEnumDriverStoreNodes.c)
 *     ExpFindArcName @ 0x14094C984 (ExpFindArcName.c)
 *     SiGetEfiSystemDevice @ 0x1409706E8 (SiGetEfiSystemDevice.c)
 *     CmGetSystemDriverList @ 0x140A4B2CC (CmGetSystemDriverList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryDirectoryObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
