/*
 * XREFs of PnpUnicodeStringToWstrFree @ 0x140635794
 * Callers:
 *     PiControlGetDeviceInterfaceEnabled @ 0x140635460 (PiControlGetDeviceInterfaceEnabled.c)
 *     IopGetDeviceInterfaces @ 0x14063A508 (IopGetDeviceInterfaces.c)
 *     IoGetDeviceInterfaceAlias @ 0x14072B010 (IoGetDeviceInterfaceAlias.c)
 *     PnpDisableDeviceInterfaces @ 0x14073601C (PnpDisableDeviceInterfaces.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14073E140 (IopDeviceObjectFromSymbolicName.c)
 *     IoRegisterDeviceInterface @ 0x140748ED0 (IoRegisterDeviceInterface.c)
 *     IopProcessSetInterfaceState @ 0x1407490DC (IopProcessSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x140749594 (IopBuildGlobalSymbolicLinkString.c)
 *     PiDeviceRegistration @ 0x14074BDF0 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x14074BFA4 (PpForEachDeviceInstanceDriver.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140752C1C (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x140752D7C (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14077DEA8 (PnpSetDeviceInterfacePropertyData.c)
 *     IoReportDetectedDevice @ 0x1407AE910 (IoReportDetectedDevice.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407C0F30 (PipApplyFunctionToServiceInstances.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x1407CCE10 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PnpGetDeviceDependencyList @ 0x14089E0D4 (PnpGetDeviceDependencyList.c)
 *     PnpDeleteDeviceInterfaces @ 0x14089F8A8 (PnpDeleteDeviceInterfaces.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1408A2960 (PnpGetDeviceInterfacePropertyData.c)
 *     PiInitializeDevice @ 0x1408B3C6C (PiInitializeDevice.c)
 *     PipInitComputerIds @ 0x140A5B730 (PipInitComputerIds.c)
 *     IopInitializeBootDrivers @ 0x140A5DB88 (IopInitializeBootDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
