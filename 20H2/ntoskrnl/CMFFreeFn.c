/*
 * XREFs of CMFFreeFn @ 0x14076FB60
 * Callers:
 *     XpressDecodeClose @ 0x1405C8C34 (XpressDecodeClose.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall CMFFreeFn(_RTL_AVL_TABLE *a1, PVOID a2)
{
  ExFreePoolWithTag(a2, 0);
}
