/*
 * XREFs of OSConvertDeviceHandleToNSHANDLE @ 0x1C004998C
 * Callers:
 *     ACPIEcRemoveOpRegionHandler @ 0x1C00AD814 (ACPIEcRemoveOpRegionHandler.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C00AE070 (AcpiGetFullyQualifiedBiosName.c)
 *     DeRegisterOpRegionHandler @ 0x1C00B0E30 (DeRegisterOpRegionHandler.c)
 *     RegisterOpRegionHandler @ 0x1C00B0E70 (RegisterOpRegionHandler.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall OSConvertDeviceHandleToNSHANDLE(ULONG_PTR a1)
{
  return *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 760);
}
