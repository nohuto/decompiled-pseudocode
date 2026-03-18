/*
 * XREFs of MmAllocateIndependentPages @ 0x14074B200
 * Callers:
 *     KeAllocateInterrupt @ 0x1403744EC (KeAllocateInterrupt.c)
 *     HvlStartBootLogicalProcessors @ 0x1403AB304 (HvlStartBootLogicalProcessors.c)
 *     KeAllocateProcessorProfileStructures @ 0x1403AC860 (KeAllocateProcessorProfileStructures.c)
 *     HvlpInitializeHvCrashdump @ 0x1404F393C (HvlpInitializeHvCrashdump.c)
 *     KiInitializePrcbContext @ 0x14099A300 (KiInitializePrcbContext.c)
 * Callees:
 *     MmAllocateIndependentPagesEx @ 0x14074B21C (MmAllocateIndependentPagesEx.c)
 */

__int64 __fastcall MmAllocateIndependentPages(__int64 a1, __int64 a2)
{
  return MmAllocateIndependentPagesEx(a1, a2, 0LL, 0LL);
}
