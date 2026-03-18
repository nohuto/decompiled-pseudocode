/*
 * XREFs of PnpUnicodeStringToWstrFree @ 0x1406A7714
 * Callers:
 *     PiControlGetDeviceInterfaceEnabled @ 0x1406A73E0 (PiControlGetDeviceInterfaceEnabled.c)
 *     IopGetDeviceInterfaces @ 0x1406B3D5C (IopGetDeviceInterfaces.c)
 *     IoGetDeviceInterfaceAlias @ 0x1407173A0 (IoGetDeviceInterfaceAlias.c)
 *     IopDeviceObjectFromSymbolicName @ 0x1407238E8 (IopDeviceObjectFromSymbolicName.c)
 *     IoRegisterDeviceInterface @ 0x14072E7C0 (IoRegisterDeviceInterface.c)
 *     IopProcessSetInterfaceState @ 0x14072FAFC (IopProcessSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x14072FFB4 (IopBuildGlobalSymbolicLinkString.c)
 *     PiDeviceRegistration @ 0x14073116C (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x140731320 (PpForEachDeviceInstanceDriver.c)
 *     PnpDisableDeviceInterfaces @ 0x140736F54 (PnpDisableDeviceInterfaces.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14073B5CC (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x14073B72C (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x140768F28 (PnpSetDeviceInterfacePropertyData.c)
 *     IoReportDetectedDevice @ 0x140796A80 (IoReportDetectedDevice.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407ABA90 (PipApplyFunctionToServiceInstances.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x1407B7150 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PnpGetDeviceDependencyList @ 0x140899CB4 (PnpGetDeviceDependencyList.c)
 *     PnpDeleteDeviceInterfaces @ 0x14089B488 (PnpDeleteDeviceInterfaces.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14089E540 (PnpGetDeviceInterfacePropertyData.c)
 *     PiInitializeDevice @ 0x1408AF84C (PiInitializeDevice.c)
 *     PipInitComputerIds @ 0x140A547C4 (PipInitComputerIds.c)
 *     IopInitializeBootDrivers @ 0x140A56C1C (IopInitializeBootDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
