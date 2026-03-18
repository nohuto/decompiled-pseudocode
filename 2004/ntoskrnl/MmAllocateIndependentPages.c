/*
 * XREFs of MmAllocateIndependentPages @ 0x14074F620
 * Callers:
 *     KeAllocateInterrupt @ 0x1403752FC (KeAllocateInterrupt.c)
 *     HvlStartBootLogicalProcessors @ 0x1403B0F84 (HvlStartBootLogicalProcessors.c)
 *     KeAllocateProcessorProfileStructures @ 0x1403B24E0 (KeAllocateProcessorProfileStructures.c)
 *     HvlpInitializeHvCrashdump @ 0x1404F3F8C (HvlpInitializeHvCrashdump.c)
 *     KiInitializePrcbContext @ 0x14099BA9C (KiInitializePrcbContext.c)
 * Callees:
 *     MmAllocateIndependentPagesEx @ 0x14074F63C (MmAllocateIndependentPagesEx.c)
 */

__int64 __fastcall MmAllocateIndependentPages(__int64 a1, __int64 a2)
{
  return MmAllocateIndependentPagesEx(a1, a2, 0LL, 0LL);
}
