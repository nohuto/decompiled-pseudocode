/*
 * XREFs of MmUnmapViewInSystemSpace @ 0x14063AD00
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x14033A250 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14037C27C (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14037CD40 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpMapResourceFile @ 0x14037D69C (LdrpMapResourceFile.c)
 *     ExpDeleteSiloState @ 0x1405ACF6C (ExpDeleteSiloState.c)
 *     AlpcViewDestroyProcedure @ 0x140635B50 (AlpcViewDestroyProcedure.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14063D090 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MmUnmapViewInSessionSpace @ 0x1406E9B20 (MmUnmapViewInSessionSpace.c)
 *     KsepSdbMapToMemory @ 0x14073E494 (KsepSdbMapToMemory.c)
 *     KsepSdbUnmapFromMemory @ 0x14073EF08 (KsepSdbUnmapFromMemory.c)
 *     EtwpCoverageEnsureContext @ 0x1407B43DC (EtwpCoverageEnsureContext.c)
 *     CmFcpUnmapSection @ 0x1407BEBC8 (CmFcpUnmapSection.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140879860 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     CmFcpManagerCreateSectionFromBuffer @ 0x140879E64 (CmFcpManagerCreateSectionFromBuffer.c)
 *     PspDeleteServerSiloGlobals @ 0x1409020A4 (PspDeleteServerSiloGlobals.c)
 *     EtwpCoverageSamplerCleanup @ 0x140941984 (EtwpCoverageSamplerCleanup.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x1409427E0 (EtwpCoverageSamplerSetBloomFilter.c)
 *     SLUpdateLicenseDataInternal @ 0x140949960 (SLUpdateLicenseDataInternal.c)
 *     NtMapCMFModule @ 0x140954E10 (NtMapCMFModule.c)
 *     ExInitializeLeapSecondData @ 0x140A535D4 (ExInitializeLeapSecondData.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     MiRemoveFromSystemSpace @ 0x1402AA180 (MiRemoveFromSystemSpace.c)
 */

NTSTATUS __stdcall MmUnmapViewInSystemSpace(PVOID MappedBase)
{
  _QWORD *v2; // rcx
  _KPROCESS *Process; // rcx

  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)MappedBase) != 1 )
  {
    v2 = &unk_140C4CCA8;
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
