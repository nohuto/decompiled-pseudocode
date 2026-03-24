/*
 * XREFs of CmpFindPathByName @ 0x14066FE28
 * Callers:
 *     CmpVEExecuteRealStoreParseLogic @ 0x14066FC00 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVirtualBranchIsReplicated @ 0x1406720EC (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x140870E50 (CmpVirtualPathPresent.c)
 * Callees:
 *     CmpFindPathByNameEx @ 0x1405CC874 (CmpFindPathByNameEx.c)
 */

char __fastcall CmpFindPathByName(__int64 a1, __m128i *a2, UNICODE_STRING *a3, unsigned int *a4, __int64 *a5)
{
  return CmpFindPathByNameEx(a1, a2, a3, 0, a4, a5);
}
