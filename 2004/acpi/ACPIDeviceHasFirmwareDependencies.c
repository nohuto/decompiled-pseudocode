/*
 * XREFs of ACPIDeviceHasFirmwareDependencies @ 0x1C001459C
 * Callers:
 *     ACPIThermalLoopEx @ 0x1C00127C8 (ACPIThermalLoopEx.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C001ED70 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C009DA84 (ACPIDetectCouldExtensionBeInRelation.c)
 * Callees:
 *     <none>
 */

bool __fastcall ACPIDeviceHasFirmwareDependencies(__int64 a1)
{
  return (*(_BYTE *)(a1 + 960) & 0x40) != 0 || *(_QWORD *)(a1 + 608);
}
