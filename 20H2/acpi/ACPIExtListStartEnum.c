/*
 * XREFs of ACPIExtListStartEnum @ 0x1C001AB38
 * Callers:
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C0017FB0 (EnableDisableDeviceTreeRegionSpace.c)
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C001A4F0 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     ACPIDetectDockDevices @ 0x1C001A5A0 (ACPIDetectDockDevices.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C001A714 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C001A890 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPIDetectDuplicateHID @ 0x1C001AB94 (ACPIDetectDuplicateHID.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C002C840 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C002CFA4 (ACPIInitDeleteChildDeviceList.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C002D014 (ACPIDockFindCorrespondingDock.c)
 *     ACPIDetectEjectDevices @ 0x1C004F470 (ACPIDetectEjectDevices.c)
 * Callees:
 *     <none>
 */

char *__fastcall ACPIExtListStartEnum(__int64 a1)
{
  _QWORD **v2; // r9
  _QWORD **v3; // r8
  char *result; // rax

  if ( *(_DWORD *)(a1 + 48) )
    *(_BYTE *)(a1 + 24) = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a1 + 16));
  v2 = *(_QWORD ***)a1;
  v3 = **(_QWORD ****)a1;
  result = (char *)v3 - *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 32) = result;
  if ( v3 == v2 )
    result = 0LL;
  *(_QWORD *)(a1 + 8) = **v2;
  return result;
}
