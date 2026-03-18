/*
 * XREFs of ExRemoveLowBoxAtomReferences @ 0x1402E12B0
 * Callers:
 *     SepDereferenceLowBoxNumberEntry @ 0x14068D15C (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     RtlDestroyLowBoxAtoms @ 0x1402E12E0 (RtlDestroyLowBoxAtoms.c)
 */

__int64 ExRemoveLowBoxAtomReferences()
{
  return RtlDestroyLowBoxAtoms();
}
