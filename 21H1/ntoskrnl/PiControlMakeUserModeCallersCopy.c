/*
 * XREFs of PiControlMakeUserModeCallersCopy @ 0x1406A7650
 * Callers:
 *     NtReplacePartitionUnit @ 0x1405C4400 (NtReplacePartitionUnit.c)
 *     PiCMCaptureRegistryInputData @ 0x1406A5C0C (PiCMCaptureRegistryInputData.c)
 *     PiCMCapturePropertyInputData @ 0x1406A6D54 (PiCMCapturePropertyInputData.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1406A73E0 (PiControlGetDeviceInterfaceEnabled.c)
 *     NtPlugPlayControl @ 0x1406A7520 (NtPlugPlayControl.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1406B14D4 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1406B2064 (PiCMCaptureObjectInputData.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1406B4744 (PiCMCaptureInterfaceListInputData.c)
 *     PiCMCaptureDeviceListInputData @ 0x1406D43FC (PiCMCaptureDeviceListInputData.c)
 *     PiControlGetDeviceDepth @ 0x1406E78C0 (PiControlGetDeviceDepth.c)
 *     PiControlGetRelatedDevice @ 0x14070FEB0 (PiControlGetRelatedDevice.c)
 *     PiControlGetSetDeviceStatus @ 0x1407103A0 (PiControlGetSetDeviceStatus.c)
 *     PiControlGetPropertyData @ 0x140710F30 (PiControlGetPropertyData.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x140717890 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x1408AA99C (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x1408AAD20 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiControlQueryAndRemoveDevice @ 0x1408AF2D0 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x1408AF430 (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x1408AF650 (PiControlQueryDeviceRelations.c)
 *     PiControlStartDevice @ 0x1408AF7A0 (PiControlStartDevice.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1402421D0 (ExAllocatePoolWithQuotaTag.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x1406A9600 (PiControlCopyUserModeCallersBuffer.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
