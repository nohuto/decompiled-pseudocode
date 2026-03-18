/*
 * XREFs of ExRemoveLowBoxAtomReferences @ 0x140232EC0
 * Callers:
 *     SepDereferenceLowBoxNumberEntry @ 0x1406AB17C (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     RtlDestroyLowBoxAtoms @ 0x140232EF0 (RtlDestroyLowBoxAtoms.c)
 */

__int64 ExRemoveLowBoxAtomReferences()
{
  return RtlDestroyLowBoxAtoms();
}
