/*
 * XREFs of MmSizeOfMdl @ 0x1402FB560
 * Callers:
 *     ExLockUserBuffer @ 0x1406BD108 (ExLockUserBuffer.c)
 *     MmRotatePhysicalView @ 0x1406BD3F0 (MmRotatePhysicalView.c)
 *     MiAllocatePerSessionProtos @ 0x1406E69C8 (MiAllocatePerSessionProtos.c)
 *     VslCreateSecureSection @ 0x14088AD40 (VslCreateSecureSection.c)
 *     VslObtainHotPatchUndoTable @ 0x14088BB98 (VslObtainHotPatchUndoTable.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408CC950 (MiQueryMemoryPhysicalContiguity.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408CE874 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408CEC20 (MiLoadSectionIntoVsmEnclave.c)
 *     NtLoadEnclaveData @ 0x1408CFB00 (NtLoadEnclaveData.c)
 *     PspCreateSecureThread @ 0x1409058EC (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x140925790 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x1409560C0 (NtStartProfile.c)
 *     PopMarkHiberPhase @ 0x1409AD8F8 (PopMarkHiberPhase.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall MmSizeOfMdl(PVOID Base, SIZE_T Length)
{
  return 8 * ((((unsigned __int16)Base & 0xFFF) + Length + 4095) >> 12) + 48;
}
