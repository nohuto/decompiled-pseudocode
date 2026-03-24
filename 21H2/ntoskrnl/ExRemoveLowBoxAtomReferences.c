/*
 * XREFs of ExRemoveLowBoxAtomReferences @ 0x1402BC5D4
 * Callers:
 *     SepDereferenceLowBoxNumberEntry @ 0x1406E7EBC (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     RtlDestroyLowBoxAtoms @ 0x1402BC604 (RtlDestroyLowBoxAtoms.c)
 */

__int64 ExRemoveLowBoxAtomReferences()
{
  return RtlDestroyLowBoxAtoms();
}
