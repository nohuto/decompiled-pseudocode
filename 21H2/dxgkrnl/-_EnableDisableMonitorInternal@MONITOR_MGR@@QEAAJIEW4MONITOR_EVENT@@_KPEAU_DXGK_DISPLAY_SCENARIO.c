/*
 * XREFs of ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01787B4
 * Callers:
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0161A8C (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?_ChangeLIDStatus@DXGMONITOR@@QEAAXE@Z @ 0x1C005DDF4 (-_ChangeLIDStatus@DXGMONITOR@@QEAAXE@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0161C8C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017AEFC (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 */

__int64 __fastcall MONITOR_MGR::_EnableDisableMonitorInternal(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r14
  char v10; // di
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  DXGMONITOR *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  char v29; // [rsp+78h] [rbp+20h]

  v6 = (unsigned int)a2;
  v29 = 0;
  v10 = 0;
  if ( a4 - 1 > 1 && a4 != 8 )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v20);
  }
  if ( a1 == -168 )
  {
    v21 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v21);
  }
  KeAcquireGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  v13 = *(_QWORD *)(a1 + 128);
  if ( v13 != a1 + 128 )
  {
    v14 = v13 - 16;
    if ( !v13 )
      v14 = 0LL;
    if ( v14 )
    {
      do
      {
        if ( (_DWORD)v6 == -1 || *(_DWORD *)(v14 + 44) == (_DWORD)v6 )
        {
          v29 = 1;
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 296), 1u);
          if ( a4 == 1 )
          {
            LOBYTE(v15) = a3;
            DXGMONITOR::_ChangeLIDStatus((DXGMONITOR *)v14, v15);
          }
          else if ( a4 != 8 || *(_DWORD *)(v14 + 592) != 1 || a3 )
          {
            *(_DWORD *)(v14 + 40) = *(_DWORD *)(v14 + 40) & 0xFFFFFFDF | (a3 == 0 ? 0x20 : 0);
          }
          ExReleaseResourceLite((PERESOURCE)(v14 + 296));
          KeLeaveCriticalRegion();
          if ( *(_DWORD *)(v14 + 432) != 1 )
          {
            v22 = *(_QWORD *)(v14 + 440);
            if ( v22 )
            {
              if ( *(_DWORD *)(v22 + 432) != 1 )
              {
                v23 = WdLogNewEntry5_WdAssertion(v12, v11);
                WdLogEvent5_WdAssertion(v23);
                v22 = *(_QWORD *)(v14 + 440);
              }
              if ( !v22 )
              {
                v24 = WdLogNewEntry5_WdAssertion(v12, v11);
                WdLogEvent5_WdAssertion(v24);
              }
              KeEnterCriticalRegion();
              ExAcquireResourceExclusiveLite((PERESOURCE)(v22 + 296), 1u);
              v26 = *(DXGMONITOR **)(v14 + 440);
              if ( a4 == 1 )
              {
                LOBYTE(v25) = a3;
                DXGMONITOR::_ChangeLIDStatus(v26, v25);
              }
              else
              {
                *((_DWORD *)v26 + 10) = *((_DWORD *)v26 + 10) & 0xFFFFFFDF | (a3 == 0 ? 0x20 : 0);
              }
              ExReleaseResourceLite((PERESOURCE)(v22 + 296));
              KeLeaveCriticalRegion();
            }
          }
        }
        v16 = *(_QWORD *)(v14 + 16);
        if ( v16 == a1 + 128 )
          break;
        v14 = v16 - 16;
        if ( !v16 )
          v14 = 0LL;
      }
      while ( v14 );
      v10 = v29;
    }
    else
    {
      v10 = 0;
    }
  }
  if ( a1 == -168 )
  {
    v27 = WdLogNewEntry5_WdAssertion(v12, v11);
    WdLogEvent5_WdAssertion(v27);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  if ( v10 || (_DWORD)v6 == -1 || a4 == 2 || a4 == 8 )
  {
    MONITOR_MGR::_IssueMonitorEvent(a1, (unsigned int)v6, a4, a5, 0, a6);
    MONITOR_MGR::_LogMonitorPresentEvent(a1, (unsigned int)(a3 != 0) + 9, v6, 0, 0LL);
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v28 + 24) = v6;
    *(_QWORD *)(v28 + 32) = a1;
    WdLogEvent5_WdError(v28);
  }
  return 0LL;
}
