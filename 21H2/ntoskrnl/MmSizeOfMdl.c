/*
 * XREFs of MmSizeOfMdl @ 0x1402986E0
 * Callers:
 *     MmRotatePhysicalView @ 0x140682910 (MmRotatePhysicalView.c)
 *     ExLockUserBuffer @ 0x140683180 (ExLockUserBuffer.c)
 *     MiAllocatePerSessionProtos @ 0x1406BCA38 (MiAllocatePerSessionProtos.c)
 *     ExInitializeLeapSecondData @ 0x1407A8EAC (ExInitializeLeapSecondData.c)
 *     VslCreateSecureSection @ 0x14088F150 (VslCreateSecureSection.c)
 *     VslObtainHotPatchUndoTable @ 0x14088FFD8 (VslObtainHotPatchUndoTable.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408D12A0 (MiQueryMemoryPhysicalContiguity.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408D31C4 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408D3570 (MiLoadSectionIntoVsmEnclave.c)
 *     NtLoadEnclaveData @ 0x1408D4450 (NtLoadEnclaveData.c)
 *     PspCreateSecureThread @ 0x140909F9C (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x14092A038 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x14095ADD0 (NtStartProfile.c)
 *     PopMarkHiberPhase @ 0x1409B15C8 (PopMarkHiberPhase.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall MmSizeOfMdl(PVOID Base, SIZE_T Length)
{
  return 8 * ((((unsigned __int16)Base & 0xFFF) + Length + 4095) >> 12) + 48;
}
