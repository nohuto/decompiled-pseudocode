/*
 * XREFs of _TTPixelsToHm @ 0x1C02616EC
 * Callers:
 *     ?DoesPointSnapToBorder@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C02159B8 (-DoesPointSnapToBorder@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?TTSqm@@YAXUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C0215CF4 (-TTSqm@@YAXUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z.c)
 *     TouchTargetChildTree @ 0x1C0217D8C (TouchTargetChildTree.c)
 *     ?_TTAdjustContactSide@@YAXJPEAJ0J@Z @ 0x1C02600A8 (-_TTAdjustContactSide@@YAXJPEAJ0J@Z.c)
 *     ?_TTLimitDeepTargetingPoint@@YAXJJPEAJ@Z @ 0x1C0260470 (-_TTLimitDeepTargetingPoint@@YAXJJPEAJ@Z.c)
 *     TouchTargetingBigTargetWindow @ 0x1C02606DC (TouchTargetingBigTargetWindow.c)
 *     TouchTargetingRankForRect @ 0x1C0260DBC (TouchTargetingRankForRect.c)
 * Callees:
 *     LongLongToLong @ 0x1C014AF30 (LongLongToLong.c)
 */

__int64 __fastcall TTPixelsToHm(int a1, int a2)
{
  __int64 v2; // rcx
  unsigned int v3; // r9d
  LONG plResult; // [rsp+30h] [rbp+8h] BYREF

  plResult = 0;
  v2 = (unsigned __int128)(a2 * (__int64)a1 * (__int128)0x20C49BA5E353F7CFLL) >> 64;
  if ( LongLongToLong(((unsigned __int64)v2 >> 63) + (v2 >> 7), &plResult) >= 0 )
    return (unsigned int)plResult;
  return v3;
}
