/*
 * XREFs of CcDeallocateBcb @ 0x1402C3E30
 * Callers:
 *     CcUnpinFileDataEx @ 0x1402C3400 (CcUnpinFileDataEx.c)
 *     CcDeleteMbcb @ 0x1402C8B10 (CcDeleteMbcb.c)
 *     CcDeleteBcbs @ 0x14035F7D0 (CcDeleteBcbs.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x1402C3E70 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeallocateBcb(char *P)
{
  if ( *(_WORD *)P == 765 )
    ExDeleteResourceLite((PERESOURCE)(P + 72));
  ExFreePoolWithTag(P, 0);
}
