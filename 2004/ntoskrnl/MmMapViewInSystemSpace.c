/*
 * XREFs of MmMapViewInSystemSpace @ 0x14070D350
 * Callers:
 *     LdrpMapResourceFile @ 0x14037E15C (LdrpMapResourceFile.c)
 *     NtGetNlsSectionPtr @ 0x1406FF070 (NtGetNlsSectionPtr.c)
 *     KsepSdbMapToMemory @ 0x140740014 (KsepSdbMapToMemory.c)
 *     ExInitializeLeapSecondData @ 0x14079254C (ExInitializeLeapSecondData.c)
 *     EtwpCoverageEnsureContext @ 0x1407B754C (EtwpCoverageEnsureContext.c)
 *     CmFcpMapSection @ 0x1407BF96C (CmFcpMapSection.c)
 *     PspApiSetCopyToSystemSpace @ 0x140902968 (PspApiSetCopyToSystemSpace.c)
 *     PspSiloInitializeUserSharedData @ 0x14090381C (PspSiloInitializeUserSharedData.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x140943A54 (EtwpCoverageSamplerSetBloomFilter.c)
 *     SLUpdateLicenseDataInternal @ 0x14094AD00 (SLUpdateLicenseDataInternal.c)
 *     NtMapCMFModule @ 0x1409564E0 (NtMapCMFModule.c)
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 *     MiInitializeApiSets @ 0x140A529C8 (MiInitializeApiSets.c)
 * Callees:
 *     MiMapViewInSystemSpace @ 0x14060B094 (MiMapViewInSystemSpace.c)
 */

NTSTATUS __stdcall MmMapViewInSystemSpace(PVOID Section, PVOID *MappedBase, PSIZE_T ViewSize)
{
  unsigned __int64 v4; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  return MiMapViewInSystemSpace((__int64)Section, (__int64)qword_140C4CB68, MappedBase, ViewSize, &v4, 0LL, 0LL);
}
