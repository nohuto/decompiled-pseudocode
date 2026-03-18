/*
 * XREFs of MmSizeOfMdl @ 0x14025F2E0
 * Callers:
 *     ExLockUserBuffer @ 0x14065C658 (ExLockUserBuffer.c)
 *     MmRotatePhysicalView @ 0x14065CA40 (MmRotatePhysicalView.c)
 *     MiAllocatePerSessionProtos @ 0x1406DCC38 (MiAllocatePerSessionProtos.c)
 *     ExInitializeLeapSecondData @ 0x14079EDEC (ExInitializeLeapSecondData.c)
 *     VslCreateSecureSection @ 0x140891BB0 (VslCreateSecureSection.c)
 *     VslObtainHotPatchUndoTable @ 0x140892A08 (VslObtainHotPatchUndoTable.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408D3AE0 (MiQueryMemoryPhysicalContiguity.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408D5A04 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408D5DB0 (MiLoadSectionIntoVsmEnclave.c)
 *     NtLoadEnclaveData @ 0x1408D6C90 (NtLoadEnclaveData.c)
 *     PspCreateSecureThread @ 0x14090C7EC (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x14092C868 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x14095D550 (NtStartProfile.c)
 *     PopMarkHiberPhase @ 0x1409B46C8 (PopMarkHiberPhase.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall MmSizeOfMdl(PVOID Base, SIZE_T Length)
{
  return 8 * ((((unsigned __int16)Base & 0xFFF) + Length + 4095) >> 12) + 48;
}
