/*
 * XREFs of CMFFreeFn @ 0x140773A70
 * Callers:
 *     XpressDecodeClose @ 0x1405CA464 (XpressDecodeClose.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall CMFFreeFn(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0);
}
