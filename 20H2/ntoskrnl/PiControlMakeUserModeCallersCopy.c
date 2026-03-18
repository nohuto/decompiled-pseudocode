/*
 * XREFs of PiControlMakeUserModeCallersCopy @ 0x14063D900
 * Callers:
 *     NtReplacePartitionUnit @ 0x1405C87C0 (NtReplacePartitionUnit.c)
 *     PiCMCapturePropertyInputData @ 0x14063D004 (PiCMCapturePropertyInputData.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x14063D690 (PiControlGetDeviceInterfaceEnabled.c)
 *     NtPlugPlayControl @ 0x14063D7D0 (NtPlugPlayControl.c)
 *     PiCMCaptureRegistryInputData @ 0x140641968 (PiCMCaptureRegistryInputData.c)
 *     PiCMCaptureDeviceListInputData @ 0x1406CA07C (PiCMCaptureDeviceListInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1406CD8A8 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1406EBF90 (PiCMCaptureInterfaceListInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1406EC7D8 (PiCMCaptureObjectInputData.c)
 *     PiControlGetPropertyData @ 0x14071E290 (PiControlGetPropertyData.c)
 *     PiControlGetRelatedDevice @ 0x14071F240 (PiControlGetRelatedDevice.c)
 *     PiControlGetSetDeviceStatus @ 0x14071F730 (PiControlGetSetDeviceStatus.c)
 *     PiControlGetDeviceDepth @ 0x140720150 (PiControlGetDeviceDepth.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x140727C10 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x1408B17EC (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x1408B1B70 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiControlQueryAndRemoveDevice @ 0x1408B6120 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x1408B6280 (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x1408B64A0 (PiControlQueryDeviceRelations.c)
 *     PiControlStartDevice @ 0x1408B65F0 (PiControlStartDevice.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14020A530 (ExAllocatePoolWithQuotaTag.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x14063F8B0 (PiControlCopyUserModeCallersBuffer.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
