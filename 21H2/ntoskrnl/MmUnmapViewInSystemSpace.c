/*
 * XREFs of MmUnmapViewInSystemSpace @ 0x14060ACA0
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x140227614 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14037EFAC (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14037F8C0 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpMapResourceFile @ 0x14038021C (LdrpMapResourceFile.c)
 *     ExpDeleteSiloState @ 0x1405B2E1C (ExpDeleteSiloState.c)
 *     MmUnmapViewInSessionSpace @ 0x14060AC80 (MmUnmapViewInSessionSpace.c)
 *     AlpcViewDestroyProcedure @ 0x140687AA0 (AlpcViewDestroyProcedure.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140701440 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     KsepSdbMapToMemory @ 0x140755C14 (KsepSdbMapToMemory.c)
 *     KsepSdbUnmapFromMemory @ 0x1407565FC (KsepSdbUnmapFromMemory.c)
 *     ExInitializeLeapSecondData @ 0x1407A90AC (ExInitializeLeapSecondData.c)
 *     EtwpCoverageEnsureContext @ 0x1407CA35C (EtwpCoverageEnsureContext.c)
 *     CmFcpUnmapSection @ 0x1407D4C58 (CmFcpUnmapSection.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x14087E1C0 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     CmFcpManagerCreateSectionFromBuffer @ 0x14087E7C4 (CmFcpManagerCreateSectionFromBuffer.c)
 *     PspDeleteServerSiloGlobals @ 0x14090640C (PspDeleteServerSiloGlobals.c)
 *     EtwpCoverageSamplerCleanup @ 0x140946364 (EtwpCoverageSamplerCleanup.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x1409471B4 (EtwpCoverageSamplerSetBloomFilter.c)
 *     SLUpdateLicenseDataInternal @ 0x14094E460 (SLUpdateLicenseDataInternal.c)
 *     NtMapCMFModule @ 0x140959CF0 (NtMapCMFModule.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x14030FB9C (MiRemoveFromSystemSpace.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 */

NTSTATUS __stdcall MmUnmapViewInSystemSpace(PVOID MappedBase)
{
  _QWORD *v2; // rcx
  _KPROCESS *Process; // rcx

  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)MappedBase) != 1 )
  {
    v2 = &unk_140C4CDA8;
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
