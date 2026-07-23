/*
 * XREFs of CmpFileWrite @ 0x140618FF0
 * Callers:
 *     CmpSaveKeyByFileCopy @ 0x14087DA00 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     CmpDoFileWrite @ 0x1406A362C (CmpDoFileWrite.c)
 */

__int64 __fastcall CmpFileWrite(__int64 a1, unsigned int a2, int a3, int a4, char a5)
{
  __int64 v5; // rcx

  if ( BYTE1(NlsMbCodePageTag) )
    return 0LL;
  v5 = *(_QWORD *)(a1 + 8LL * a2 + 1536);
  if ( !v5 )
    return 0LL;
  else
    return CmpDoFileWrite(v5, a2, a3, a4, a5);
}
