/*
 * XREFs of ?SetAutoColorManagementSupported@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x1C020997C
 * Callers:
 *     ?OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0209834 (-OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 *     MonitorSetAutoColorManagementSupported @ 0x1C03B1114 (MonitorSetAutoColorManagementSupported.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1C0209C5C (-EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 */

__int64 __fastcall DxgMonitor::MonitorColorState::SetAutoColorManagementSupported(
        DxgMonitor::MonitorColorState *this,
        char a2)
{
  char v2; // r9

  v2 = a2;
  if ( a2 && DxgMonitor::MonitorColorState::EdidSupportsHDR(this) )
  {
    WdLogSingleEntry0(2LL);
    return 3221225659LL;
  }
  else if ( *((_BYTE *)this + 385) == v2 )
  {
    return 255LL;
  }
  else
  {
    *((_BYTE *)this + 385) = v2;
    (*(void (__fastcall **)(_QWORD, __int64, const wchar_t *))(**((_QWORD **)this + 1) + 152LL))(
      *((_QWORD *)this + 1),
      4LL,
      L"AutoColorManagementSupported");
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)this + 104LL))(*(_QWORD *)this, 5LL);
    return 0LL;
  }
}
