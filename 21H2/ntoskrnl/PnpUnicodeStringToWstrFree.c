/*
 * XREFs of PnpUnicodeStringToWstrFree @ 0x14077BAB8
 * Callers:
 *     IoGetDeviceInterfaceAlias @ 0x1406DB590 (IoGetDeviceInterfaceAlias.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1406EA694 (PnpGetDeviceInterfacePropertyData.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140748FA4 (IopDeviceObjectFromSymbolicName.c)
 *     IopProcessSetInterfaceState @ 0x140769170 (IopProcessSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x140769668 (IopBuildGlobalSymbolicLinkString.c)
 *     IoRegisterDeviceInterface @ 0x140769AD0 (IoRegisterDeviceInterface.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14076B030 (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x14076B1A8 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PiDeviceRegistration @ 0x14076B5DC (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x14076B788 (PpForEachDeviceInstanceDriver.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x14077BB00 (PiControlGetDeviceInterfaceEnabled.c)
 *     IopGetDeviceInterfaces @ 0x1407879A8 (IopGetDeviceInterfaces.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14080D8A8 (PnpSetDeviceInterfacePropertyData.c)
 *     PnpDisableDeviceInterfaces @ 0x140810788 (PnpDisableDeviceInterfaces.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     PipApplyFunctionToServiceInstances @ 0x140851A60 (PipApplyFunctionToServiceInstances.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x1408549A0 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PnpGetDeviceDependencyList @ 0x140942E94 (PnpGetDeviceDependencyList.c)
 *     PnpDeleteDeviceInterfaces @ 0x140944640 (PnpDeleteDeviceInterfaces.c)
 *     PiInitializeDevice @ 0x14095975C (PiInitializeDevice.c)
 *     PipInitComputerIds @ 0x140B0F20C (PipInitComputerIds.c)
 *     IopInitializeBootDrivers @ 0x140B114E8 (IopInitializeBootDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
