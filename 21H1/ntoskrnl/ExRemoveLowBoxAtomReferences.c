/*
 * XREFs of ExRemoveLowBoxAtomReferences @ 0x140202FE8
 * Callers:
 *     SepDereferenceLowBoxNumberEntry @ 0x1405EE698 (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     RtlDestroyLowBoxAtoms @ 0x140203018 (RtlDestroyLowBoxAtoms.c)
 */

__int64 ExRemoveLowBoxAtomReferences()
{
  return RtlDestroyLowBoxAtoms();
}
