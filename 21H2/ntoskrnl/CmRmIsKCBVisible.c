/*
 * XREFs of CmRmIsKCBVisible @ 0x1406A7690
 * Callers:
 *     CmRmIsKcbStackVisible @ 0x140657A44 (CmRmIsKcbStackVisible.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x140721BF0 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     CmpFindSubKeyByNumberEx @ 0x1407C3070 (CmpFindSubKeyByNumberEx.c)
 * Callees:
 *     CmEqualTrans @ 0x140721FD0 (CmEqualTrans.c)
 */

char __fastcall CmRmIsKCBVisible(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  char result; // al

  v4 = *(_QWORD *)(a1 + 240);
  if ( !v4 )
    return 1;
  result = CmEqualTrans(a2, v4, a3);
  if ( result )
    return 1;
  return result;
}
