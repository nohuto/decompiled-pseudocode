/*
 * XREFs of ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z @ 0x1C0157474
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C4C30 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C0205ED8 (MonitorCreatePhysicalMonitor.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C03B0AD0 (MonitorRemovePhysicalMonitor.c)
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x1C03B62E0 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B85D0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 */

__int64 __fastcall DmmPowerOnOffTargetsFromSourceIfNecessary(
        PERESOURCE *a1,
        __int64 a2,
        struct _DMM_SET_TIMING_RESULT *a3)
{
  PERESOURCE v5; // rax
  struct _LIST_ENTRY *Flink; // rdi
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9[35]; // [rsp+58h] [rbp-140h] BYREF

  if ( !a1 )
  {
    WdLogSingleEntry0(2LL);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
    WdLogSingleEntry0(1LL);
  v5 = a1[349];
  if ( !v5 )
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223191554LL;
  }
  Flink = v5[1].SystemResourcesList.Flink;
  if ( Flink )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v9, (__int64)v5[1].SystemResourcesList.Flink);
    memset(&v9[1], 0, 0x104uLL);
    v7 = VIDPN_MGR::SetTimingsFromVidPn(Flink, 0LL, 4LL);
    v8 = v7;
    if ( v7 < 0 )
      WdLogSingleEntry3(2LL, *((int *)a1 + 102), *((unsigned int *)a1 + 101), v7);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v9[0] + 40));
    return v8;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
