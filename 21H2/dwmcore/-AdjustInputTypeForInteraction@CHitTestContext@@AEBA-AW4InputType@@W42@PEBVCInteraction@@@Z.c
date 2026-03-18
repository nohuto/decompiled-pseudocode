/*
 * XREFs of ?AdjustInputTypeForInteraction@CHitTestContext@@AEBA?AW4InputType@@W42@PEBVCInteraction@@@Z @ 0x18002B7BC
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x18002AE94 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004B660 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?InteractionMatchesHitTest@CHitTestContext@@AEBA_NW4InputType@@PEBVCInteraction@@@Z @ 0x18002B764 (-InteractionMatchesHitTest@CHitTestContext@@AEBA_NW4InputType@@PEBVCInteraction@@@Z.c)
 */

__int64 __fastcall CHitTestContext::AdjustInputTypeForInteraction(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx

  v3 = a2;
  if ( a2 == 6 && !CHitTestContext::InteractionMatchesHitTest(a1, 6LL, a3) )
    return 5;
  return v3;
}
