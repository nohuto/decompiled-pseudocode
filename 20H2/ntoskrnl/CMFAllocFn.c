/*
 * XREFs of CMFAllocFn @ 0x14095A9D0
 * Callers:
 *     XpressDecodeCreate @ 0x1405C8C60 (XpressDecodeCreate.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CMFAllocFn(__int64 a1, int a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x636D6650u);
}
