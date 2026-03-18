/*
 * XREFs of ACPIExtListTestElement @ 0x1C000A7D4
 * Callers:
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

char __fastcall ACPIExtListTestElement(__int64 a1, char a2)
{
  __int64 v2; // r9

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 + *(_QWORD *)(a1 + 40) == *(_QWORD *)a1 || !a2 )
  {
    if ( *(_DWORD *)(a1 + 48) )
      KeReleaseSpinLock(*(PKSPIN_LOCK *)(a1 + 16), *(_BYTE *)(a1 + 24));
    return 0;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 48) == 1 )
    {
      if ( *(_DWORD *)(v2 + 732) )
        _InterlockedIncrement((volatile signed __int32 *)(v2 + 732));
      KeReleaseSpinLock(*(PKSPIN_LOCK *)(a1 + 16), *(_BYTE *)(a1 + 24));
    }
    return 1;
  }
}
