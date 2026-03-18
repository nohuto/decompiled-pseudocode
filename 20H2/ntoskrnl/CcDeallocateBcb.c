/*
 * XREFs of CcDeallocateBcb @ 0x14029DA90
 * Callers:
 *     CcDeleteMbcb @ 0x1402482E0 (CcDeleteMbcb.c)
 *     CcUnpinFileDataEx @ 0x14029D060 (CcUnpinFileDataEx.c)
 *     CcDeleteBcbs @ 0x140330540 (CcDeleteBcbs.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x14029DAD0 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeallocateBcb(char *P)
{
  if ( *(_WORD *)P == 765 )
    ExDeleteResourceLite((PERESOURCE)(P + 72));
  ExFreePoolWithTag(P, 0);
}
