/*
 * XREFs of ?_MonitorTelemetry@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F2C44
 * Callers:
 *     ?AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02B0A40 (-AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004448 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018E22C (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SC.c)
 */

void __fastcall MONITOR_MGR::_MonitorTelemetry(struct _FAST_MUTEX *this, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  struct _FAST_MUTEX *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  ULONG *p_Contention; // r14
  MONITOR_MGR *v12; // rax
  char *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  char *v16; // rax
  __int64 v17; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this->Owner + 2)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v6 + 24) = 12201LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = this + 3;
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4);
    WdLogEvent5_WdAssertion(v8);
  }
  KeAcquireGuardedMutex(this + 3);
  p_Contention = &this[2].Contention;
  v12 = *(MONITOR_MGR **)&this[2].Contention;
  if ( v12 != (MONITOR_MGR *)&this[2].Contention )
  {
    v13 = (char *)v12 - 16;
    if ( !v12 )
      v13 = 0LL;
    while ( v13 )
    {
      v14 = (__int64)v13;
      if ( *((_DWORD *)v13 + 108) != 1 && *((_QWORD *)v13 + 55) )
        v14 = *((_QWORD *)v13 + 55);
      if ( !v14 )
      {
        v15 = WdLogNewEntry5_WdAssertion(v10, v9);
        WdLogEvent5_WdAssertion(v15);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(v14 + 296), 1u);
      DXGMONITOR::_MonitorTelemetry(v14, 2LL, (__int64)a2);
      v16 = (char *)*((_QWORD *)v13 + 2);
      if ( v16 == (char *)p_Contention )
      {
        v13 = 0LL;
      }
      else
      {
        v13 = v16 - 16;
        if ( !v16 )
          v13 = 0LL;
      }
      ExReleaseResourceLite((PERESOURCE)(v14 + 296));
      KeLeaveCriticalRegion();
    }
  }
  if ( !v7 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v17);
  }
  KeReleaseGuardedMutex(v7);
}
