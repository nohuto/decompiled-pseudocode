/*
 * XREFs of MmAllocateIndependentPages @ 0x140829AB0
 * Callers:
 *     KeAllocateInterrupt @ 0x1403AF228 (KeAllocateInterrupt.c)
 *     KeAllocateProcessorProfileStructures @ 0x1403D83A0 (KeAllocateProcessorProfileStructures.c)
 *     HvlStartBootLogicalProcessors @ 0x1403DEDD0 (HvlStartBootLogicalProcessors.c)
 *     HvlpInitializeHvCrashdump @ 0x14054B14C (HvlpInitializeHvCrashdump.c)
 *     KiInitializePrcbContext @ 0x140A59B28 (KiInitializePrcbContext.c)
 * Callees:
 *     MmAllocateIndependentPagesEx @ 0x140829CBC (MmAllocateIndependentPagesEx.c)
 */

__int64 __fastcall MmAllocateIndependentPages(__int64 a1, __int64 a2)
{
  return MmAllocateIndependentPagesEx(a1, a2, 0LL, 0LL);
}
