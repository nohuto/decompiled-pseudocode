/*
 * XREFs of CMFAllocFn @ 0x140A03F90
 * Callers:
 *     XpressDecodeCreate @ 0x140654BB0 (XpressDecodeCreate.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CMFAllocFn(__int64 a1, int a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x636D6650u);
}
