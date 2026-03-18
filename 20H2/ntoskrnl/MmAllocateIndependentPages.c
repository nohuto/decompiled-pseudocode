/*
 * XREFs of MmAllocateIndependentPages @ 0x14075E200
 * Callers:
 *     KeAllocateInterrupt @ 0x14037728C (KeAllocateInterrupt.c)
 *     HvlStartBootLogicalProcessors @ 0x1403B38F0 (HvlStartBootLogicalProcessors.c)
 *     KeAllocateProcessorProfileStructures @ 0x1403B4E50 (KeAllocateProcessorProfileStructures.c)
 *     HvlpInitializeHvCrashdump @ 0x1404F77FC (HvlpInitializeHvCrashdump.c)
 *     KiInitializePrcbContext @ 0x1409A1B9C (KiInitializePrcbContext.c)
 * Callees:
 *     MmAllocateIndependentPagesEx @ 0x14075E21C (MmAllocateIndependentPagesEx.c)
 */

__int64 __fastcall MmAllocateIndependentPages(__int64 a1, __int64 a2)
{
  return MmAllocateIndependentPagesEx(a1, a2, 0LL, 0LL);
}
