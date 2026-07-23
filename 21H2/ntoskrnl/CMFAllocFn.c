/*
 * XREFs of CMFAllocFn @ 0x140958420
 * Callers:
 *     XpressDecodeCreate @ 0x1405CA6C0 (XpressDecodeCreate.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CMFAllocFn(__int64 a1, int a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x636D6650u);
}
