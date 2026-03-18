/*
 * XREFs of ?SetDFxEngaged@DXGGLOBAL@@QEAAXH@Z @ 0x1C02BAD24
 * Callers:
 *     ?PowerRuntimeDeviceDirectedPowerCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C003699C (-PowerRuntimeDeviceDirectedPowerCallback@DXGADAPTER@@QEAAXE@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z @ 0x1C02BC29C (-EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z.c)
 */

void __fastcall DXGGLOBAL::SetDFxEngaged(DXGGLOBAL *this, int a2)
{
  __int64 v4; // rdx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v5, (DXGGLOBAL *)((char *)this + 1864), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
  DripsBlockerTrackingHelper::EngageDFx((DXGGLOBAL *)((char *)this + 2016), a2 != 0);
  if ( v5[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5, v4);
}
