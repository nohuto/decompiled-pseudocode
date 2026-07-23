/*
 * XREFs of PiControlMakeUserModeCallersCopy @ 0x14062A4E0
 * Callers:
 *     NtReplacePartitionUnit @ 0x1405CA220 (NtReplacePartitionUnit.c)
 *     PiCMCaptureDeviceListInputData @ 0x140604EC4 (PiCMCaptureDeviceListInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x140609494 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMCaptureInterfaceListInputData @ 0x14060B65C (PiCMCaptureInterfaceListInputData.c)
 *     PiControlGetPropertyData @ 0x14060C640 (PiControlGetPropertyData.c)
 *     PiControlGetRelatedDevice @ 0x14060C8B0 (PiControlGetRelatedDevice.c)
 *     PiControlGetDeviceDepth @ 0x14061CB50 (PiControlGetDeviceDepth.c)
 *     PiCMCaptureRegistryInputData @ 0x140628CD8 (PiCMCaptureRegistryInputData.c)
 *     PiCMCapturePropertyInputData @ 0x140629BE4 (PiCMCapturePropertyInputData.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x14062A270 (PiControlGetDeviceInterfaceEnabled.c)
 *     NtPlugPlayControl @ 0x14062A3B0 (NtPlugPlayControl.c)
 *     PiCMCaptureObjectInputData @ 0x14062D984 (PiCMCaptureObjectInputData.c)
 *     PiControlGetSetDeviceStatus @ 0x14062E740 (PiControlGetSetDeviceStatus.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x14072B9B0 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x1408AEF1C (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x1408AF2A0 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiControlQueryAndRemoveDevice @ 0x1408B3850 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x1408B39B0 (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x1408B3BD0 (PiControlQueryDeviceRelations.c)
 *     PiControlStartDevice @ 0x1408B3D20 (PiControlStartDevice.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14035DD70 (ExAllocatePoolWithQuotaTag.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x14062C490 (PiControlCopyUserModeCallersBuffer.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
