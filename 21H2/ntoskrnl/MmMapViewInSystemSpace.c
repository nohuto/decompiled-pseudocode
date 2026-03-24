/*
 * XREFs of MmMapViewInSystemSpace @ 0x1406BF880
 * Callers:
 *     LdrpMapResourceFile @ 0x1403806CC (LdrpMapResourceFile.c)
 *     NtGetNlsSectionPtr @ 0x1406B9930 (NtGetNlsSectionPtr.c)
 *     KsepSdbMapToMemory @ 0x140755A54 (KsepSdbMapToMemory.c)
 *     ExInitializeLeapSecondData @ 0x1407A8EAC (ExInitializeLeapSecondData.c)
 *     EtwpCoverageEnsureContext @ 0x1407CA03C (EtwpCoverageEnsureContext.c)
 *     CmFcpMapSection @ 0x1407D24AC (CmFcpMapSection.c)
 *     PspApiSetCopyToSystemSpace @ 0x140905D28 (PspApiSetCopyToSystemSpace.c)
 *     PspSiloInitializeUserSharedData @ 0x140906BEC (PspSiloInitializeUserSharedData.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x140946FE4 (EtwpCoverageSamplerSetBloomFilter.c)
 *     SLUpdateLicenseDataInternal @ 0x14094E290 (SLUpdateLicenseDataInternal.c)
 *     NtMapCMFModule @ 0x140959B20 (NtMapCMFModule.c)
 *     Phase1InitializationDiscard @ 0x140A3B6A4 (Phase1InitializationDiscard.c)
 *     MiInitializeApiSets @ 0x140A54650 (MiInitializeApiSets.c)
 * Callees:
 *     MiMapViewInSystemSpace @ 0x1406E887C (MiMapViewInSystemSpace.c)
 */

NTSTATUS __stdcall MmMapViewInSystemSpace(PVOID Section, PVOID *MappedBase, PSIZE_T ViewSize)
{
  __int64 v4; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  return MiMapViewInSystemSpace(
           (_DWORD)Section,
           (unsigned int)&unk_140C4CD68,
           (_DWORD)MappedBase,
           (_DWORD)ViewSize,
           (__int64)&v4,
           0LL,
           0LL);
}
