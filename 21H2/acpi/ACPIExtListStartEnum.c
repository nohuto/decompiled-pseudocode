/*
 * XREFs of ACPIExtListStartEnum @ 0x1C000990C
 * Callers:
 *     ACPIDetectDuplicateHID @ 0x1C0009170 (ACPIDetectDuplicateHID.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C000A564 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIDetectDockDevices @ 0x1C000A628 (ACPIDetectDockDevices.c)
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C000A724 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C002963C (EnableDisableDeviceTreeRegionSpace.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C002D08C (ACPIInitDeleteChildDeviceList.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C0048FA8 (ACPIDockFindCorrespondingDock.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C004B044 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIDetectEjectDevices @ 0x1C004E440 (ACPIDetectEjectDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIExtListStartEnum(__int64 a1)
{
  _QWORD **v2; // r9
  __int64 v3; // r8
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 48) )
    *(_BYTE *)(a1 + 24) = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a1 + 16));
  v2 = *(_QWORD ***)a1;
  v3 = *(_QWORD *)(a1 + 40);
  result = **(_QWORD **)a1 - v3;
  *(_QWORD *)(a1 + 32) = result;
  *(_QWORD *)(a1 + 8) = **v2;
  if ( (_QWORD **)(result + v3) == v2 )
    return 0LL;
  return result;
}
