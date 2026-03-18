/*
 * XREFs of CcDeallocateBcb @ 0x140231000
 * Callers:
 *     CcUnpinFileDataEx @ 0x1402305D0 (CcUnpinFileDataEx.c)
 *     CcDeleteMbcb @ 0x140235CE0 (CcDeleteMbcb.c)
 *     CcDeleteBcbs @ 0x140321E20 (CcDeleteBcbs.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x140231040 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeallocateBcb(char *P)
{
  if ( *(_WORD *)P == 765 )
    ExDeleteResourceLite((PERESOURCE)(P + 72));
  ExFreePoolWithTag(P, 0);
}
