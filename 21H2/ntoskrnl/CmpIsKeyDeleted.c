/*
 * XREFs of CmpIsKeyDeleted @ 0x140667410
 * Callers:
 *     CmpVEExecuteOpenLogic @ 0x140649DB0 (CmpVEExecuteOpenLogic.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x14065F88C (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1406660E0 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpFindSubKeyByNumberEx @ 0x1406E2D00 (CmpFindSubKeyByNumberEx.c)
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 *     CmpSyncKcbCacheForHive @ 0x140870D30 (CmpSyncKcbCacheForHive.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     CmpStartKcbStack @ 0x140712760 (CmpStartKcbStack.c)
 *     CmpPopulateKcbStack @ 0x1407128D0 (CmpPopulateKcbStack.c)
 *     CmpIsKeyStackDeleted @ 0x140712920 (CmpIsKeyStackDeleted.c)
 */

char __fastcall CmpIsKeyDeleted(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  char IsKeyStackDeleted; // bl
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+30h] [rbp-18h]

  v3 = *(unsigned __int16 *)(a1 + 66);
  v7 = 0LL;
  WORD1(v7) = -1;
  *(_OWORD *)Privileges = 0LL;
  if ( (int)CmpStartKcbStack(&v7, v3) >= 0 )
    CmpPopulateKcbStack(&v7, a1);
  IsKeyStackDeleted = CmpIsKeyStackDeleted(&v7, a2);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  return IsKeyStackDeleted;
}
