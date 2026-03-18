/*
 * XREFs of ACPIDeviceHasFirmwareDependencies @ 0x1C00217F4
 * Callers:
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C000ECC0 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIThermalLoopEx @ 0x1C00209D8 (ACPIThermalLoopEx.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C00932F8 (ACPIDetectCouldExtensionBeInRelation.c)
 * Callees:
 *     <none>
 */

bool __fastcall ACPIDeviceHasFirmwareDependencies(__int64 a1)
{
  return (*(_BYTE *)(a1 + 1000) & 0x40) != 0 || *(_QWORD *)(a1 + 648);
}
