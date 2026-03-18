/*
 * XREFs of PiControlFreeUserModeCallersBuffer @ 0x1402E5DD0
 * Callers:
 *     PiCMCaptureRegistryInputData @ 0x1406A5C0C (PiCMCaptureRegistryInputData.c)
 *     PiCMReleaseRegistryInputData @ 0x1406A5E20 (PiCMReleaseRegistryInputData.c)
 *     PiCMCapturePropertyInputData @ 0x1406A6D54 (PiCMCapturePropertyInputData.c)
 *     PiCMReleasePropertyInputData @ 0x1406A7014 (PiCMReleasePropertyInputData.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1406A73E0 (PiControlGetDeviceInterfaceEnabled.c)
 *     NtPlugPlayControl @ 0x1406A7520 (NtPlugPlayControl.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x1406B1348 (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1406B14D4 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMReleaseObjectInputData @ 0x1406B1E28 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1406B2064 (PiCMCaptureObjectInputData.c)
 *     PiCMGetDeviceInterfaceList @ 0x1406B3B78 (PiCMGetDeviceInterfaceList.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1406B4744 (PiCMCaptureInterfaceListInputData.c)
 *     PiCMGetDeviceIdList @ 0x1406D4004 (PiCMGetDeviceIdList.c)
 *     PiCMCaptureDeviceListInputData @ 0x1406D43FC (PiCMCaptureDeviceListInputData.c)
 *     PiControlGetDeviceDepth @ 0x1406E78C0 (PiControlGetDeviceDepth.c)
 *     PiControlGetRelatedDevice @ 0x14070FEB0 (PiControlGetRelatedDevice.c)
 *     PiControlGetSetDeviceStatus @ 0x1407103A0 (PiControlGetSetDeviceStatus.c)
 *     PiControlGetPropertyData @ 0x140710F30 (PiControlGetPropertyData.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1407171C8 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x140717890 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x1408AA99C (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x1408AAD20 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiCMCreateDevice @ 0x1408AB020 (PiCMCreateDevice.c)
 *     PiCMRegisterDeviceInterface @ 0x1408AC8FC (PiCMRegisterDeviceInterface.c)
 *     PiControlQueryAndRemoveDevice @ 0x1408AF2D0 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x1408AF430 (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x1408AF650 (PiControlQueryDeviceRelations.c)
 *     PiControlStartDevice @ 0x1408AF7A0 (PiControlStartDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PiControlFreeUserModeCallersBuffer(char a1, void *a2)
{
  if ( a1 )
  {
    if ( a2 )
      ExFreePoolWithTag(a2, 0);
  }
}
