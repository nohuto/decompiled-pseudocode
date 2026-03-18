/*
 * XREFs of MmUnmapViewOfSection @ 0x1406D9510
 * Callers:
 *     PsDispatchIumService @ 0x14057D274 (PsDispatchIumService.c)
 * Callees:
 *     MiUnmapViewOfSection @ 0x140635E10 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall MmUnmapViewOfSection(_KPROCESS *a1, unsigned __int64 a2)
{
  return MiUnmapViewOfSection(a1, a2, 0, 0LL);
}
