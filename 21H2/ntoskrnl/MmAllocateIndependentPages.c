/*
 * XREFs of MmAllocateIndependentPages @ 0x1407629F0
 * Callers:
 *     KeAllocateInterrupt @ 0x14037771C (KeAllocateInterrupt.c)
 *     KeAllocateProcessorProfileStructures @ 0x1403B64D0 (KeAllocateProcessorProfileStructures.c)
 *     HvlStartBootLogicalProcessors @ 0x1403B6948 (HvlStartBootLogicalProcessors.c)
 *     HvlpInitializeHvCrashdump @ 0x1404F939C (HvlpInitializeHvCrashdump.c)
 *     KiInitializePrcbContext @ 0x14099F470 (KiInitializePrcbContext.c)
 * Callees:
 *     MmAllocateIndependentPagesEx @ 0x140762A0C (MmAllocateIndependentPagesEx.c)
 */

__int64 __fastcall MmAllocateIndependentPages(__int64 a1, __int64 a2)
{
  return MmAllocateIndependentPagesEx(a1, a2, 0LL, 0LL);
}
