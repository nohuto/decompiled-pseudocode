/*
 * XREFs of MmMapViewInSystemSpace @ 0x1406E94F0
 * Callers:
 *     LdrpMapResourceFile @ 0x14037D69C (LdrpMapResourceFile.c)
 *     NtGetNlsSectionPtr @ 0x1406DC0D0 (NtGetNlsSectionPtr.c)
 *     KsepSdbMapToMemory @ 0x14073E494 (KsepSdbMapToMemory.c)
 *     EtwpCoverageEnsureContext @ 0x1407B43DC (EtwpCoverageEnsureContext.c)
 *     CmFcpMapSection @ 0x1407BC7FC (CmFcpMapSection.c)
 *     PspApiSetCopyToSystemSpace @ 0x140901B08 (PspApiSetCopyToSystemSpace.c)
 *     PspSiloInitializeUserSharedData @ 0x140902A0C (PspSiloInitializeUserSharedData.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x1409427E0 (EtwpCoverageSamplerSetBloomFilter.c)
 *     SLUpdateLicenseDataInternal @ 0x140949960 (SLUpdateLicenseDataInternal.c)
 *     NtMapCMFModule @ 0x140954E10 (NtMapCMFModule.c)
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 *     MiInitializeApiSets @ 0x140A4CCC8 (MiInitializeApiSets.c)
 *     ExInitializeLeapSecondData @ 0x140A535D4 (ExInitializeLeapSecondData.c)
 * Callees:
 *     MiMapViewInSystemSpace @ 0x1406401E4 (MiMapViewInSystemSpace.c)
 */

NTSTATUS __stdcall MmMapViewInSystemSpace(PVOID Section, PVOID *MappedBase, PSIZE_T ViewSize)
{
  unsigned __int64 v4; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  return MiMapViewInSystemSpace((__int64)Section, (__int64)qword_140C4CCA8, MappedBase, ViewSize, &v4, 0LL, 0LL);
}
