/*
 * XREFs of MmUnmapViewInSystemSpace @ 0x140658CE0
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x1402FD0B0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14037EC1C (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14037F530 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpMapResourceFile @ 0x14037FE8C (LdrpMapResourceFile.c)
 *     ExpDeleteSiloState @ 0x1405B11EC (ExpDeleteSiloState.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14062A440 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     AlpcViewDestroyProcedure @ 0x140685570 (AlpcViewDestroyProcedure.c)
 *     MmUnmapViewInSessionSpace @ 0x1406DFD80 (MmUnmapViewInSessionSpace.c)
 *     KsepSdbMapToMemory @ 0x14074EBF4 (KsepSdbMapToMemory.c)
 *     KsepSdbUnmapFromMemory @ 0x14074F668 (KsepSdbUnmapFromMemory.c)
 *     ExInitializeLeapSecondData @ 0x14079EDEC (ExInitializeLeapSecondData.c)
 *     EtwpCoverageEnsureContext @ 0x1407C5DD8 (EtwpCoverageEnsureContext.c)
 *     CmFcpUnmapSection @ 0x1407D06B8 (CmFcpUnmapSection.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x1408806C0 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     CmFcpManagerCreateSectionFromBuffer @ 0x140880CC4 (CmFcpManagerCreateSectionFromBuffer.c)
 *     PspDeleteServerSiloGlobals @ 0x140908AFC (PspDeleteServerSiloGlobals.c)
 *     EtwpCoverageSamplerCleanup @ 0x1409489C4 (EtwpCoverageSamplerCleanup.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x140949814 (EtwpCoverageSamplerSetBloomFilter.c)
 *     SLUpdateLicenseDataInternal @ 0x140950AC0 (SLUpdateLicenseDataInternal.c)
 *     NtMapCMFModule @ 0x14095C2A0 (NtMapCMFModule.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     MiRemoveFromSystemSpace @ 0x14024EF4C (MiRemoveFromSystemSpace.c)
 */

NTSTATUS __stdcall MmUnmapViewInSystemSpace(PVOID MappedBase)
{
  _QWORD *v2; // rcx
  _KPROCESS *Process; // rcx

  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)MappedBase) != 1 )
  {
    v2 = &unk_140C4CBE8;
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
