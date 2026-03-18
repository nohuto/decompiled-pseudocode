/*
 * XREFs of CmpIsKeyDeleted @ 0x14063FC08
 * Callers:
 *     CmpDoParseKey @ 0x1405EF1F0 (CmpDoParseKey.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x14063F6B8 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1406544E0 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpFindSubKeyByNumberEx @ 0x140671DE0 (CmpFindSubKeyByNumberEx.c)
 *     CmpVEExecuteOpenLogic @ 0x1406931B0 (CmpVEExecuteOpenLogic.c)
 *     CmpSyncKcbCacheForHive @ 0x14086D8B0 (CmpSyncKcbCacheForHive.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     CmpIsKeyStackDeleted @ 0x1405EEF40 (CmpIsKeyStackDeleted.c)
 *     CmpPopulateKcbStack @ 0x1405EF1A0 (CmpPopulateKcbStack.c)
 *     CmpStartKcbStack @ 0x1405F0A70 (CmpStartKcbStack.c)
 */

char __fastcall CmpIsKeyDeleted(__int64 a1, __int64 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  __int16 v5; // dx
  char IsKeyStackDeleted; // bl
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+30h] [rbp-18h]

  v5 = *(_WORD *)(a1 + 66);
  v9 = 0LL;
  WORD1(v9) = -1;
  *(_OWORD *)Privileges = 0LL;
  if ( (int)CmpStartKcbStack((__int64)&v9, v5, a3, a4) >= 0 )
    CmpPopulateKcbStack((__int64)&v9, a1);
  IsKeyStackDeleted = CmpIsKeyStackDeleted((__int64)&v9, a2);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  return IsKeyStackDeleted;
}
