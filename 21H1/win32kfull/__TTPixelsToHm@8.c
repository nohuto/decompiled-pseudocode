/*
 * XREFs of __TTPixelsToHm@8 @ 0x1B97F4
 * Callers:
 *     ?DoesPointSnapToBorder@@YGHPAUtagWND@@PAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x179BB8 (-DoesPointSnapToBorder@@YGHPAUtagWND@@PAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?TTSqm@@YGXUtagPOINT@@PBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x179E96 (-TTSqm@@YGXUtagPOINT@@PBUtagTOUCHTARGETINGCONTACT@@@Z.c)
 *     _TouchTargetChildTree@24 @ 0x17BA7D (_TouchTargetChildTree@24.c)
 *     ?_TTAdjustContactSide@@YGXJPAJ0J@Z @ 0x1B8521 (-_TTAdjustContactSide@@YGXJPAJ0J@Z.c)
 *     ?_TTLimitDeepTargetingPoint@@YGXJJPAJ@Z @ 0x1B8833 (-_TTLimitDeepTargetingPoint@@YGXJJPAJ@Z.c)
 *     _TouchTargetingBigTargetWindow@20 @ 0x1B8A48 (_TouchTargetingBigTargetWindow@20.c)
 *     _TouchTargetingRankForRect@48 @ 0x1B902D (_TouchTargetingRankForRect@48.c)
 * Callees:
 *     _LongLongToLong@12 @ 0xC28DA (_LongLongToLong@12.c)
 *     __alldiv @ 0xF91D3 (__alldiv.c)
 */

int __fastcall _TTPixelsToHm(int a1, int a2)
{
  int v2; // esi
  LONG *v4; // [esp+0h] [ebp-8h]

  v2 = 0x7FFFFFFF;
  if ( LongLongToLong(a2 * (__int64)a1 / 1000, v4) >= 0 )
    return 0;
  return v2;
}
