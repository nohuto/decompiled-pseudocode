/*
 * XREFs of ?_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ @ 0x1C0148EB8
 * Callers:
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C0148D1C (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     MonitorIsUsingSimulatedMonitor @ 0x1C0148E3C (MonitorIsUsingSimulatedMonitor.c)
 * Callees:
 *     <none>
 */

char __fastcall MONITOR_MGR::_IsUsingSimulatedMonitor(MONITOR_MGR *this, __int64 a2)
{
  struct _FAST_MUTEX *v2; // rbx
  MONITOR_MGR *v4; // rdx
  MONITOR_MGR *v5; // rcx
  char *v6; // rax
  char v7; // di
  __int64 v9; // rax
  __int64 v10; // rax

  v2 = (struct _FAST_MUTEX *)((char *)this + 168);
  if ( this == (MONITOR_MGR *)-168LL )
  {
    v9 = WdLogNewEntry5_WdAssertion(-168LL, a2);
    WdLogEvent5_WdAssertion(v9);
  }
  KeAcquireGuardedMutex(v2);
  v4 = (MONITOR_MGR *)((char *)this + 128);
  v5 = (MONITOR_MGR *)*((_QWORD *)this + 16);
  if ( v5 == (MONITOR_MGR *)((char *)this + 128) )
    goto LABEL_10;
  v6 = (char *)v5 - 16;
  if ( !v5 )
    v6 = 0LL;
  if ( !v6 )
  {
LABEL_10:
    v7 = 0;
  }
  else
  {
    v7 = 1;
    while ( *((_DWORD *)v6 + 108) == 1 )
    {
      v5 = (MONITOR_MGR *)*((_QWORD *)v6 + 2);
      if ( v5 != v4 )
      {
        v6 = (char *)v5 - 16;
        if ( !v5 )
          v6 = 0LL;
        if ( v6 )
          continue;
      }
      goto LABEL_10;
    }
  }
  if ( !v2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v5, v4);
    WdLogEvent5_WdAssertion(v10);
  }
  KeReleaseGuardedMutex(v2);
  return v7;
}
