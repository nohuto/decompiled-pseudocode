/*
 * XREFs of CmRmIsKCBVisible @ 0x1406A11E0
 * Callers:
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 *     CmpFindSubKeyByNumberEx @ 0x140676250 (CmpFindSubKeyByNumberEx.c)
 * Callees:
 *     CmEqualTrans @ 0x1406A1CCC (CmEqualTrans.c)
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
