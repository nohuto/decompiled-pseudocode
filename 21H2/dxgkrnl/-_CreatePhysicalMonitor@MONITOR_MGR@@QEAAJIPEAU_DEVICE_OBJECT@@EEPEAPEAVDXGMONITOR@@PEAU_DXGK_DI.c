/*
 * XREFs of ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0190A6C
 * Callers:
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0191114 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_GDXGMONITOR@@AEAAPEAXI@Z @ 0x1C005DD8C (--_GDXGMONITOR@@AEAAPEAXI@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0129B38 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018F97C (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0190BC4 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0190C60 (-_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ??0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z @ 0x1C0190D24 (--0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_CreatePhysicalMonitor(
        MONITOR_MGR *this,
        __int64 a2,
        struct _DEVICE_OBJECT *a3,
        char a4,
        char a5,
        struct DXGMONITOR **a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  struct DXGMONITOR **v7; // r15
  __int64 v9; // r14
  PVOID v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGMONITOR *v15; // rbx
  int MonitorInstance; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r9
  struct DXGMONITOR **v20; // rdi
  int v21; // esi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax

  v7 = a6;
  v9 = (unsigned int)a2;
  if ( !a6 )
  {
    v26 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v26);
  }
  if ( !a3 )
  {
    v27 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v27);
  }
  if ( (_DWORD)v9 == -1 )
  {
    v28 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v28);
  }
  *v7 = 0LL;
  v12 = operator new[](0x538uLL, 0x4D677844u, (POOL_TYPE)512);
  if ( v12 )
    v15 = DXGMONITOR::DXGMONITOR(v12, this);
  else
    v15 = 0LL;
  if ( v15 )
  {
    a6 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(
                        (struct _FAST_MUTEX *)this,
                        (unsigned int)v9,
                        0,
                        (struct DXGMONITOR **)&a6);
    v20 = a6;
    v21 = MonitorInstance;
    if ( MonitorInstance >= 0 )
    {
      if ( !a6 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v18, v17);
        WdLogEvent5_WdAssertion(v30);
      }
      if ( *((_DWORD *)v20 + 108) == 1 )
      {
        v31 = WdLogNewEntry5_WdAssertion(v18, v17);
        WdLogEvent5_WdAssertion(v31);
      }
      if ( v20[55] )
      {
        v32 = WdLogNewEntry5_WdAssertion(v18, v17);
        WdLogEvent5_WdAssertion(v32);
      }
      v20[55] = v15;
    }
    else
    {
      if ( a6 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v18, v17);
        WdLogEvent5_WdAssertion(v33);
      }
      if ( v21 != -1073741275 )
      {
        v34 = WdLogNewEntry5_WdAssertion(v18, v17);
        WdLogEvent5_WdAssertion(v34);
      }
      MONITOR_MGR::_InsertMonitorToList(this, v15);
    }
    LOBYTE(v19) = a4;
    v24 = (int)DXGMONITOR::_InitializeMonitor((__int64)v15, (unsigned int)v9, (__int64)a3, v19, a5, 1, 0LL, a7);
    if ( v20 )
      v20[55] = 0LL;
    else
      MONITOR_MGR::_RemoveMonitorFromList(this, v15);
    if ( (int)v24 < 0 )
    {
      v35 = WdLogNewEntry5_WdError(v23, v22);
      *(_QWORD *)(v35 + 24) = v9;
      *(_QWORD *)(v35 + 32) = v24;
      WdLogEvent5_WdError(v35);
      DXGMONITOR::`scalar deleting destructor'(v15);
      return (unsigned int)v24;
    }
    else
    {
      *v7 = v15;
      return 0LL;
    }
  }
  else
  {
    v29 = WdLogNewEntry5_WdError(v14, v13);
    WdLogEvent5_WdError(v29);
    return 3221225495LL;
  }
}
