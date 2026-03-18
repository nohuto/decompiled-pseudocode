/*
 * XREFs of CmpIsKeyDeleted @ 0x140700E04
 * Callers:
 *     CmpVEExecuteOpenLogic @ 0x14060BF80 (CmpVEExecuteOpenLogic.c)
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 *     CmpFindSubKeyByNumberEx @ 0x140676250 (CmpFindSubKeyByNumberEx.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1406FF870 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1407032A4 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpSyncKcbCacheForHive @ 0x1408733A0 (CmpSyncKcbCacheForHive.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140267C30 (CmSiFreeMemory.c)
 *     CmpStartKcbStack @ 0x14061B490 (CmpStartKcbStack.c)
 *     CmpPopulateKcbStack @ 0x14061B600 (CmpPopulateKcbStack.c)
 *     CmpIsKeyStackDeleted @ 0x14061B650 (CmpIsKeyStackDeleted.c)
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
