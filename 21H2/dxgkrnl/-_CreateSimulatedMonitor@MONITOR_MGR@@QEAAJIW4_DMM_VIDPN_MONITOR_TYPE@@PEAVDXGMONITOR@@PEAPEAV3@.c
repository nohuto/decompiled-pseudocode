/*
 * XREFs of ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03B3618
 * Callers:
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03B3D18 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0011E60 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ??0?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z @ 0x1C00135F8 (--0-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z.c)
 *     ?IsAnalogueVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0027054 (-IsAnalogueVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??_GDXGMONITOR@@UEAAPEAXI@Z @ 0x1C002FA60 (--_GDXGMONITOR@@UEAAPEAXI@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C01B4890 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEAE@Z @ 0x1C01E2680 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ??0DXGMONITOR@@QEAA@PEAVMONITOR_MGR@@@Z @ 0x1C0207BF4 (--0DXGMONITOR@@QEAA@PEAVMONITOR_MGR@@@Z.c)
 *     ?CreateMonitorDriverInterface@DxgMonitor@@YA?AV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@PEAUHDXGMONITOR__@@PEAVADAPTER_DISPLAY@@IPEAU_DEVICE_OBJECT@@@Z @ 0x1C0207EE4 (-CreateMonitorDriverInterface@DxgMonitor@@YA-AV-$unique_ptr@VIMonitorDriverInterface@DxgMonitor@.c)
 *     ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x1C0207F60 (-_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV-$unique_ptr@VIMonitorDriverInterface@DxgMoni.c)
 *     ??1MonitorEventDeferral@@UEAA@XZ @ 0x1C0208A3C (--1MonitorEventDeferral@@UEAA@XZ.c)
 *     ?FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0208AB8 (-FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0208B34 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@.c)
 */

__int64 __fastcall MONITOR_MGR::_CreateSimulatedMonitor(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        struct DXGMONITOR *a4,
        struct DxgMonitor::IMonitorComponentParent **a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  __int64 v8; // r12
  __int64 v9; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v10; // ebx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v11; // ecx
  char *v12; // rax
  DXGMONITOR *v13; // rax
  struct DxgMonitor::IMonitorComponentParent *v14; // r14
  DXGMONITOR *v15; // rdi
  void (__fastcall ***v16)(_QWORD, __int64); // rbx
  __int64 v17; // rsi
  int v18; // eax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v19; // rbx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v21; // [rsp+20h] [rbp-99h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v22[2]; // [rsp+40h] [rbp-79h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v23; // [rsp+48h] [rbp-71h]
  struct DXGMONITOR *v24; // [rsp+50h] [rbp-69h]
  __int64 v25; // [rsp+58h] [rbp-61h] BYREF
  _QWORD v26[2]; // [rsp+60h] [rbp-59h] BYREF
  __int128 v27; // [rsp+70h] [rbp-49h]
  __int128 v28; // [rsp+80h] [rbp-39h]
  __int128 v29; // [rsp+90h] [rbp-29h]
  int v30; // [rsp+A0h] [rbp-19h]

  v24 = a4;
  v8 = a2;
  v23 = a6;
  if ( !a5 )
    WdLogSingleEntry0(1LL);
  if ( (_DWORD)v8 == -1 )
    WdLogSingleEntry0(1LL);
  if ( a3 == 1 )
  {
    WdLogSingleEntry0(1LL);
    *a5 = 0LL;
  }
  else
  {
    *a5 = 0LL;
    if ( a3 == 5 )
    {
      v9 = *(_QWORD *)(a1 + 24);
      v22[0] = D3DKMDT_VOT_UNINITIALIZED;
      if ( (int)DmmGetVideoOutputTechnology(*(_QWORD **)(v9 + 16), v8, v22, 0LL) < 0 )
        WdLogSingleEntry0(1LL);
      v10 = v22[0];
      if ( v22[0] == D3DKMDT_VOT_UNINITIALIZED )
        WdLogSingleEntry0(1LL);
      if ( !IsAnalogueVideoOutput(v10)
        && *(_BYTE *)(a1 + 19)
        && (!IsInternalVideoOutput(v11) || *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 2692LL) >= 1200) )
      {
        MONITOR_MGR::_EnableDisableMonitor(a1, 0xFFFFFFFFLL, 0LL, 8, 1uLL);
      }
    }
  }
  v12 = (char *)operator new[](0x380uLL, 0x4D677844u, 64LL, (__int64)a4);
  if ( v12 && (v13 = DXGMONITOR::DXGMONITOR(v12, (struct MONITOR_MGR *)a1), v14 = v13, (v15 = v13) != 0LL) )
  {
    DxgMonitor::CreateMonitorDriverInterface((__int64 *)v22, (__int64)v13, *(_QWORD *)(a1 + 24), (unsigned int)v8, 0LL);
    v16 = *(void (__fastcall ****)(_QWORD, __int64))v22;
    if ( *(_QWORD *)v22 )
    {
      LOBYTE(v21) = 0;
      v18 = DXGMONITOR::_InitializeMonitorNoDriver(v14, (__int64 *)v22, v8, 0LL, v21, 0, a3, 0LL);
      LODWORD(v17) = v18;
      if ( v18 >= 0 )
      {
        v30 = 0;
        v26[0] = &MonitorEventDeferral::`vftable';
        v26[1] = a1 + 8;
        v27 = 0LL;
        v28 = 0LL;
        v29 = 0LL;
        RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v25, (__int64)v14, 1);
        v19 = v23;
        v17 = (int)DXGMONITOR::_InitializeMonitorWithDriver(
                     v14,
                     v24,
                     (struct DxgMonitor::IMonitorDeferredEventSource *)v26,
                     v23);
        if ( v25 )
        {
          ExReleaseResourceLite((PERESOURCE)(v25 + 24));
          KeLeaveCriticalRegion();
        }
        MonitorEventDeferral::FlushEventsWithContext((MonitorEventDeferral *)v26, v19);
        if ( (int)v17 >= 0 )
        {
          v15 = 0LL;
          *a5 = v14;
        }
        else
        {
          WdLogSingleEntry2(2LL, v8, v17);
        }
        MonitorEventDeferral::~MonitorEventDeferral((MonitorEventDeferral *)v26);
      }
      else
      {
        WdLogSingleEntry2(2LL, v8, v18);
      }
      v16 = *(void (__fastcall ****)(_QWORD, __int64))v22;
    }
    else
    {
      WdLogSingleEntry0(6LL);
      LODWORD(v17) = -1073741801;
    }
    if ( v16 )
      (**v16)(v16, 1LL);
    if ( v15 )
      DXGMONITOR::`scalar deleting destructor'(v15, 1);
  }
  else
  {
    WdLogSingleEntry0(6LL);
    LODWORD(v17) = -1073741801;
  }
  return (unsigned int)v17;
}
