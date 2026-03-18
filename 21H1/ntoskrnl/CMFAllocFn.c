/*
 * XREFs of CMFAllocFn @ 0x140953540
 * Callers:
 *     XpressDecodeCreate @ 0x1405C48A0 (XpressDecodeCreate.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CMFAllocFn(__int64 a1, int a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x636D6650u);
}
