/*
 * XREFs of PiControlFreeUserModeCallersBuffer @ 0x1402DF554
 * Callers:
 *     PiCMCaptureRegistryInputData @ 0x1406BAA98 (PiCMCaptureRegistryInputData.c)
 *     PiCMReleaseObjectInputData @ 0x1406BACAC (PiCMReleaseObjectInputData.c)
 *     PiCMGetDeviceIdList @ 0x1406CFE50 (PiCMGetDeviceIdList.c)
 *     PiCMCaptureDeviceListInputData @ 0x1406D035C (PiCMCaptureDeviceListInputData.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1406DB388 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x1406DB910 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiControlQueryDeviceRelations @ 0x1406E3860 (PiControlQueryDeviceRelations.c)
 *     PiControlGetDeviceDepth @ 0x140773A70 (PiControlGetDeviceDepth.c)
 *     PiControlGetPropertyData @ 0x140775140 (PiControlGetPropertyData.c)
 *     PiControlGetRelatedDevice @ 0x1407753A0 (PiControlGetRelatedDevice.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x140778F4C (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1407790D0 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiControlGetSetDeviceStatus @ 0x1407793D0 (PiControlGetSetDeviceStatus.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x14077BB00 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiCMCapturePropertyInputData @ 0x14077C1C4 (PiCMCapturePropertyInputData.c)
 *     PiCMReleasePropertyInputData @ 0x14077C484 (PiCMReleasePropertyInputData.c)
 *     NtPlugPlayControl @ 0x14077C4E0 (NtPlugPlayControl.c)
 *     PiCMGetDeviceInterfaceList @ 0x140788300 (PiCMGetDeviceInterfaceList.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1407884B4 (PiCMCaptureInterfaceListInputData.c)
 *     PiCMCaptureObjectInputData @ 0x14078A1A8 (PiCMCaptureObjectInputData.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140953D38 (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x140954134 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiCMCreateDevice @ 0x140954434 (PiCMCreateDevice.c)
 *     PiCMRegisterDeviceInterface @ 0x140955EF8 (PiCMRegisterDeviceInterface.c)
 *     PiControlQueryAndRemoveDevice @ 0x140959330 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x140959490 (PiControlQueryConflictList.c)
 *     PiControlStartDevice @ 0x1409596B0 (PiControlStartDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PiControlFreeUserModeCallersBuffer(char a1, void *a2)
{
  if ( a1 )
  {
    if ( a2 )
      ExFreePoolWithTag(a2, 0);
  }
}
