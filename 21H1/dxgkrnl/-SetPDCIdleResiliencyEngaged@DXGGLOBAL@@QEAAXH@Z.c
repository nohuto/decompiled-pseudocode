/*
 * XREFs of ?SetPDCIdleResiliencyEngaged@DXGGLOBAL@@QEAAXH@Z @ 0x1C02BAD88
 * Callers:
 *     ?PDCIdleResiliencyEngagedCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z @ 0x1C02BAC00 (-PDCIdleResiliencyEngagedCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ @ 0x1C02BB044 (-AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ.c)
 *     ?ResetDAM@DripsBlockerTrackingHelper@@IEAAXXZ @ 0x1C02BF218 (-ResetDAM@DripsBlockerTrackingHelper@@IEAAXXZ.c)
 *     ?Start@TimeInterval@DripsBlockerTrackingHelper@@QEAAXXZ @ 0x1C02BF278 (-Start@TimeInterval@DripsBlockerTrackingHelper@@QEAAXXZ.c)
 *     ?Stop@TimeInterval@DripsBlockerTrackingHelper@@QEAA_KXZ @ 0x1C02BF2A8 (-Stop@TimeInterval@DripsBlockerTrackingHelper@@QEAA_KXZ.c)
 */

void __fastcall DXGGLOBAL::SetPDCIdleResiliencyEngaged(DXGGLOBAL *this, int a2)
{
  __int64 v4; // rdx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v5, (DXGGLOBAL *)((char *)this + 1864), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
  if ( a2 )
  {
    DripsBlockerTrackingHelper::TimeInterval::Start((DXGGLOBAL *)((char *)this + 304096));
  }
  else
  {
    DripsBlockerTrackingHelper::AddD0LagTimeToLastActiveEntry((DXGGLOBAL *)((char *)this + 2016));
    DripsBlockerTrackingHelper::TimeInterval::Stop((DXGGLOBAL *)((char *)this + 304096));
  }
  DripsBlockerTrackingHelper::ResetDAM((DXGGLOBAL *)((char *)this + 2016));
  if ( v5[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5, v4);
}
