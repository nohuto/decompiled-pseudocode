/*
 * XREFs of CmpIsKeyDeleted @ 0x140670F30
 * Callers:
 *     CmpFindSubKeyByNumberEx @ 0x1405F35A0 (CmpFindSubKeyByNumberEx.c)
 *     CmpVEExecuteOpenLogic @ 0x140654F90 (CmpVEExecuteOpenLogic.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x14066AA6C (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x14066FC00 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpDoParseKey @ 0x1406F9170 (CmpDoParseKey.c)
 *     CmpSyncKcbCacheForHive @ 0x140870BD0 (CmpSyncKcbCacheForHive.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     CmpStartKcbStack @ 0x1406FB380 (CmpStartKcbStack.c)
 *     CmpPopulateKcbStack @ 0x1406FB4F0 (CmpPopulateKcbStack.c)
 *     CmpIsKeyStackDeleted @ 0x1406FB540 (CmpIsKeyStackDeleted.c)
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
