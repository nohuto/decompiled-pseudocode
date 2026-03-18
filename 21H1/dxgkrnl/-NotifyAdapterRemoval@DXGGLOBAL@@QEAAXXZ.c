/*
 * XREFs of ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C02659C4
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C0186430 (DpiPowerArbiterThread.c)
 *     DpiFdoHandleStopDevice @ 0x1C02C5CF0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStopAdapter @ 0x1C02C7554 (DpiFdoStopAdapter.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?SignalCrossAdapterSyncObjects@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0212CA0 (-SignalCrossAdapterSyncObjects@ADAPTER_RENDER@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::NotifyAdapterRemoval(DXGGLOBAL *this)
{
  ADAPTER_RENDER **v1; // rsi
  __int64 v2; // rdx
  ADAPTER_RENDER *v3; // rdi
  ADAPTER_RENDER **v4; // rbx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  __int64 v7; // rdx
  _BYTE v8[16]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v9[144]; // [rsp+30h] [rbp-A8h] BYREF

  v1 = (ADAPTER_RENDER **)((char *)this + 552);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (DXGGLOBAL *)((char *)this + 472), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v3 = *v1;
  while ( v3 != (ADAPTER_RENDER *)v1 && v3 )
  {
    v4 = (ADAPTER_RENDER **)v3;
    v3 = *(ADAPTER_RENDER **)v3;
    _m_prefetchw(v4 + 3);
    v5 = (signed __int64)v4[3];
    while ( v5 )
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 3, v5 + 1, v5);
      if ( v6 == v5 )
      {
        LOBYTE(v5) = 1;
        break;
      }
    }
    if ( (_BYTE)v5 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v9, (struct DXGADAPTER *const)v4, 0LL);
      DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v4);
      if ( v4[335] )
      {
        if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v9, 0LL) >= 0 )
          ADAPTER_RENDER::SignalCrossAdapterSyncObjects(v4[335], v7);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v9, v7);
    }
  }
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8, v2);
}
