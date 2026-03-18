/*
 * XREFs of ?Stop@TimeInterval@DripsBlockerTrackingHelper@@QEAA_KXZ @ 0x1C02C2808
 * Callers:
 *     ?SetPDCIdleResiliencyEngaged@DXGGLOBAL@@QEAAXH@Z @ 0x1C02BE2E8 (-SetPDCIdleResiliencyEngaged@DXGGLOBAL@@QEAAXH@Z.c)
 *     ?EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z @ 0x1C02BF7FC (-EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z.c)
 * Callees:
 *     ?GetElapsed@TimeInterval@DripsBlockerTrackingHelper@@SA_K_K@Z @ 0x1C02C22A4 (-GetElapsed@TimeInterval@DripsBlockerTrackingHelper@@SA_K_K@Z.c)
 */

__int64 __fastcall DripsBlockerTrackingHelper::TimeInterval::Stop(DripsBlockerTrackingHelper::TimeInterval *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_BYTE *)this )
  {
    result = DripsBlockerTrackingHelper::TimeInterval::GetElapsed(*((_QWORD *)this + 1));
    *((_QWORD *)this + 2) += result;
    *(_BYTE *)this = 0;
  }
  return result;
}
