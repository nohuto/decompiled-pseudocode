/*
 * XREFs of MmUnmapViewInSystemSpace @ 0x140605CC0
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x1403625A4 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14037CEEC (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14037D800 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpMapResourceFile @ 0x14037E15C (LdrpMapResourceFile.c)
 *     ExpDeleteSiloState @ 0x1405AD68C (ExpDeleteSiloState.c)
 *     AlpcViewDestroyProcedure @ 0x140600B10 (AlpcViewDestroyProcedure.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140607F40 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MmUnmapViewInSessionSpace @ 0x14070D950 (MmUnmapViewInSessionSpace.c)
 *     KsepSdbMapToMemory @ 0x140740014 (KsepSdbMapToMemory.c)
 *     KsepSdbUnmapFromMemory @ 0x140740A88 (KsepSdbUnmapFromMemory.c)
 *     ExInitializeLeapSecondData @ 0x14079254C (ExInitializeLeapSecondData.c)
 *     EtwpCoverageEnsureContext @ 0x1407B754C (EtwpCoverageEnsureContext.c)
 *     CmFcpUnmapSection @ 0x1407C1EB8 (CmFcpUnmapSection.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x14087AB50 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     CmFcpManagerCreateSectionFromBuffer @ 0x14087B154 (CmFcpManagerCreateSectionFromBuffer.c)
 *     PspDeleteServerSiloGlobals @ 0x140902EEC (PspDeleteServerSiloGlobals.c)
 *     EtwpCoverageSamplerCleanup @ 0x140942C04 (EtwpCoverageSamplerCleanup.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x140943A54 (EtwpCoverageSamplerSetBloomFilter.c)
 *     SLUpdateLicenseDataInternal @ 0x14094AD00 (SLUpdateLicenseDataInternal.c)
 *     NtMapCMFModule @ 0x1409564E0 (NtMapCMFModule.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     MiRemoveFromSystemSpace @ 0x140251150 (MiRemoveFromSystemSpace.c)
 */

NTSTATUS __stdcall MmUnmapViewInSystemSpace(PVOID MappedBase)
{
  _QWORD *v2; // rcx
  _KPROCESS *Process; // rcx

  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)MappedBase) != 1 )
  {
    v2 = &unk_140C4CB68;
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
