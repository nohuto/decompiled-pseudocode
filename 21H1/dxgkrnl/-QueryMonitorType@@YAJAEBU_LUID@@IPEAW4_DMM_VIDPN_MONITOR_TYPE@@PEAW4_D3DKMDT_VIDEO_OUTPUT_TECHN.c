/*
 * XREFs of ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE333@Z @ 0x1C0292DD0
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C029187C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0116E44 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C0159200 (DxgkQueryMonitorTypeLockHeld.c)
 */

__int64 __fastcall QueryMonitorType(
        const struct _LUID *a1,
        __int64 a2,
        enum _DMM_VIDPN_MONITOR_TYPE *a3,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7,
        bool *a8,
        bool *a9)
{
  unsigned int v11; // esi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v14; // rax
  DXGADAPTER *v15; // rdi
  int MonitorTypeLockHeld; // ebx
  __int64 v18; // rdx
  unsigned __int64 v19; // [rsp+60h] [rbp-F8h] BYREF
  _BYTE v20[144]; // [rsp+70h] [rbp-E8h] BYREF

  v11 = a2;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  v14 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v19);
  v15 = v14;
  if ( !v14 )
    return 3221225485LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v20, v14, 0LL);
  MonitorTypeLockHeld = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v20, 0LL);
  DXGADAPTER::ReleaseReferenceNoTracking(v15);
  if ( MonitorTypeLockHeld >= 0 )
    MonitorTypeLockHeld = DxgkQueryMonitorTypeLockHeld((__int64)v15, v11, a3, a4, a5, a6, (char *)a7, a8, a9);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v20, v18);
  return (unsigned int)MonitorTypeLockHeld;
}
