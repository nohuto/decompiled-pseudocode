/*
 * XREFs of PiControlFreeUserModeCallersBuffer @ 0x1402647E0
 * Callers:
 *     PiCMCaptureRegistryInputData @ 0x140633C4C (PiCMCaptureRegistryInputData.c)
 *     PiCMReleaseRegistryInputData @ 0x140633E60 (PiCMReleaseRegistryInputData.c)
 *     PiCMCapturePropertyInputData @ 0x140634DD4 (PiCMCapturePropertyInputData.c)
 *     PiCMReleasePropertyInputData @ 0x140635094 (PiCMReleasePropertyInputData.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140635460 (PiControlGetDeviceInterfaceEnabled.c)
 *     NtPlugPlayControl @ 0x1406355A0 (NtPlugPlayControl.c)
 *     PiCMReleaseObjectInputData @ 0x140638B40 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x140638B74 (PiCMCaptureObjectInputData.c)
 *     PiControlGetSetDeviceStatus @ 0x140639930 (PiControlGetSetDeviceStatus.c)
 *     PiCMGetDeviceIdList @ 0x1406A6D64 (PiCMGetDeviceIdList.c)
 *     PiCMCaptureDeviceListInputData @ 0x1406A7294 (PiCMCaptureDeviceListInputData.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x1406AAC18 (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1406AADA4 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMGetDeviceInterfaceList @ 0x1406ACD88 (PiCMGetDeviceInterfaceList.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1406ACF6C (PiCMCaptureInterfaceListInputData.c)
 *     PiControlGetPropertyData @ 0x1406ADDA0 (PiControlGetPropertyData.c)
 *     PiControlGetRelatedDevice @ 0x1406AE010 (PiControlGetRelatedDevice.c)
 *     PiControlGetDeviceDepth @ 0x1406BD940 (PiControlGetDeviceDepth.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x14072AE3C (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x14072B500 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x1408AEDBC (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x1408AF140 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiCMCreateDevice @ 0x1408AF440 (PiCMCreateDevice.c)
 *     PiCMRegisterDeviceInterface @ 0x1408B0D1C (PiCMRegisterDeviceInterface.c)
 *     PiControlQueryAndRemoveDevice @ 0x1408B36F0 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x1408B3850 (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x1408B3A70 (PiControlQueryDeviceRelations.c)
 *     PiControlStartDevice @ 0x1408B3BC0 (PiControlStartDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall PiControlFreeUserModeCallersBuffer(char a1, void *a2)
{
  if ( a1 )
  {
    if ( a2 )
      ExFreePoolWithTag(a2, 0);
  }
}
