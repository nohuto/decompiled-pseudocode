/*
 * XREFs of ?SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z @ 0x1C03B8B10
 * Callers:
 *     MonitorSetDefaultAdvancedColorParams @ 0x1C03B11C4 (MonitorSetDefaultAdvancedColorParams.c)
 *     MonitorSetSDRWhiteLevel @ 0x1C03B1328 (MonitorSetSDRWhiteLevel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1C01BC350 (-TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 *     ?SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N0@Z @ 0x1C01E5394 (-SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N0@Z.c)
 *     ?SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1C020A04C (-SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 */

__int64 __fastcall DxgMonitor::MonitorColorState::SetSDRWhiteLevel(
        DxgMonitor::MonitorColorState *this,
        unsigned int a2)
{
  int v4; // eax
  __int64 v5; // rdi
  int v6; // eax
  DxgMonitor::MonitorColorState *v7; // rcx

  if ( *((_DWORD *)this + 98) == a2 )
    return 255LL;
  *((_DWORD *)this + 98) = a2;
  (*(void (__fastcall **)(_QWORD, __int64, const wchar_t *, _QWORD))(**((_QWORD **)this + 1) + 136LL))(
    *((_QWORD *)this + 1),
    4LL,
    L"SDRWhiteLevel",
    a2);
  v4 = DxgMonitor::MonitorColorState::SetLuminanceValuesWithBrightnessCompensation(this);
  v5 = v4;
  if ( v4 < 0 || (v6 = DxgMonitor::MonitorColorState::SendAdjustedHDRParamsToDriver(this, 1, 0), v5 = v6, v6 < 0) )
  {
    WdLogSingleEntry1(2LL, v5);
    return (unsigned int)v5;
  }
  else
  {
    DxgMonitor::MonitorColorState::TriggerMonitorColorimetryChangedWnf(v7);
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)this + 104LL))(*(_QWORD *)this, 4LL);
    return 0LL;
  }
}
