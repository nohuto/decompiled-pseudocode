/*
 * XREFs of MiIsProcessCfgEnabled @ 0x14025B020
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1405F8650 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1405FA060 (MmProtectVirtualMemory.c)
 *     MiCommitVadCfgBits @ 0x14061BCBC (MiCommitVadCfgBits.c)
 *     MiMapViewOfImageSection @ 0x14061CEB0 (MiMapViewOfImageSection.c)
 *     MiReserveUserMemory @ 0x1406EA4D0 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1406EC100 (MiMapViewOfDataSection.c)
 *     MiCfgMarkValidEntries @ 0x14070F9B4 (MiCfgMarkValidEntries.c)
 *     MiMapViewOfPhysicalSection @ 0x1407C2C08 (MiMapViewOfPhysicalSection.c)
 *     MmValidateUserCallTarget @ 0x1408D7E78 (MmValidateUserCallTarget.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiIsProcessCfgEnabled()
{
  return *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 448) != 0LL;
}
