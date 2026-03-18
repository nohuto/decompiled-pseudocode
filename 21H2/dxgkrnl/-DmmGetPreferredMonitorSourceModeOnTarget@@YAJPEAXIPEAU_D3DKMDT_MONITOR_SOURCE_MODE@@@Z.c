/*
 * XREFs of ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01D6EB0
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C01875D0 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C01D4AE8 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C02F50F4 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C01D730C (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C01D73F8 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     MonitorGetPreferredMonitorSourceMode @ 0x1C01D7AD4 (MonitorGetPreferredMonitorSourceMode.c)
 */

__int64 __fastcall DmmGetPreferredMonitorSourceModeOnTarget(
        DXGADAPTER *a1,
        unsigned int a2,
        struct _D3DKMDT_MONITOR_SOURCE_MODE *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  VIDPN_MGR *v7; // rsi
  int ConnectedMonitorHandle; // eax
  unsigned int PreferredMonitorSourceMode; // ebx
  struct HDXGMONITOR__ *v10; // rdi
  struct HDXGMONITOR__ *v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) || (v6 = *((_QWORD *)a1 + 349)) == 0 )
  {
    WdLogSingleEntry0(1LL);
    v6 = *((_QWORD *)a1 + 349);
  }
  v7 = *(VIDPN_MGR **)(v6 + 104);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v13, (__int64)v7);
  v12 = 0LL;
  ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle(v7, v4, &v12);
  PreferredMonitorSourceMode = ConnectedMonitorHandle;
  if ( ConnectedMonitorHandle < 0 )
  {
    WdLogSingleEntry2(2LL, v4, ConnectedMonitorHandle);
  }
  else
  {
    v10 = v12;
    if ( !v12 )
      WdLogSingleEntry0(1LL);
    PreferredMonitorSourceMode = MonitorGetPreferredMonitorSourceMode(v10, a3);
    VIDPN_MGR::ReleaseMonitorHandle(v7, v10);
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v13 + 40));
  return PreferredMonitorSourceMode;
}
