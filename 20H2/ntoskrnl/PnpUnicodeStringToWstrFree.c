/*
 * XREFs of PnpUnicodeStringToWstrFree @ 0x14063D9C4
 * Callers:
 *     PiControlGetDeviceInterfaceEnabled @ 0x14063D690 (PiControlGetDeviceInterfaceEnabled.c)
 *     IopGetDeviceInterfaces @ 0x1406E8FDC (IopGetDeviceInterfaces.c)
 *     IoGetDeviceInterfaceAlias @ 0x140727720 (IoGetDeviceInterfaceAlias.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14073B1E4 (IopDeviceObjectFromSymbolicName.c)
 *     PiDeviceRegistration @ 0x1407431AC (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x140743360 (PpForEachDeviceInstanceDriver.c)
 *     IopProcessSetInterfaceState @ 0x1407439BC (IopProcessSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x140743E74 (IopBuildGlobalSymbolicLinkString.c)
 *     IoRegisterDeviceInterface @ 0x140744320 (IoRegisterDeviceInterface.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14074C05C (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x14074C1BC (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PnpDisableDeviceInterfaces @ 0x14076AC4C (PnpDisableDeviceInterfaces.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14077A0C8 (PnpSetDeviceInterfacePropertyData.c)
 *     IoReportDetectedDevice @ 0x1407A5B60 (IoReportDetectedDevice.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407BCB30 (PipApplyFunctionToServiceInstances.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x1407C8B50 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PnpGetDeviceDependencyList @ 0x1408A0B04 (PnpGetDeviceDependencyList.c)
 *     PnpDeleteDeviceInterfaces @ 0x1408A22D8 (PnpDeleteDeviceInterfaces.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1408A5390 (PnpGetDeviceInterfacePropertyData.c)
 *     PiInitializeDevice @ 0x1408B669C (PiInitializeDevice.c)
 *     PipInitComputerIds @ 0x140A5ABC4 (PipInitComputerIds.c)
 *     IopInitializeBootDrivers @ 0x140A5D01C (IopInitializeBootDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PnpUnicodeStringToWstrFree(void *a1, __int64 a2)
{
  void *v2; // rax

  if ( a1 )
  {
    if ( a2 )
    {
      if ( *(_WORD *)(a2 + 2) )
      {
        v2 = *(void **)(a2 + 8);
        if ( v2 )
        {
          if ( v2 != a1 )
            ExFreePoolWithTag(a1, 0);
        }
      }
    }
  }
}
