/*
 * XREFs of MmUnmapViewOfSection @ 0x140683160
 * Callers:
 *     PsDispatchIumService @ 0x1405812E4 (PsDispatchIumService.c)
 * Callees:
 *     MiUnmapViewOfSection @ 0x140685830 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall MmUnmapViewOfSection(ULONG_PTR a1)
{
  return MiUnmapViewOfSection(a1);
}
