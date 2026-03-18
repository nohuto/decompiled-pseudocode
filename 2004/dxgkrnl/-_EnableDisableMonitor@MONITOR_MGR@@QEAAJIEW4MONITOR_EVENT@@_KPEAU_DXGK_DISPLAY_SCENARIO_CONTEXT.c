/*
 * XREFs of ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015CADC
 * Callers:
 *     ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015C9B8 (-_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorEnableDisableMonitor @ 0x1C0173C84 (MonitorEnableDisableMonitor.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F1894 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C015CCDC (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0173ED4 (-_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO.c)
 */

__int64 __fastcall MONITOR_MGR::_EnableDisableMonitor(__int64 a1, __int64 a2, char a3, int a4, unsigned __int64 a5)
{
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned int v10; // edi
  int v11; // eax
  int v12; // r12d
  char v13; // dl
  char v14; // al
  unsigned __int8 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  char v19; // r12
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 i; // rcx
  bool v25; // zf
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v28; // ebp
  __int64 v29; // rax
  SIZE_T v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int *v33; // r14
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 j; // rax
  int v39; // eax
  char v40; // al
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  unsigned int *v45; // rbx
  __int64 v46; // r15
  __int64 v47; // rbp
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // r12
  _QWORD *v51; // rax
  _DWORD v52[2]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v53; // [rsp+38h] [rbp-40h]
  __int128 v54; // [rsp+40h] [rbp-38h]

  v8 = 2LL;
  if ( a4 != 8 && a4 != 2 )
    return 3221225485LL;
  v9 = *(unsigned __int8 *)(a1 + 2);
  v10 = 0;
  v11 = *(_BYTE *)(a1 + 1) & 1;
  v52[1] = a4;
  v53 = a5;
  v12 = a3 & 1 | (2 * (*(_BYTE *)a1 & 1 | (2 * (v11 | (2 * (v9 & 1))))));
  v54 = 0LL;
  if ( (_DWORD)a2 != -1 )
  {
    LOBYTE(v8) = a3;
    return MONITOR_MGR::_EnableDisableMonitorInternal(a1, a2, v8);
  }
  if ( a5 > 1 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v9, a2);
    WdLogEvent5_WdAssertion(v21);
    LOBYTE(v9) = *(_BYTE *)(a1 + 2);
  }
  if ( a4 == 8 )
  {
    *(_BYTE *)(a1 + 1) = a3 == 0;
  }
  else
  {
    *(_BYTE *)(a1 + 2) = a3 == 0;
    LOBYTE(v9) = a3 == 0;
  }
  v13 = *(_BYTE *)(a1 + 1);
  if ( v13 || (v14 = *(_BYTE *)(a1 + 2), (LOBYTE(v9) = v14) != 0) )
  {
    v15 = 0;
    v14 = v9;
  }
  else
  {
    v15 = 1;
  }
  v52[0] = v12 & 0xFFFFFF8F | (16 * (v15 | (2 * (v13 & 1 | (2 * (v14 & 1))))));
  MONITOR_MGR::_LogMonitorPresentEvent(a1, 14LL, 0xFFFFFFFFLL, 0LL, v52);
  v19 = 0;
  if ( *(_BYTE *)(a1 + 2) && *(_BYTE *)(a1 + 1) )
  {
    if ( a1 == -168 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v17, v16);
      WdLogEvent5_WdAssertion(v22);
    }
    KeAcquireGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
    v23 = a1 + 128;
    for ( i = *(_QWORD *)(a1 + 128); i != v23; i = *(_QWORD *)(v26 + 16) )
    {
      v26 = i - 16;
      if ( !i )
        v26 = 0LL;
      if ( !v26 )
        break;
      if ( *(_DWORD *)(v26 + 592) )
      {
        i = *(unsigned int *)(v26 + 40);
        if ( (i & 0x20) != 0 || (i &= 6u, v25 = (_BYTE)i == 6, LOBYTE(i) = 0, v25) )
          LOBYTE(i) = 1;
        if ( !(_BYTE)i )
        {
          v19 = 1;
          break;
        }
      }
    }
    if ( a1 == -168 )
    {
      v27 = WdLogNewEntry5_WdAssertion(i, v23);
      WdLogEvent5_WdAssertion(v27);
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  }
  if ( v15 != *(_BYTE *)a1 || v19 )
  {
    LOBYTE(v18) = v15;
    v10 = MONITOR_MGR::_EnableDisableMonitorInternal(a1, 0xFFFFFFFFLL, v18);
    *(_BYTE *)a1 = v15;
    return v10;
  }
  if ( !a3 || v15 || !*(_BYTE *)(a1 + 1) )
    return v10;
  v28 = 0;
  if ( a1 == -168 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v17, v16);
    WdLogEvent5_WdAssertion(v29);
  }
  KeAcquireGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  v30 = 4LL * *(unsigned int *)(a1 + 120);
  if ( !is_mul_ok(*(unsigned int *)(a1 + 120), 4uLL) )
    v30 = -1LL;
  v33 = (unsigned int *)operator new[](v30, 0x4D677844u, PagedPool);
  if ( v33 )
  {
    for ( j = *(_QWORD *)(a1 + 128); j != a1 + 128; j = *(_QWORD *)(v31 + 16) )
    {
      v31 = j - 16;
      if ( !j )
        v31 = 0LL;
      if ( !v31 )
        break;
      if ( *(_DWORD *)(v31 + 592) )
      {
        v39 = *(_DWORD *)(v31 + 40);
        if ( (v39 & 0x20) != 0 || (v25 = (v39 & 6) == 6, v40 = 0, v25) )
          v40 = 1;
        if ( v40 )
        {
          v32 = v28++;
          v33[v32] = *(_DWORD *)(v31 + 44);
        }
      }
    }
    if ( a1 == -168 )
    {
      v41 = WdLogNewEntry5_WdAssertion(v32, v31);
      WdLogEvent5_WdAssertion(v41);
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
    if ( v28 )
    {
      v45 = v33;
      v46 = v28;
      do
      {
        v47 = *v45;
        if ( (_DWORD)v47 == -1 )
        {
          v48 = WdLogNewEntry5_WdAssertion(v43, v42);
          WdLogEvent5_WdAssertion(v48);
        }
        LOBYTE(v44) = 1;
        v49 = MONITOR_MGR::_EnableDisableMonitorInternal(a1, (unsigned int)v47, v44);
        v50 = v49;
        if ( v49 < 0 )
        {
          v51 = (_QWORD *)WdLogNewEntry5_WdError(v43, v42);
          v51[3] = v47;
          v51[4] = a1;
          v51[5] = v50;
          WdLogEvent5_WdError(v51);
        }
        ++v45;
        --v46;
      }
      while ( v46 );
    }
    operator delete[](v33);
    return v10;
  }
  v34 = WdLogNewEntry5_WdError(v32, v31);
  WdLogEvent5_WdError(v34);
  if ( a1 == -168 )
  {
    v37 = WdLogNewEntry5_WdAssertion(v36, v35);
    WdLogEvent5_WdAssertion(v37);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  return 3221225495LL;
}
