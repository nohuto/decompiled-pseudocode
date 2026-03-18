/*
 * XREFs of ?OnInitializeSimulatedMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x1C03B70B4
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0208B34 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0011E60 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C002355C (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ??1?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x1C00275E0 (--1-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@DxgMon.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@@Z @ 0x1C006BA20 (-ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_.c)
 *     ?CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@AEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x1C020A668 (-CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV-$unique_ptr@UWmiMonitorDescri.c)
 */

__int64 __fastcall DxgMonitor::MonitorDescriptorState::OnInitializeSimulatedMonitor(
        DxgMonitor::MonitorDescriptorState *this)
{
  __int64 v2; // r9
  __int64 v3; // rax
  void **v4; // rbx
  __int64 *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64 *, _QWORD, _QWORD, __int64, void **, _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *); // rbp
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v9; // eax
  bool v10; // si
  unsigned int v11; // edi
  _QWORD *v12; // rax
  __int64 v13; // r9
  int v14; // edi
  __int64 v15; // r8
  __int64 v16; // r9
  void **v17; // rdi
  _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v19; // [rsp+80h] [rbp+8h] BYREF
  void **v20; // [rsp+88h] [rbp+10h] BYREF
  char v21; // [rsp+90h] [rbp+18h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 64LL))(*((_QWORD *)this + 14)) )
    WdLogSingleEntry0(1LL);
  if ( *((_QWORD *)this + 16) )
    WdLogSingleEntry0(1LL);
  v3 = operator new[](0x98uLL, 0x4D677844u, 256LL, v2);
  v4 = (void **)v3;
  if ( v3 )
  {
    memset((void *)(v3 + 24), 0, 0x80uLL);
    v5 = (__int64 *)DxgMonitor::EDIDCACHE::s_pEdidCache;
    *v4 = 0LL;
    v4[1] = 0LL;
    v4[2] = (void *)128;
    v6 = *((_QWORD *)this + 14);
    v19 = D3DKMDT_MCO_UNINITIALIZED;
    v7 = *v5;
    v20 = v4;
    v8 = *(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64, void **, _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *))(v7 + 24);
    v9 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 40LL))(v6);
    v10 = IsInternalVideoOutput(v9);
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 16LL))(*((_QWORD *)this + 14));
    v12 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 14) + 8LL))(
                      *((_QWORD *)this + 14),
                      &v21);
    LOBYTE(v13) = v10;
    v14 = v8(v5, *v12, v11, v13, v4 + 3, &v19);
    if ( v14 >= 0 )
    {
      if ( (int)EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)v4 + 24) >= 0 )
      {
        ConvertMonitorCapablitiesOrigin(v19, (enum __WMI_MONITOR_CAPABILITY_ORIGIN_TYPE *)(v4 + 1));
        *((_DWORD *)v4 + 3) = 1;
        v17 = (void **)*v4;
        *v4 = 0LL;
        if ( v17 )
        {
          wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v17);
          operator delete(v17);
        }
        DxgMonitor::EdidMonitorDescriptor::CreateFromDescriptors(&v20, (__int64 *)this + 16, v15, v16);
        v14 = 0;
        v4 = v20;
        *((_QWORD *)this + 20) = *((_QWORD *)this + 16);
      }
      else
      {
        WdLogSingleEntry0(2LL);
        v14 = -1073741275;
      }
    }
    else
    {
      WdLogSingleEntry1(7LL, this);
    }
  }
  else
  {
    v4 = 0LL;
    WdLogSingleEntry0(2LL);
    v14 = -1073741801;
  }
  if ( v4 )
  {
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v4);
    operator delete(v4);
  }
  return (unsigned int)v14;
}
