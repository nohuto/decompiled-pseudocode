/*
 * XREFs of CMFFreeFn @ 0x140761550
 * Callers:
 *     XpressDecodeClose @ 0x1405C4FA4 (XpressDecodeClose.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall CMFFreeFn(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0);
}
