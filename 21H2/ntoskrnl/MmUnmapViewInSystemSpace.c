/*
 * XREFs of MmUnmapViewInSystemSpace @ 0x1406AC5B0
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x1402A94D4 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14037F45C (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14037FD70 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpMapResourceFile @ 0x1403806CC (LdrpMapResourceFile.c)
 *     ExpDeleteSiloState @ 0x1405B2BEC (ExpDeleteSiloState.c)
 *     AlpcViewDestroyProcedure @ 0x14061DE30 (AlpcViewDestroyProcedure.c)
 *     MmUnmapViewInSessionSpace @ 0x1406AC590 (MmUnmapViewInSessionSpace.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1406EA060 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     KsepSdbMapToMemory @ 0x140755A54 (KsepSdbMapToMemory.c)
 *     KsepSdbUnmapFromMemory @ 0x14075643C (KsepSdbUnmapFromMemory.c)
 *     ExInitializeLeapSecondData @ 0x1407A8EAC (ExInitializeLeapSecondData.c)
 *     EtwpCoverageEnsureContext @ 0x1407CA03C (EtwpCoverageEnsureContext.c)
 *     CmFcpUnmapSection @ 0x1407D4AE8 (CmFcpUnmapSection.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x14087E060 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     CmFcpManagerCreateSectionFromBuffer @ 0x14087E664 (CmFcpManagerCreateSectionFromBuffer.c)
 *     PspDeleteServerSiloGlobals @ 0x1409062AC (PspDeleteServerSiloGlobals.c)
 *     EtwpCoverageSamplerCleanup @ 0x140946194 (EtwpCoverageSamplerCleanup.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x140946FE4 (EtwpCoverageSamplerSetBloomFilter.c)
 *     SLUpdateLicenseDataInternal @ 0x14094E290 (SLUpdateLicenseDataInternal.c)
 *     NtMapCMFModule @ 0x140959B20 (NtMapCMFModule.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x140304E4C (MiRemoveFromSystemSpace.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 */

NTSTATUS __stdcall MmUnmapViewInSystemSpace(PVOID MappedBase)
{
  _QWORD *v2; // rcx
  _KPROCESS *Process; // rcx

  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)MappedBase) != 1 )
  {
    v2 = &unk_140C4CD68;
LABEL_3:
    MiRemoveFromSystemSpace(v2, (ULONG_PTR)MappedBase, 1);
    return 0;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
  {
    v2 = (_QWORD *)(Process[1].AffinityPadding[5] + 192);
    goto LABEL_3;
  }
  return -1073741799;
}
