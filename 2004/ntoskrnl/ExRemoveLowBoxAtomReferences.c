/*
 * XREFs of ExRemoveLowBoxAtomReferences @ 0x140349654
 * Callers:
 *     SepDereferenceLowBoxNumberEntry @ 0x140697B98 (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     RtlDestroyLowBoxAtoms @ 0x140349684 (RtlDestroyLowBoxAtoms.c)
 */

__int64 ExRemoveLowBoxAtomReferences()
{
  return RtlDestroyLowBoxAtoms();
}
