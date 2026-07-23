/*
 * XREFs of MmMapViewInSystemSpace @ 0x14061E6F0
 * Callers:
 *     LdrpMapResourceFile @ 0x14038021C (LdrpMapResourceFile.c)
 *     NtGetNlsSectionPtr @ 0x14060EE10 (NtGetNlsSectionPtr.c)
 *     KsepSdbMapToMemory @ 0x140755C14 (KsepSdbMapToMemory.c)
 *     ExInitializeLeapSecondData @ 0x1407A90AC (ExInitializeLeapSecondData.c)
 *     EtwpCoverageEnsureContext @ 0x1407CA35C (EtwpCoverageEnsureContext.c)
 *     CmFcpMapSection @ 0x1407D261C (CmFcpMapSection.c)
 *     PspApiSetCopyToSystemSpace @ 0x140905E88 (PspApiSetCopyToSystemSpace.c)
 *     PspSiloInitializeUserSharedData @ 0x140906D4C (PspSiloInitializeUserSharedData.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x1409471B4 (EtwpCoverageSamplerSetBloomFilter.c)
 *     SLUpdateLicenseDataInternal @ 0x14094E460 (SLUpdateLicenseDataInternal.c)
 *     NtMapCMFModule @ 0x140959CF0 (NtMapCMFModule.c)
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 *     MiInitializeApiSets @ 0x140A55650 (MiInitializeApiSets.c)
 * Callees:
 *     MiMapViewInSystemSpace @ 0x1406FFC5C (MiMapViewInSystemSpace.c)
 */

NTSTATUS __stdcall MmMapViewInSystemSpace(PVOID Section, PVOID *MappedBase, PSIZE_T ViewSize)
{
  __int64 v4; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  return MiMapViewInSystemSpace(
           (_DWORD)Section,
           (unsigned int)&unk_140C4CDA8,
           (_DWORD)MappedBase,
           (_DWORD)ViewSize,
           (__int64)&v4,
           0LL,
           0LL);
}
