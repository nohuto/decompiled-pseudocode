/*
 * XREFs of MmMapViewInSystemSpace @ 0x1406DF780
 * Callers:
 *     LdrpMapResourceFile @ 0x14037FE8C (LdrpMapResourceFile.c)
 *     NtGetNlsSectionPtr @ 0x1406D1CC0 (NtGetNlsSectionPtr.c)
 *     KsepSdbMapToMemory @ 0x14074EBF4 (KsepSdbMapToMemory.c)
 *     ExInitializeLeapSecondData @ 0x14079EDEC (ExInitializeLeapSecondData.c)
 *     EtwpCoverageEnsureContext @ 0x1407C5DD8 (EtwpCoverageEnsureContext.c)
 *     CmFcpMapSection @ 0x1407CE1FC (CmFcpMapSection.c)
 *     PspApiSetCopyToSystemSpace @ 0x140908578 (PspApiSetCopyToSystemSpace.c)
 *     PspSiloInitializeUserSharedData @ 0x14090943C (PspSiloInitializeUserSharedData.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x140949814 (EtwpCoverageSamplerSetBloomFilter.c)
 *     SLUpdateLicenseDataInternal @ 0x140950AC0 (SLUpdateLicenseDataInternal.c)
 *     NtMapCMFModule @ 0x14095C2A0 (NtMapCMFModule.c)
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 *     MiInitializeApiSets @ 0x140A53048 (MiInitializeApiSets.c)
 * Callees:
 *     MiMapViewInSystemSpace @ 0x140657AF4 (MiMapViewInSystemSpace.c)
 */

NTSTATUS __stdcall MmMapViewInSystemSpace(PVOID Section, PVOID *MappedBase, PSIZE_T ViewSize)
{
  __int64 v4; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  return MiMapViewInSystemSpace((__int64)Section, (__int64)&unk_140C4CBE8, MappedBase, ViewSize, &v4, 0LL, 0LL);
}
