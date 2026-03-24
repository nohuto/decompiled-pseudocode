/*
 * XREFs of CcDeallocateBcb @ 0x1402F5060
 * Callers:
 *     CcDeleteBcbs @ 0x1402D2640 (CcDeleteBcbs.c)
 *     CcDeleteMbcb @ 0x1402F293C (CcDeleteMbcb.c)
 *     CcUnpinFileDataEx @ 0x1402F4630 (CcUnpinFileDataEx.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x1402F50A0 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeallocateBcb(char *P)
{
  if ( *(_WORD *)P == 765 )
    ExDeleteResourceLite((PERESOURCE)(P + 72));
  ExFreePoolWithTag(P, 0);
}
