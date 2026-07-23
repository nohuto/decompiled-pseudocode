/*
 * XREFs of MmAllocateIndependentPages @ 0x140762BB0
 * Callers:
 *     KeAllocateInterrupt @ 0x14037726C (KeAllocateInterrupt.c)
 *     KeAllocateProcessorProfileStructures @ 0x1403B6640 (KeAllocateProcessorProfileStructures.c)
 *     HvlStartBootLogicalProcessors @ 0x1403B6AB8 (HvlStartBootLogicalProcessors.c)
 *     HvlpInitializeHvCrashdump @ 0x1404F931C (HvlpInitializeHvCrashdump.c)
 *     KiInitializePrcbContext @ 0x1409A03A0 (KiInitializePrcbContext.c)
 * Callees:
 *     MmAllocateIndependentPagesEx @ 0x140762BCC (MmAllocateIndependentPagesEx.c)
 */

__int64 __fastcall MmAllocateIndependentPages(__int64 a1, __int64 a2)
{
  return MmAllocateIndependentPagesEx(a1, a2, 0LL, 0LL);
}
