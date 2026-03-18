/*
 * XREFs of MmUnmapViewOfSection @ 0x1406FCC00
 * Callers:
 *     PsDispatchIumService @ 0x14057D8B4 (PsDispatchIumService.c)
 * Callees:
 *     MiUnmapViewOfSection @ 0x140600DD0 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall MmUnmapViewOfSection(_KPROCESS *a1, unsigned __int64 a2)
{
  return MiUnmapViewOfSection(a1, a2, 0, 0);
}
