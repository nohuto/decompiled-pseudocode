/*
 * XREFs of OSConvertDeviceHandleToNSHANDLE @ 0x1C00118BC
 * Callers:
 *     ACPIQueryDeviceBiosName @ 0x1C0099CE0 (ACPIQueryDeviceBiosName.c)
 *     ACPIEcRemoveOpRegionHandler @ 0x1C00AEB8C (ACPIEcRemoveOpRegionHandler.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C00AF420 (AcpiGetFullyQualifiedBiosName.c)
 *     DeRegisterOpRegionHandler @ 0x1C00B1BD0 (DeRegisterOpRegionHandler.c)
 *     RegisterOpRegionHandler @ 0x1C00B1C10 (RegisterOpRegionHandler.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall OSConvertDeviceHandleToNSHANDLE(ULONG_PTR a1)
{
  return *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 720);
}
