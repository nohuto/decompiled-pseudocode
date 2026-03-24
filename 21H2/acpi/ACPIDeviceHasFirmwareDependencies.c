/*
 * XREFs of ACPIDeviceHasFirmwareDependencies @ 0x1C00147FC
 * Callers:
 *     ACPIThermalLoopEx @ 0x1C0012A28 (ACPIThermalLoopEx.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C001EFD0 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C009DDA4 (ACPIDetectCouldExtensionBeInRelation.c)
 * Callees:
 *     <none>
 */

bool __fastcall ACPIDeviceHasFirmwareDependencies(__int64 a1)
{
  return (*(_BYTE *)(a1 + 960) & 0x40) != 0 || *(_QWORD *)(a1 + 608);
}
