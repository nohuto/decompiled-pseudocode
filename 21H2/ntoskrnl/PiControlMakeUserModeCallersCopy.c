/*
 * XREFs of PiControlMakeUserModeCallersCopy @ 0x14077C610
 * Callers:
 *     NtReplacePartitionUnit @ 0x140654720 (NtReplacePartitionUnit.c)
 *     PiCMCaptureRegistryInputData @ 0x1406BAA98 (PiCMCaptureRegistryInputData.c)
 *     PiCMCaptureDeviceListInputData @ 0x1406D035C (PiCMCaptureDeviceListInputData.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x1406DB910 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiControlQueryDeviceRelations @ 0x1406E3860 (PiControlQueryDeviceRelations.c)
 *     PiControlGetDeviceDepth @ 0x140773A70 (PiControlGetDeviceDepth.c)
 *     PiControlGetPropertyData @ 0x140775140 (PiControlGetPropertyData.c)
 *     PiControlGetRelatedDevice @ 0x1407753A0 (PiControlGetRelatedDevice.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1407790D0 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiControlGetSetDeviceStatus @ 0x1407793D0 (PiControlGetSetDeviceStatus.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x14077BB00 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiCMCapturePropertyInputData @ 0x14077C1C4 (PiCMCapturePropertyInputData.c)
 *     NtPlugPlayControl @ 0x14077C4E0 (NtPlugPlayControl.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1407884B4 (PiCMCaptureInterfaceListInputData.c)
 *     PiCMCaptureObjectInputData @ 0x14078A1A8 (PiCMCaptureObjectInputData.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140953D38 (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x140954134 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiControlQueryAndRemoveDevice @ 0x140959330 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x140959490 (PiControlQueryConflictList.c)
 *     PiControlStartDevice @ 0x1409596B0 (PiControlStartDevice.c)
 * Callees:
 *     PiControlCopyUserModeCallersBuffer @ 0x14077C6D4 (PiControlCopyUserModeCallersBuffer.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiControlMakeUserModeCallersCopy(void **a1, void *a2, unsigned int a3, ULONG a4, char a5, int a6)
{
  __int64 Pool2; // rax
  int v12; // esi

  if ( !a5 )
  {
    *a1 = a2;
    return 0LL;
  }
  if ( !a3 )
  {
    *a1 = 0LL;
    return 0LL;
  }
  if ( a6 )
  {
    Pool2 = ExAllocatePool2(257LL, a3, 538996816LL);
    *a1 = (void *)Pool2;
    if ( !Pool2 )
      return 3221225626LL;
  }
  v12 = 0;
  if ( *a1 )
  {
    v12 = PiControlCopyUserModeCallersBuffer(*a1, a2, a3, a4, a5, a6);
    if ( v12 < 0 )
    {
      if ( a6 )
      {
        ExFreePoolWithTag(*a1, 0);
        *a1 = 0LL;
      }
    }
  }
  return (unsigned int)v12;
}
