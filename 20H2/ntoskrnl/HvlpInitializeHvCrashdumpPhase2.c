/*
 * XREFs of HvlpInitializeHvCrashdumpPhase2 @ 0x1404F7A00
 * Callers:
 *     HvlPhase2Initialize @ 0x1403CE6C8 (HvlPhase2Initialize.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403CBE58 (IoAddTriageDumpDataBlock.c)
 */

char HvlpInitializeHvCrashdumpPhase2()
{
  IoAddTriageDumpDataBlock((ULONG)&HvlpFlags, (PVOID)4);
  IoAddTriageDumpDataBlock((ULONG)&HvlpRootFlags, (PVOID)4);
  IoAddTriageDumpDataBlock((ULONG)&HvlpEnlightenments, (PVOID)4);
  return IoAddTriageDumpDataBlock((ULONG)&HvlpCrashdumpData, (PVOID)0xF0);
}
