/*
 * XREFs of PiControlFreeUserModeCallersBuffer @ 0x1402024E0
 * Callers:
 *     PiCMCaptureRegistryInputData @ 0x1405D75D8 (PiCMCaptureRegistryInputData.c)
 *     PiCMReleaseRegistryInputData @ 0x1405D77EC (PiCMReleaseRegistryInputData.c)
 *     PiCMCapturePropertyInputData @ 0x1405D8724 (PiCMCapturePropertyInputData.c)
 *     PiCMReleasePropertyInputData @ 0x1405D89E4 (PiCMReleasePropertyInputData.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1405D8DB0 (PiControlGetDeviceInterfaceEnabled.c)
 *     NtPlugPlayControl @ 0x1405D8EF0 (NtPlugPlayControl.c)
 *     PiControlGetRelatedDevice @ 0x1406A5580 (PiControlGetRelatedDevice.c)
 *     PiControlGetSetDeviceStatus @ 0x1406A5A70 (PiControlGetSetDeviceStatus.c)
 *     PiCMGetDeviceInterfaceList @ 0x1406BDFC8 (PiCMGetDeviceInterfaceList.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1406C1ABC (PiCMCaptureInterfaceListInputData.c)
 *     PiCMReleaseObjectInputData @ 0x1406C20C8 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1406C2304 (PiCMCaptureObjectInputData.c)
 *     PiCMGetDeviceIdList @ 0x1406F6DF4 (PiCMGetDeviceIdList.c)
 *     PiCMCaptureDeviceListInputData @ 0x1406F71EC (PiCMCaptureDeviceListInputData.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x1406FA71C (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1406FA8A8 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiControlGetPropertyData @ 0x140706470 (PiControlGetPropertyData.c)
 *     PiControlGetDeviceDepth @ 0x14070B7F0 (PiControlGetDeviceDepth.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x140719558 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x140719C20 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x1408ABCBC (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x1408AC040 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiCMCreateDevice @ 0x1408AC340 (PiCMCreateDevice.c)
 *     PiCMRegisterDeviceInterface @ 0x1408ADC1C (PiCMRegisterDeviceInterface.c)
 *     PiControlQueryAndRemoveDevice @ 0x1408B05F0 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x1408B0750 (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x1408B0970 (PiControlQueryDeviceRelations.c)
 *     PiControlStartDevice @ 0x1408B0AC0 (PiControlStartDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall PiControlFreeUserModeCallersBuffer(char a1, void *a2)
{
  if ( a1 )
  {
    if ( a2 )
      ExFreePoolWithTag(a2, 0);
  }
}
