/*
 * XREFs of PiControlFreeUserModeCallersBuffer @ 0x140252870
 * Callers:
 *     PiCMGetDeviceIdList @ 0x140604994 (PiCMGetDeviceIdList.c)
 *     PiCMCaptureDeviceListInputData @ 0x140604EC4 (PiCMCaptureDeviceListInputData.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x140609308 (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x140609494 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMGetDeviceInterfaceList @ 0x14060B478 (PiCMGetDeviceInterfaceList.c)
 *     PiCMCaptureInterfaceListInputData @ 0x14060B65C (PiCMCaptureInterfaceListInputData.c)
 *     PiControlGetPropertyData @ 0x14060C640 (PiControlGetPropertyData.c)
 *     PiControlGetRelatedDevice @ 0x14060C8B0 (PiControlGetRelatedDevice.c)
 *     PiControlGetDeviceDepth @ 0x14061CB50 (PiControlGetDeviceDepth.c)
 *     PiCMCaptureRegistryInputData @ 0x140628CD8 (PiCMCaptureRegistryInputData.c)
 *     PiCMReleaseRegistryInputData @ 0x140628EEC (PiCMReleaseRegistryInputData.c)
 *     PiCMCapturePropertyInputData @ 0x140629BE4 (PiCMCapturePropertyInputData.c)
 *     PiCMReleasePropertyInputData @ 0x140629EA4 (PiCMReleasePropertyInputData.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x14062A270 (PiControlGetDeviceInterfaceEnabled.c)
 *     NtPlugPlayControl @ 0x14062A3B0 (NtPlugPlayControl.c)
 *     PiCMReleaseObjectInputData @ 0x14062D950 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x14062D984 (PiCMCaptureObjectInputData.c)
 *     PiControlGetSetDeviceStatus @ 0x14062E740 (PiControlGetSetDeviceStatus.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x14072B2EC (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x14072B9B0 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x1408AEF1C (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x1408AF2A0 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiCMCreateDevice @ 0x1408AF5A0 (PiCMCreateDevice.c)
 *     PiCMRegisterDeviceInterface @ 0x1408B0E7C (PiCMRegisterDeviceInterface.c)
 *     PiControlQueryAndRemoveDevice @ 0x1408B3850 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x1408B39B0 (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x1408B3BD0 (PiControlQueryDeviceRelations.c)
 *     PiControlStartDevice @ 0x1408B3D20 (PiControlStartDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall PiControlFreeUserModeCallersBuffer(char a1, void *a2)
{
  if ( a1 )
  {
    if ( a2 )
      ExFreePoolWithTag(a2, 0);
  }
}
