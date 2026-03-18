/*
 * XREFs of HvlpInitializeHvCrashdumpPhase2 @ 0x1404F3B40
 * Callers:
 *     HvlPhase2Initialize @ 0x1403CACE8 (HvlPhase2Initialize.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403C8408 (IoAddTriageDumpDataBlock.c)
 */

char HvlpInitializeHvCrashdumpPhase2()
{
  IoAddTriageDumpDataBlock((ULONG)&HvlpFlags, (PVOID)4);
  IoAddTriageDumpDataBlock((ULONG)&HvlpRootFlags, (PVOID)4);
  IoAddTriageDumpDataBlock((ULONG)&HvlpEnlightenments, (PVOID)4);
  return IoAddTriageDumpDataBlock((ULONG)&HvlpCrashdumpData, (PVOID)0xF0);
}
