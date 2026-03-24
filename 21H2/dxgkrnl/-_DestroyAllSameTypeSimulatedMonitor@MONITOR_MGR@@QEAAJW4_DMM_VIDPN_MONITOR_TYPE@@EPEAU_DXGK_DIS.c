/*
 * XREFs of ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013F93C
 * Callers:
 *     MonitorDestroyAllSameTypeSimulatedMonitor @ 0x1C013F8A0 (MonitorDestroyAllSameTypeSimulatedMonitor.c)
 *     MonitorAdapterPowerChange @ 0x1C0178F30 (MonitorAdapterPowerChange.c)
 * Callees:
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0161C8C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017AEFC (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C018B43C (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C02DE110 (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C02F2154 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_DestroyAllSameTypeSimulatedMonitor(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v4; // r15
  int v6; // r12d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 *v13; // rbx
  __int64 *v14; // rdi
  __int64 *v15; // rax
  __int64 *v16; // r15
  __int64 *v17; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int v23; // edx
  __int64 *v24; // rax
  __int64 **v25; // rcx
  __int64 **v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rax
  bool v31; // zf
  __int64 *v32; // rcx
  __int64 *v33; // rdi
  unsigned int v34; // ebx
  unsigned int v35; // eax
  __int64 v36; // [rsp+20h] [rbp-20h]
  __int64 v37; // [rsp+28h] [rbp-18h]
  __int64 *v38; // [rsp+30h] [rbp-10h] BYREF
  __int64 **v39; // [rsp+38h] [rbp-8h]
  unsigned __int8 v40; // [rsp+88h] [rbp+48h] BYREF
  __int64 v41; // [rsp+98h] [rbp+58h]

  v41 = a4;
  v4 = a4;
  v6 = a2;
  if ( (_DWORD)a2 == 1 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v19);
  }
  v39 = &v38;
  v38 = (__int64 *)&v38;
  if ( a1 == -168 )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v20);
  }
  KeAcquireGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  if ( a1 == -168 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v21);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  v11 = (__int64 *)(a1 + 128);
  v12 = *(_QWORD *)(a1 + 128);
  if ( v12 != a1 + 128 )
  {
    v13 = (__int64 *)(v12 - 16);
    if ( !v12 )
      v13 = 0LL;
    if ( v13 )
    {
      while ( 1 )
      {
        v14 = v13 + 2;
        v15 = (__int64 *)v13[2];
        if ( v15 == v11 )
        {
          v16 = 0LL;
        }
        else
        {
          v16 = v15 - 2;
          if ( !v15 )
            v16 = 0LL;
        }
        if ( v6 == *((_DWORD *)v13 + 108) )
        {
          if ( !a3
            || (v22 = *(_QWORD *)(a1 + 8),
                v23 = *((_DWORD *)v13 + 11),
                v40 = 0,
                DmmIsTargetInClientVidPnTopology(*(void *const *)(v22 + 16), v23, &v40) >= 0)
            && !v40 )
          {
            v24 = (__int64 *)*v14;
            if ( *(__int64 **)(*v14 + 8) != v14 )
              goto LABEL_39;
            v25 = (__int64 **)v13[3];
            if ( *v25 != v14 )
              goto LABEL_39;
            *v25 = v24;
            v24[1] = (__int64)v25;
            v26 = v39;
            if ( *v39 != (__int64 *)&v38 )
              goto LABEL_39;
            v13[3] = (__int64)v39;
            *v14 = (__int64)&v38;
            *v26 = v14;
            v39 = (__int64 **)(v13 + 2);
            v27 = v13[55];
            if ( v27 )
            {
              if ( *(_DWORD *)(v27 + 432) != 1 )
              {
                v28 = WdLogNewEntry5_WdAssertion(&v38, v10);
                WdLogEvent5_WdAssertion(v28);
                v27 = v13[55];
              }
              v29 = *v11;
              v30 = (_QWORD *)(v27 + 16);
              if ( *(__int64 **)(*v11 + 8) != v11 )
                goto LABEL_39;
              v31 = MONITOR_MGR::_UsingCCDNameForTTM == 0;
              *v30 = v29;
              v30[1] = v11;
              *(_QWORD *)(v29 + 8) = v30;
              *v11 = (__int64)v30;
              if ( !v31 || v13[10] )
                DXGMONITOR::_CreateTtmDevice((DXGMONITOR *)v13[55]);
            }
            else
            {
              --*(_DWORD *)(a1 + 120);
            }
          }
        }
        v13 = v16;
        if ( !v16 )
        {
          v4 = v41;
          break;
        }
      }
    }
  }
  while ( 1 )
  {
    v17 = v38;
    if ( v38 == (__int64 *)&v38 )
      break;
    if ( (__int64 **)v38[1] != &v38 || (v32 = (__int64 *)*v38, *(__int64 **)(*v38 + 8) != v38) )
LABEL_39:
      __fastfail(3u);
    v33 = v38 - 2;
    v38 = (__int64 *)*v38;
    v32[1] = (__int64)&v38;
    if ( v17 == (__int64 *)16 )
      break;
    v34 = *((_DWORD *)v33 + 11);
    v37 = v4;
    LODWORD(v36) = *((_DWORD *)v33 + 108);
    MONITOR_MGR::_IssueMonitorEvent(a1, v34, 0LL, 2LL, v36, v4);
    v33[55] = 0LL;
    v35 = MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)a1, v33);
    MONITOR_MGR::_LogMonitorPresentEvent(a1, 1073741826LL, v34, v35, 0LL);
  }
  return 0LL;
}
