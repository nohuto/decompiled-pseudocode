/*
 * XREFs of MmUnmapViewInSessionSpace @ 0x14070D950
 * Callers:
 *     <none>
 * Callees:
 *     MmUnmapViewInSystemSpace @ 0x140605CC0 (MmUnmapViewInSystemSpace.c)
 */

NTSTATUS __stdcall MmUnmapViewInSessionSpace(PVOID MappedBase)
{
  return MmUnmapViewInSystemSpace(MappedBase);
}
