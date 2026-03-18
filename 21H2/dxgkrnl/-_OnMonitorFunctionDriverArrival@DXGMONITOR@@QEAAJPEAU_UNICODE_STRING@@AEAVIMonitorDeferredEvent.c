/*
 * XREFs of ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020B3F4
 * Callers:
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C020D1A0 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C001C71C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     DxgkStatusChangeNotify @ 0x1C01C26A0 (DxgkStatusChangeNotify.c)
 *     ??$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NW4MonitorDataStoreBehavior@1@PEBGAEAK@Z @ 0x1C01DBEE4 (--$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NW4MonitorDataStoreBehavior@1@PEBGAEAK@Z.c)
 *     ?OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1C02095AC (-OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 *     ?OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0209834 (-OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 *     DxgkIncreaseMonitorUniqueness @ 0x1C020B578 (DxgkIncreaseMonitorUniqueness.c)
 *     ?OnUsageUpdated@DXGMONITOR@@QEAAXAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1C020B690 (-OnUsageUpdated@DXGMONITOR@@QEAAXAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 *     ?TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020BB20 (-TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU.c)
 *     ?RegisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJPEBU_UNICODE_STRING@@P6AJPEAX1@Z@Z @ 0x1C020C65C (-RegisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJPEBU_UNICODE_STRING@@P6AJP.c)
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C020C9A8 (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 *     ?RetrieveMonitorFrequencyRangeFromRegistry@MonitorModes@DxgMonitor@@QEAAJXZ @ 0x1C020CC8C (-RetrieveMonitorFrequencyRangeFromRegistry@MonitorModes@DxgMonitor@@QEAAJXZ.c)
 *     ?OnDeviceNodeReady@MonitorDescriptorState@DxgMonitor@@QEAAXAEA_N@Z @ 0x1C0216270 (-OnDeviceNodeReady@MonitorDescriptorState@DxgMonitor@@QEAAXAEA_N@Z.c)
 *     ?_EvaluateUsageState@MonitorUsageState@DxgMonitor@@AEAA_NPEBUIMonitorDescriptor@2@@Z @ 0x1C0217330 (-_EvaluateUsageState@MonitorUsageState@DxgMonitor@@AEAA_NPEBUIMonitorDescriptor@2@@Z.c)
 *     ??$WriteData@K@MonitorDataStore@DxgMonitor@@AEAAXPEAXPEBGK@Z @ 0x1C021B234 (--$WriteData@K@MonitorDataStore@DxgMonitor@@AEAAXPEAXPEBGK@Z.c)
 */

__int64 __fastcall DXGMONITOR::_OnMonitorFunctionDriverArrival(
        DXGMONITOR *this,
        PCUNICODE_STRING SourceString,
        struct DxgMonitor::IMonitorDeferredEventSource *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  DxgMonitor::MonitorDescriptorState *v8; // rcx
  int (*v9)(void *, void *); // r8
  unsigned int v10; // edx
  unsigned int v11; // edi
  __int64 v12; // rcx
  bool v13; // al
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v17; // rax
  __int64 *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int128 v21; // [rsp+30h] [rbp-10h] BYREF
  void *v22; // [rsp+60h] [rbp+20h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, SourceString) + 24) = this;
  if ( (*((_BYTE *)this + 176) & 1) == 0 )
    WdLogSingleEntry0(1LL);
  if ( !*((_QWORD *)this + 25) )
    WdLogSingleEntry0(1LL);
  if ( *((_DWORD *)this + 78) != 1 )
    WdLogSingleEntry0(1LL);
  v8 = (DxgMonitor::MonitorDescriptorState *)*((_QWORD *)this + 27);
  LOBYTE(v22) = 0;
  DxgMonitor::MonitorDescriptorState::OnDeviceNodeReady(v8, (bool *)&v22);
  if ( (_BYTE)v22 )
    DXGMONITOR::OnDescriptorUpdated((DxgMonitor::MonitorColorState **)this, a3);
  DxgMonitor::MonitorModes::RetrieveMonitorFrequencyRangeFromRegistry(*((DxgMonitor::MonitorModes **)this + 29));
  DXGMONITOR::_RetrieveMonitorConfigurationFromDriverInf(this);
  DxgMonitor::MonitorPnpState::RegisterPnPTargetDeviceNotification(
    *((DxgMonitor::MonitorPnpState **)this + 25),
    SourceString,
    v9);
  LOBYTE(v10) = ~*((_BYTE *)this + 176);
  DXGMONITOR::TriggerMonitorTelemetry(this, (v10 >> 6) & 1, a4);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 80LL))(*((_QWORD *)this + 21)) )
  {
    v11 = *((_DWORD *)this + 116);
    v12 = *((_QWORD *)this + 26);
    LODWORD(v22) = v11;
    if ( DxgMonitor::MonitorDataStore::TryReadData<unsigned long>(v12, 1LL, (__int64)L"PreferredScaleFactor", &v22) )
      v11 = (unsigned int)v22;
    if ( v11 && *((_DWORD *)this + 116) != v11 )
    {
      v17 = *((_QWORD *)this + 26);
      *((_DWORD *)this + 116) = v11;
      v18 = *(__int64 **)(v17 + 16);
      v19 = *v18;
      v22 = 0LL;
      if ( (*(int (__fastcall **)(__int64 *, _QWORD, void **))(v19 + 8))(v18, 0LL, &v22) >= 0 )
        DxgMonitor::MonitorDataStore::WriteData<unsigned long>(v20, v22, L"PreferredScaleFactor", v11);
      wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v22);
      (**(void (__fastcall ***)(struct DxgMonitor::IMonitorDeferredEventSource *, _QWORD, __int64, _QWORD, _DWORD))a3)(
        a3,
        *((unsigned int *)this + 45),
        9LL,
        *((unsigned int *)this + 116),
        *((_DWORD *)this + 78));
    }
  }
  v13 = DxgMonitor::MonitorUsageState::_EvaluateUsageState(
          *((DxgMonitor::MonitorUsageState **)this + 30),
          *(const struct DxgMonitor::IMonitorDescriptor **)(*((_QWORD *)this + 27) + 160LL));
  DXGMONITOR::OnUsageUpdated(this, a3, v13);
  DxgMonitor::MonitorColorState::OnFunctionDriverArrival(*((DxgMonitor::MonitorColorState **)this + 28), a4);
  if ( (int)DxgkIncreaseMonitorUniqueness() >= 0 )
  {
    v21 = 0LL;
    LODWORD(v21) = 12;
    DxgkStatusChangeNotify((int *)&v21, v14, v15);
  }
  return 0LL;
}
