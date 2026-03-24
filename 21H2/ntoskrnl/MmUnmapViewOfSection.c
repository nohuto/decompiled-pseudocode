/*
 * XREFs of MmUnmapViewOfSection @ 0x1406AE460
 * Callers:
 *     PsDispatchIumService @ 0x140582CF4 (PsDispatchIumService.c)
 * Callees:
 *     MiUnmapViewOfSection @ 0x14061E0F0 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall MmUnmapViewOfSection(_KPROCESS *a1, unsigned __int64 a2)
{
  return MiUnmapViewOfSection(a1, a2, 0, 0LL);
}
