/*
 * XREFs of ?OnInitialized@MonitorColorState@DxgMonitor@@QEAAXXZ @ 0x1C0208F48
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0208B34 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgMonitor::MonitorColorState::OnInitialized(DxgMonitor::MonitorColorState *this)
{
  char v2; // al
  _QWORD *v3; // rcx
  char v4; // al
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx

  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *))(**((_QWORD **)this + 1) + 56LL))(
         *((_QWORD *)this + 1),
         2LL,
         L"AdvancedColorEnabled");
  v3 = *(_QWORD **)this;
  *((_BYTE *)this + 384) = v2;
  v4 = (*(__int64 (__fastcall **)(_QWORD *))(*v3 + 56LL))(v3);
  v5 = *((_QWORD *)this + 1);
  *((_DWORD *)this + 98) = v4 != 0 ? 1000 : 3000;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t *))(*(_QWORD *)v5 + 40LL))(v5, 2LL, L"SDRWhiteLevel");
  v7 = *((_QWORD *)this + 1);
  *((_DWORD *)this + 98) = v6;
  *((_BYTE *)this + 385) = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t *))(*(_QWORD *)v7 + 56LL))(
                             v7,
                             2LL,
                             L"AutoColorManagementSupported");
}
