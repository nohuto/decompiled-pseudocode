/*
 * XREFs of ?ShouldUpdateViewport@MagnifierExperienceHelper@@AEBA_NAEBUtagPOINT@@00@Z @ 0x1800BCA3C
 * Callers:
 *     ?GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN00@Z @ 0x1800BC2CC (-GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA-AUtagPOINT@@AEBU2@AEBN00@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18008CAC0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter@@@details@wi.c)
 *     ?GetStillZoneFromOffset@MagnifierExperienceHelper@@AEBA?AUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1800BC5E4 (-GetStillZoneFromOffset@MagnifierExperienceHelper@@AEBA-AUtagRECT@@AEBUtagPOINT@@0@Z.c)
 */

bool __fastcall MagnifierExperienceHelper::ShouldUpdateViewport(
        RECT *lprc,
        const struct tagPOINT *a2,
        const struct tagPOINT *a3,
        const struct tagPOINT *a4)
{
  LONG x; // eax
  struct tagRECT v10; // [rsp+20h] [rbp-18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3);
  MagnifierExperienceHelper::GetStillZoneFromOffset(lprc, &v10, a2, a3);
  x = a3->x;
  if ( a3->x < v10.left )
  {
    if ( a4->x > 0 )
      return 0;
  }
  else
  {
    if ( x > v10.right )
      goto LABEL_8;
    if ( a3->y >= v10.top && a3->y <= v10.bottom )
      return 0;
  }
  if ( x <= v10.right )
    return (a3->y >= v10.top || a4->y <= 0) && (a3->y <= v10.bottom || a4->y >= 0) && PtInRect(lprc, *a3);
LABEL_8:
  if ( a4->x < 0 )
    return 0;
  return (a3->y >= v10.top || a4->y <= 0) && (a3->y <= v10.bottom || a4->y >= 0) && PtInRect(lprc, *a3);
}
