/*
 * XREFs of MmSizeOfMdl @ 0x140338590
 * Callers:
 *     ExLockUserBuffer @ 0x1406DE498 (ExLockUserBuffer.c)
 *     MmRotatePhysicalView @ 0x1406DE780 (MmRotatePhysicalView.c)
 *     MiAllocatePerSessionProtos @ 0x14070A848 (MiAllocatePerSessionProtos.c)
 *     ExInitializeLeapSecondData @ 0x14079254C (ExInitializeLeapSecondData.c)
 *     VslCreateSecureSection @ 0x14088C060 (VslCreateSecureSection.c)
 *     VslObtainHotPatchUndoTable @ 0x14088CEB8 (VslObtainHotPatchUndoTable.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408CDCA0 (MiQueryMemoryPhysicalContiguity.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408CFBC4 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408CFF70 (MiLoadSectionIntoVsmEnclave.c)
 *     NtLoadEnclaveData @ 0x1408D0E50 (NtLoadEnclaveData.c)
 *     PspCreateSecureThread @ 0x140906BCC (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x140926A40 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x140957790 (NtStartProfile.c)
 *     PopMarkHiberPhase @ 0x1409AE758 (PopMarkHiberPhase.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall MmSizeOfMdl(PVOID Base, SIZE_T Length)
{
  return 8 * ((((unsigned __int16)Base & 0xFFF) + Length + 4095) >> 12) + 48;
}
