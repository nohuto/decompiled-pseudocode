/*
 * XREFs of ?SetDFxEngaged@DXGGLOBAL@@QEAAXH@Z @ 0x1C02E3670
 * Callers:
 *     ?PowerRuntimeDeviceDirectedPowerCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C004410C (-PowerRuntimeDeviceDirectedPowerCallback@DXGADAPTER@@QEAAXE@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z @ 0x1C02FBD34 (-EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z.c)
 */

void __fastcall DXGGLOBAL::SetDFxEngaged(DXGGLOBAL *this, int a2)
{
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v4, (DXGGLOBAL *)((char *)this + 2160), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  DripsBlockerTrackingHelper::EngageDFx((DXGGLOBAL *)((char *)this + 2328), a2 != 0);
  if ( v4[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v4);
}
