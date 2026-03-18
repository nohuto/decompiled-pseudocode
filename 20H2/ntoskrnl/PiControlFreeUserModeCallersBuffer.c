/*
 * XREFs of PiControlFreeUserModeCallersBuffer @ 0x14023F6C0
 * Callers:
 *     PiCMCapturePropertyInputData @ 0x14063D004 (PiCMCapturePropertyInputData.c)
 *     PiCMReleasePropertyInputData @ 0x14063D2C4 (PiCMReleasePropertyInputData.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x14063D690 (PiControlGetDeviceInterfaceEnabled.c)
 *     NtPlugPlayControl @ 0x14063D7D0 (NtPlugPlayControl.c)
 *     PiCMReleaseRegistryInputData @ 0x1406418A0 (PiCMReleaseRegistryInputData.c)
 *     PiCMCaptureRegistryInputData @ 0x140641968 (PiCMCaptureRegistryInputData.c)
 *     PiCMGetDeviceIdList @ 0x1406C9C84 (PiCMGetDeviceIdList.c)
 *     PiCMCaptureDeviceListInputData @ 0x1406CA07C (PiCMCaptureDeviceListInputData.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x1406CD71C (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1406CD8A8 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMGetDeviceInterfaceList @ 0x1406E8908 (PiCMGetDeviceInterfaceList.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1406EBF90 (PiCMCaptureInterfaceListInputData.c)
 *     PiCMReleaseObjectInputData @ 0x1406EC59C (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1406EC7D8 (PiCMCaptureObjectInputData.c)
 *     PiControlGetPropertyData @ 0x14071E290 (PiControlGetPropertyData.c)
 *     PiControlGetRelatedDevice @ 0x14071F240 (PiControlGetRelatedDevice.c)
 *     PiControlGetSetDeviceStatus @ 0x14071F730 (PiControlGetSetDeviceStatus.c)
 *     PiControlGetDeviceDepth @ 0x140720150 (PiControlGetDeviceDepth.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x140727544 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x140727C10 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x1408B17EC (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x1408B1B70 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiCMCreateDevice @ 0x1408B1E70 (PiCMCreateDevice.c)
 *     PiCMRegisterDeviceInterface @ 0x1408B374C (PiCMRegisterDeviceInterface.c)
 *     PiControlQueryAndRemoveDevice @ 0x1408B6120 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x1408B6280 (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x1408B64A0 (PiControlQueryDeviceRelations.c)
 *     PiControlStartDevice @ 0x1408B65F0 (PiControlStartDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PiControlFreeUserModeCallersBuffer(char a1, void *a2)
{
  if ( a1 )
  {
    if ( a2 )
      ExFreePoolWithTag(a2, 0);
  }
}
