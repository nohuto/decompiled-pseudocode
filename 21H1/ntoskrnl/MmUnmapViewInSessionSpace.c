/*
 * XREFs of MmUnmapViewInSessionSpace @ 0x1406E9B20
 * Callers:
 *     <none>
 * Callees:
 *     MmUnmapViewInSystemSpace @ 0x14063AD00 (MmUnmapViewInSystemSpace.c)
 */

NTSTATUS __stdcall MmUnmapViewInSessionSpace(PVOID MappedBase)
{
  return MmUnmapViewInSystemSpace(MappedBase);
}
