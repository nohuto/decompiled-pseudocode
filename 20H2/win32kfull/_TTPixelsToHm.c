/*
 * XREFs of _TTPixelsToHm @ 0x1C02600CC
 * Callers:
 *     ?DoesPointSnapToBorder@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C0214B38 (-DoesPointSnapToBorder@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?TTSqm@@YAXUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C0214E74 (-TTSqm@@YAXUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z.c)
 *     TouchTargetChildTree @ 0x1C0216EFC (TouchTargetChildTree.c)
 *     ?_TTAdjustContactSide@@YAXJPEAJ0J@Z @ 0x1C025EA88 (-_TTAdjustContactSide@@YAXJPEAJ0J@Z.c)
 *     ?_TTLimitDeepTargetingPoint@@YAXJJPEAJ@Z @ 0x1C025EE50 (-_TTLimitDeepTargetingPoint@@YAXJJPEAJ@Z.c)
 *     TouchTargetingBigTargetWindow @ 0x1C025F0BC (TouchTargetingBigTargetWindow.c)
 *     TouchTargetingRankForRect @ 0x1C025F79C (TouchTargetingRankForRect.c)
 * Callees:
 *     LongLongToLong @ 0x1C014D740 (LongLongToLong.c)
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
