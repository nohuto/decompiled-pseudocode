/*
 * XREFs of ?SetAdvancedColorEnabled@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x1C02098FC
 * Callers:
 *     ?OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0209834 (-OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 *     MonitorEnableDisableAdvancedColor @ 0x1C03B03A8 (MonitorEnableDisableAdvancedColor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     DxgkIsConsoleSessionDispBrokerEnabled @ 0x1C01E0760 (DxgkIsConsoleSessionDispBrokerEnabled.c)
 */

__int64 __fastcall DxgMonitor::MonitorColorState::SetAdvancedColorEnabled(DxgMonitor::MonitorColorState *this, char a2)
{
  __int64 v4; // r9
  __int64 v5; // rcx
  bool v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0;
  DxgkIsConsoleSessionDispBrokerEnabled(&v7);
  if ( v7 )
  {
    WdLogSingleEntry1(2LL, -1073741637LL);
    return 3221225659LL;
  }
  else
  {
    v5 = *((_QWORD *)this + 1);
    *((_BYTE *)this + 384) = a2;
    LOBYTE(v4) = a2;
    (*(void (__fastcall **)(__int64, __int64, const wchar_t *, __int64))(*(_QWORD *)v5 + 152LL))(
      v5,
      4LL,
      L"AdvancedColorEnabled",
      v4);
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)this + 104LL))(*(_QWORD *)this, 3LL);
    return 0LL;
  }
}
