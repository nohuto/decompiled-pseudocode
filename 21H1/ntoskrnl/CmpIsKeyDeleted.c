/*
 * XREFs of CmpIsKeyDeleted @ 0x14069178C
 * Callers:
 *     CmpVEExecuteOpenLogic @ 0x1405E9C70 (CmpVEExecuteOpenLogic.c)
 *     CmpFindSubKeyByNumberEx @ 0x1405F9D00 (CmpFindSubKeyByNumberEx.c)
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x140658E40 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x140691804 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpSyncKcbCacheForHive @ 0x14086C560 (CmpSyncKcbCacheForHive.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     CmpIsKeyStackDeleted @ 0x140624560 (CmpIsKeyStackDeleted.c)
 *     CmpPopulateKcbStack @ 0x1406247C0 (CmpPopulateKcbStack.c)
 *     CmpStartKcbStack @ 0x140626090 (CmpStartKcbStack.c)
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
