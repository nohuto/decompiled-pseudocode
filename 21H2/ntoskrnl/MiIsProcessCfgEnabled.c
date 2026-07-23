/*
 * XREFs of MiIsProcessCfgEnabled @ 0x14027C590
 * Callers:
 *     MiCommitVadCfgBits @ 0x14068592C (MiCommitVadCfgBits.c)
 *     MiMapViewOfImageSection @ 0x140686B20 (MiMapViewOfImageSection.c)
 *     MiCfgMarkValidEntries @ 0x1406BE004 (MiCfgMarkValidEntries.c)
 *     MiAllocateVirtualMemory @ 0x1406E7DB0 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1406E97C0 (MmProtectVirtualMemory.c)
 *     MiReserveUserMemory @ 0x1407018B0 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1407034E0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfPhysicalSection @ 0x1407C3128 (MiMapViewOfPhysicalSection.c)
 *     MmValidateUserCallTarget @ 0x1408D7FD8 (MmValidateUserCallTarget.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiIsProcessCfgEnabled()
{
  return *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 448) != 0LL;
}
