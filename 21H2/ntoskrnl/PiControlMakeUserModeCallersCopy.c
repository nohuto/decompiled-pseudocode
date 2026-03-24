/*
 * XREFs of PiControlMakeUserModeCallersCopy @ 0x1406356D0
 * Callers:
 *     NtReplacePartitionUnit @ 0x1405C9FF0 (NtReplacePartitionUnit.c)
 *     PiCMCaptureRegistryInputData @ 0x140633C4C (PiCMCaptureRegistryInputData.c)
 *     PiCMCapturePropertyInputData @ 0x140634DD4 (PiCMCapturePropertyInputData.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140635460 (PiControlGetDeviceInterfaceEnabled.c)
 *     NtPlugPlayControl @ 0x1406355A0 (NtPlugPlayControl.c)
 *     PiCMCaptureObjectInputData @ 0x140638B74 (PiCMCaptureObjectInputData.c)
 *     PiControlGetSetDeviceStatus @ 0x140639930 (PiControlGetSetDeviceStatus.c)
 *     PiCMCaptureDeviceListInputData @ 0x1406A7294 (PiCMCaptureDeviceListInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1406AADA4 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1406ACF6C (PiCMCaptureInterfaceListInputData.c)
 *     PiControlGetPropertyData @ 0x1406ADDA0 (PiControlGetPropertyData.c)
 *     PiControlGetRelatedDevice @ 0x1406AE010 (PiControlGetRelatedDevice.c)
 *     PiControlGetDeviceDepth @ 0x1406BD940 (PiControlGetDeviceDepth.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x14072B500 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x1408AEDBC (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x1408AF140 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiControlQueryAndRemoveDevice @ 0x1408B36F0 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x1408B3850 (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x1408B3A70 (PiControlQueryDeviceRelations.c)
 *     PiControlStartDevice @ 0x1408B3BC0 (PiControlStartDevice.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140353020 (ExAllocatePoolWithQuotaTag.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x140637680 (PiControlCopyUserModeCallersBuffer.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiControlMakeUserModeCallersCopy(void **a1, void *a2, unsigned int a3, ULONG a4, char a5, int a6)
{
  PVOID PoolWithQuotaTag; // rax
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
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, a3, 0x20207050u);
    *a1 = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
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
