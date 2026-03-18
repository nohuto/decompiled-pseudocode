/*
 * XREFs of ACPIExtListTestElement @ 0x1C001A6A4
 * Callers:
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C0017FB0 (EnableDisableDeviceTreeRegionSpace.c)
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C001A4F0 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     ACPIDetectDockDevices @ 0x1C001A5A0 (ACPIDetectDockDevices.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C002C840 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C002CFA4 (ACPIInitDeleteChildDeviceList.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C002D014 (ACPIDockFindCorrespondingDock.c)
 *     ACPIDetectEjectDevices @ 0x1C004F470 (ACPIDetectEjectDevices.c)
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
      if ( *(_DWORD *)(v2 + 692) )
        _InterlockedIncrement((volatile signed __int32 *)(v2 + 692));
      KeReleaseSpinLock(*(PKSPIN_LOCK *)(a1 + 16), *(_BYTE *)(a1 + 24));
    }
    return 1;
  }
}
