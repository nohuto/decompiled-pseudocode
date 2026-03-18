/*
 * XREFs of ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C01E47F0
 * Callers:
 *     DpiPdoDispatchInternalIoctl @ 0x1C01E4480 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1C01BC350 (-TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 *     ?SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N0@Z @ 0x1C01E5394 (-SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N0@Z.c)
 *     ?OnInternalIoctl@MonitorDescriptorState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C01EF448 (-OnInternalIoctl@MonitorDescriptorState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     ?SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1C020A04C (-SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_DispatchInternalIOCtrl(
        DxgMonitor::MonitorDescriptorState **this,
        __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        unsigned int a5,
        void *a6,
        unsigned __int64 *a7)
{
  __int64 v8; // rbx
  unsigned int v11; // edi
  __int64 v12; // rax
  DxgMonitor::MonitorColorState *v14; // rbx
  DxgMonitor::MonitorColorState *v15; // rcx

  v8 = (unsigned int)a2;
  v11 = -1073741637;
  v12 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v12 + 24) = v8;
  *(_QWORD *)(v12 + 32) = this;
  if ( (unsigned int)v8 > 0x23241F )
  {
    if ( (_DWORD)v8 == 2303011 || (_DWORD)v8 == 2303015 || (_DWORD)v8 == 2303019 )
      return (unsigned int)DxgMonitor::MonitorDescriptorState::OnInternalIoctl(this[27], v8, a3, a4, a5, a6, a7);
    if ( (_DWORD)v8 == 2303187 )
    {
      if ( a3 >= 0x20 )
      {
        if ( *a4 != 3 )
          WdLogSingleEntry0(1LL);
        v14 = this[28];
        *((_DWORD *)v14 + 97) = a4[1] / 0x3E8u;
        v11 = 0;
        if ( (int)DxgMonitor::MonitorColorState::SetLuminanceValuesWithBrightnessCompensation(v14) >= 0
          && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)v14 + 88LL))(*(_QWORD *)v14) == 12 )
        {
          DxgMonitor::MonitorColorState::SendAdjustedHDRParamsToDriver(v14, 1, 0);
          DxgMonitor::MonitorColorState::TriggerMonitorColorimetryChangedWnf(v15);
        }
      }
      else
      {
        return (unsigned int)-1073741789;
      }
    }
  }
  else if ( (_DWORD)v8 == 2303007
         || (_DWORD)v8 == 2302979
         || (_DWORD)v8 == 2302991
         || (_DWORD)v8 == 2302995
         || (_DWORD)v8 == 2302999
         || (_DWORD)v8 == 2303003 )
  {
    return (unsigned int)DxgMonitor::MonitorDescriptorState::OnInternalIoctl(this[27], v8, a3, a4, a5, a6, a7);
  }
  return v11;
}
