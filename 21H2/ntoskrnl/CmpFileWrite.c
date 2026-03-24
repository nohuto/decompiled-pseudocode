/*
 * XREFs of CmpFileWrite @ 0x1406720B0
 * Callers:
 *     CmpSaveKeyByFileCopy @ 0x14087D8A0 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     CmpDoFileWrite @ 0x1406715BC (CmpDoFileWrite.c)
 */

__int64 __fastcall CmpFileWrite(__int64 a1, __int64 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4, char a5)
{
  void *v5; // rcx

  if ( BYTE1(NlsMbCodePageTag) )
    return 0LL;
  v5 = *(void **)(a1 + 8LL * (unsigned int)a2 + 1536);
  if ( !v5 )
    return 0LL;
  else
    return CmpDoFileWrite(v5, a2, a3, a4, a5);
}
