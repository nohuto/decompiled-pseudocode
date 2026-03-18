/*
 * XREFs of ?_MonitorOnOffTelemetry@MONITOR_MGR@@QEAAXAEBU_GUID@@W4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1C0166E14
 * Callers:
 *     LogMonitorOnOffTelemetry @ 0x1C0166D94 (LogMonitorOnOffTelemetry.c)
 * Callees:
 *     ?LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1C01585C4 (-LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z.c)
 */

void __fastcall MONITOR_MGR::_MonitorOnOffTelemetry(__int64 a1, __int64 a2, char a3)
{
  struct _FAST_MUTEX *v3; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdi
  struct _ERESOURCE *v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  v3 = (struct _FAST_MUTEX *)(a1 + 168);
  if ( a1 == -168 )
  {
    v14 = WdLogNewEntry5_WdAssertion(-168LL, a2);
    WdLogEvent5_WdAssertion(v14);
  }
  KeAcquireGuardedMutex(v3);
  v9 = a1 + 128;
  v10 = *(_QWORD *)(a1 + 128);
  if ( v10 != a1 + 128 )
  {
    v11 = v10 - 16;
    if ( !v10 )
      v11 = 0LL;
    while ( v11 )
    {
      v12 = (struct _ERESOURCE *)(v11 + 296);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(v11 + 296), 1u);
      DXGMONITOR::LogMonitorObjectOnOffState((char *)v11, a2, 0, a3);
      v13 = *(_QWORD *)(v11 + 16);
      if ( v13 == v9 )
      {
        v11 = 0LL;
      }
      else
      {
        v11 = v13 - 16;
        if ( !v13 )
          v11 = 0LL;
      }
      ExReleaseResourceLite(v12);
      KeLeaveCriticalRegion();
    }
  }
  if ( !v3 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v15);
  }
  KeReleaseGuardedMutex(v3);
}
