/*
 * XREFs of CMFFreeFn @ 0x14075F150
 * Callers:
 *     XpressDecodeClose @ 0x1405C4874 (XpressDecodeClose.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall CMFFreeFn(_RTL_AVL_TABLE *a1, PVOID a2)
{
  ExFreePoolWithTag(a2, 0);
}
