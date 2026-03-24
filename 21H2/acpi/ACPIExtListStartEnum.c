/*
 * XREFs of ACPIExtListStartEnum @ 0x1C001AD98
 * Callers:
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C0018210 (EnableDisableDeviceTreeRegionSpace.c)
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C001A750 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     ACPIDetectDockDevices @ 0x1C001A800 (ACPIDetectDockDevices.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C001A974 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C001AAF0 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPIDetectDuplicateHID @ 0x1C001ADF4 (ACPIDetectDuplicateHID.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C002CAA0 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C002D204 (ACPIInitDeleteChildDeviceList.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C002D274 (ACPIDockFindCorrespondingDock.c)
 *     ACPIDetectEjectDevices @ 0x1C004F600 (ACPIDetectEjectDevices.c)
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
