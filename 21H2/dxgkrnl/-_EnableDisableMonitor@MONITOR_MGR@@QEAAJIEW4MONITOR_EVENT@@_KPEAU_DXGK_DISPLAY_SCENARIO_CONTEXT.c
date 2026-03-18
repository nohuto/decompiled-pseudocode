/*
 * XREFs of ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEAE@Z @ 0x1C01E2680
 * Callers:
 *     ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01B6930 (-_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorEnableDisableMonitor @ 0x1C01F14EC (MonitorEnableDisableMonitor.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03B3618 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1C0012EA0 (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x1C0012ED0 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ??0?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z @ 0x1C00135F8 (--0-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z.c)
 *     ?_IsMonitorDisabled@DXGMONITOR@@QEBA_NXZ @ 0x1C01BAD54 (-_IsMonitorDisabled@DXGMONITOR@@QEBA_NXZ.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C01E285C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEAE@Z @ 0x1C01F252C (-_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO.c)
 */

__int64 __fastcall MONITOR_MGR::_EnableDisableMonitor(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned __int64 a5)
{
  char v5; // r12
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // esi
  int v11; // esi
  char v12; // cl
  char v13; // al
  unsigned __int8 v14; // r15
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // al
  __int64 v19; // rax
  DXGMONITOR *v20; // rsi
  struct _KTHREAD ***i; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned int v24; // esi
  unsigned int *v25; // r14
  __int64 v26; // r8
  __int64 j; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned int *v31; // r15
  __int64 v32; // r12
  __int64 v33; // rsi
  int v34; // eax
  __int64 v35; // [rsp+40h] [rbp-30h] BYREF
  struct _KTHREAD **v36; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v37[2]; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v38; // [rsp+58h] [rbp-18h]
  __int128 v39; // [rsp+60h] [rbp-10h]

  v5 = a3;
  if ( a4 != 8 && (unsigned int)(a4 - 1) > 1 )
    return 3221225485LL;
  v8 = 0;
  v9 = *(_BYTE *)(a1 + 17) & 1;
  v10 = 2 * (*(_BYTE *)(a1 + 18) & 1);
  v37[1] = a4;
  v38 = a5;
  v11 = a3 & 1 | (2 * (*(_BYTE *)(a1 + 16) & 1 | (2 * (v9 | v10))));
  v39 = 0LL;
  if ( (_DWORD)a2 == -1 )
  {
    if ( a4 != 8 && a4 != 2 )
      WdLogSingleEntry0(1LL);
    if ( a5 >= 2 )
      WdLogSingleEntry0(1LL);
    if ( a4 == 8 )
    {
      v12 = *(_BYTE *)(a1 + 18);
      v13 = v5 == 0;
      *(_BYTE *)(a1 + 17) = v5 == 0;
    }
    else
    {
      v13 = *(_BYTE *)(a1 + 17);
      v12 = v5 == 0;
      *(_BYTE *)(a1 + 18) = v5 == 0;
    }
    if ( v13 || (v14 = 1, v12) )
      v14 = 0;
    v37[0] = v11 & 0xFFFFFF8F | (16 * (v14 | (2 * (v13 & 1 | (2 * (v12 & 1))))));
    MONITOR_MGR::_LogMonitorPresentEvent(a1, 14LL, 0xFFFFFFFFLL, 0LL, v37);
    v17 = 0;
    if ( *(_BYTE *)(a1 + 18) && *(_BYTE *)(a1 + 17) )
    {
      MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v35, (struct DXGFASTMUTEX *)(a1 + 80));
      v19 = *(_QWORD *)(a1 + 40);
      if ( v19 == a1 + 40 )
      {
        v20 = 0LL;
      }
      else
      {
        v20 = (DXGMONITOR *)(v19 - 152);
        if ( !v19 )
          v20 = 0LL;
      }
      for ( i = (struct _KTHREAD ***)&v35; ; i = &v36 )
      {
        MUTEX_LOCK::~MUTEX_LOCK(i);
        if ( !v20 )
        {
          v17 = 0;
          goto LABEL_11;
        }
        RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v35, (__int64)v20, 0);
        if ( *(_DWORD *)(*((_QWORD *)v20 + 30) + 16LL) )
        {
          if ( !DXGMONITOR::_IsMonitorDisabled(v20) )
            break;
        }
        if ( v35 )
        {
          ExReleaseResourceLite((PERESOURCE)(v35 + 24));
          KeLeaveCriticalRegion();
        }
        MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v36, (struct DXGFASTMUTEX *)(a1 + 80));
        v22 = *((_QWORD *)v20 + 19);
        if ( v22 == a1 + 40 )
        {
          v20 = 0LL;
        }
        else
        {
          v20 = (DXGMONITOR *)(v22 - 152);
          if ( !v22 )
            v20 = 0LL;
        }
      }
      v17 = 1;
      if ( v35 )
      {
        ExReleaseResourceLite((PERESOURCE)(v35 + 24));
        KeLeaveCriticalRegion();
        v17 = 1;
      }
    }
LABEL_11:
    if ( v14 != *(_BYTE *)(a1 + 16) || v17 )
    {
      LOBYTE(v15) = v14;
      v8 = MONITOR_MGR::_EnableDisableMonitorInternal(a1, 0xFFFFFFFFLL, v15);
      *(_BYTE *)(a1 + 16) = v14;
    }
    else if ( v5 && !v14 && *(_BYTE *)(a1 + 17) )
    {
      v23 = 4LL * *(unsigned int *)(a1 + 32);
      v24 = 0;
      if ( !is_mul_ok(*(unsigned int *)(a1 + 32), 4uLL) )
        v23 = -1LL;
      v35 = operator new[](v23, 0x4D677844u, 256LL, v16);
      v25 = (unsigned int *)v35;
      if ( !v35 )
      {
        WdLogSingleEntry0(2LL);
        return 3221225495LL;
      }
      MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v36, (struct DXGFASTMUTEX *)(a1 + 80));
      v26 = a1 + 40;
      for ( j = *(_QWORD *)(a1 + 40); j != v26; j = *(_QWORD *)(v28 + 152) )
      {
        v28 = j - 152;
        if ( !j )
          v28 = 0LL;
        if ( !v28 )
          break;
        if ( *(_DWORD *)(*(_QWORD *)(v28 + 240) + 16LL) && DXGMONITOR::_IsMonitorDisabled((DXGMONITOR *)v28) )
        {
          v29 = v24++;
          v25[v29] = *(_DWORD *)(v28 + 180);
        }
      }
      MUTEX_LOCK::~MUTEX_LOCK(&v36);
      if ( v24 )
      {
        v31 = v25;
        v32 = v24;
        do
        {
          v33 = *v31;
          if ( (_DWORD)v33 == -1 )
            WdLogSingleEntry0(1LL);
          LOBYTE(v30) = 1;
          v34 = MONITOR_MGR::_EnableDisableMonitorInternal(a1, (unsigned int)v33, v30);
          if ( v34 < 0 )
            WdLogSingleEntry3(2LL, v33, a1, v34);
          ++v31;
          --v32;
        }
        while ( v32 );
        v25 = (unsigned int *)v35;
      }
      operator delete[](v25);
    }
    return v8;
  }
  return MONITOR_MGR::_EnableDisableMonitorInternal(a1, a2, a3);
}
