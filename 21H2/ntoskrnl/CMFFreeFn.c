/*
 * XREFs of CMFFreeFn @ 0x140773C30
 * Callers:
 *     XpressDecodeClose @ 0x1405CA694 (XpressDecodeClose.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall CMFFreeFn(_RTL_AVL_TABLE *a1, PVOID a2)
{
  ExFreePoolWithTag(a2, 0);
}
