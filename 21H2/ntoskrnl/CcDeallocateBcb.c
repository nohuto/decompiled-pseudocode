/*
 * XREFs of CcDeallocateBcb @ 0x14028A78C
 * Callers:
 *     CcDeleteMbcb @ 0x14023F250 (CcDeleteMbcb.c)
 *     CcUnpinFileDataEx @ 0x14028A370 (CcUnpinFileDataEx.c)
 *     CcDeleteBcbs @ 0x140388FC8 (CcDeleteBcbs.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x14028A7C0 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeallocateBcb(char *P)
{
  if ( *(_WORD *)P == 765 )
    ExDeleteResourceLite((PERESOURCE)(P + 72));
  ExFreePoolWithTag(P, 0);
}
