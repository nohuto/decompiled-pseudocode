/*
 * XREFs of MmSizeOfMdl @ 0x140219160
 * Callers:
 *     ExLockUserBuffer @ 0x1405E45FC (ExLockUserBuffer.c)
 *     MmRotatePhysicalView @ 0x1405E48E0 (MmRotatePhysicalView.c)
 *     MiAllocatePerSessionProtos @ 0x14061BC08 (MiAllocatePerSessionProtos.c)
 *     ExInitializeLeapSecondData @ 0x1407A90AC (ExInitializeLeapSecondData.c)
 *     VslCreateSecureSection @ 0x14088F2B0 (VslCreateSecureSection.c)
 *     VslObtainHotPatchUndoTable @ 0x140890138 (VslObtainHotPatchUndoTable.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408D1400 (MiQueryMemoryPhysicalContiguity.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408D3324 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408D36D0 (MiLoadSectionIntoVsmEnclave.c)
 *     NtLoadEnclaveData @ 0x1408D45B0 (NtLoadEnclaveData.c)
 *     PspCreateSecureThread @ 0x14090A0FC (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x14092A198 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x14095AFA0 (NtStartProfile.c)
 *     PopMarkHiberPhase @ 0x1409B24F8 (PopMarkHiberPhase.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall MmSizeOfMdl(PVOID Base, SIZE_T Length)
{
  return 8 * ((((unsigned __int16)Base & 0xFFF) + Length + 4095) >> 12) + 48;
}
