/*
 * XREFs of ZwQueryDirectoryObject @ 0x1403F4B90
 * Callers:
 *     IopGetLegacyVetoListDrivers @ 0x140615B5C (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406D2BF4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     BiGetNtPartitionPath @ 0x14076DF58 (BiGetNtPartitionPath.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x14078B8CC (PiDrvDbEnumDriverStoreNodes.c)
 *     ExpFindArcName @ 0x14094B5E4 (ExpFindArcName.c)
 *     SiGetEfiSystemDevice @ 0x14096F348 (SiGetEfiSystemDevice.c)
 *     CmGetSystemDriverList @ 0x140A58398 (CmGetSystemDriverList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryDirectoryObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
