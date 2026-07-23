/*
 * XREFs of CmpFindPathByName @ 0x140666308
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x1406647D4 (CmpVirtualBranchIsReplicated.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1406660E0 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVirtualPathPresent @ 0x140870FB0 (CmpVirtualPathPresent.c)
 * Callees:
 *     CmpFindPathByNameEx @ 0x1405CC874 (CmpFindPathByNameEx.c)
 */

char __fastcall CmpFindPathByName(__int64 a1, __m128i *a2, UNICODE_STRING *a3, unsigned int *a4, _QWORD *a5)
{
  return CmpFindPathByNameEx(a1, a2, a3, 0, a4, a5);
}
