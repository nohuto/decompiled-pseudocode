/*
 * XREFs of CmRmIsKCBVisible @ 0x140623260
 * Callers:
 *     CmpFindSubKeyByNumberEx @ 0x1405F9D00 (CmpFindSubKeyByNumberEx.c)
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 * Callees:
 *     CmEqualTrans @ 0x14068E7AC (CmEqualTrans.c)
 */

char __fastcall CmRmIsKCBVisible(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  char result; // al

  v3 = *(_QWORD *)(a1 + 240);
  if ( !v3 )
    return 1;
  result = CmEqualTrans(a2, v3);
  if ( result )
    return 1;
  return result;
}
