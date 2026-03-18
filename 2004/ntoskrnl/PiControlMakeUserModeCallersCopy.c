/*
 * XREFs of PiControlMakeUserModeCallersCopy @ 0x1405D9020
 * Callers:
 *     NtReplacePartitionUnit @ 0x1405C4B30 (NtReplacePartitionUnit.c)
 *     PiCMCaptureRegistryInputData @ 0x1405D75D8 (PiCMCaptureRegistryInputData.c)
 *     PiCMCapturePropertyInputData @ 0x1405D8724 (PiCMCapturePropertyInputData.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1405D8DB0 (PiControlGetDeviceInterfaceEnabled.c)
 *     NtPlugPlayControl @ 0x1405D8EF0 (NtPlugPlayControl.c)
 *     PiControlGetRelatedDevice @ 0x1406A5580 (PiControlGetRelatedDevice.c)
 *     PiControlGetSetDeviceStatus @ 0x1406A5A70 (PiControlGetSetDeviceStatus.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1406C1ABC (PiCMCaptureInterfaceListInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1406C2304 (PiCMCaptureObjectInputData.c)
 *     PiCMCaptureDeviceListInputData @ 0x1406F71EC (PiCMCaptureDeviceListInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1406FA8A8 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiControlGetPropertyData @ 0x140706470 (PiControlGetPropertyData.c)
 *     PiControlGetDeviceDepth @ 0x14070B7F0 (PiControlGetDeviceDepth.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x140719C20 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x1408ABCBC (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x1408AC040 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiControlQueryAndRemoveDevice @ 0x1408B05F0 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x1408B0750 (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x1408B0970 (PiControlQueryDeviceRelations.c)
 *     PiControlStartDevice @ 0x1408B0AC0 (PiControlStartDevice.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140297DA0 (ExAllocatePoolWithQuotaTag.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x1405DAFD0 (PiControlCopyUserModeCallersBuffer.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
