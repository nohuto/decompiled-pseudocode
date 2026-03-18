/*
 * XREFs of OSConvertDeviceHandleToNSHANDLE @ 0x1C001165C
 * Callers:
 *     ACPIQueryDeviceBiosName @ 0x1C00999C0 (ACPIQueryDeviceBiosName.c)
 *     ACPIEcRemoveOpRegionHandler @ 0x1C00AE86C (ACPIEcRemoveOpRegionHandler.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C00AF100 (AcpiGetFullyQualifiedBiosName.c)
 *     DeRegisterOpRegionHandler @ 0x1C00B18B0 (DeRegisterOpRegionHandler.c)
 *     RegisterOpRegionHandler @ 0x1C00B18F0 (RegisterOpRegionHandler.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002980 (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall OSConvertDeviceHandleToNSHANDLE(ULONG_PTR a1)
{
  return *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 720);
}
