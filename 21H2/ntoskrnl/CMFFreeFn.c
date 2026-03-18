/*
 * XREFs of CMFFreeFn @ 0x1406EB7B0
 * Callers:
 *     XpressDecodeClose @ 0x140654B84 (XpressDecodeClose.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall CMFFreeFn(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0);
}
