/*
 * XREFs of ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F1894
 * Callers:
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F1ED8 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsAnalogueVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0009BB8 (-IsAnalogueVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A4FC (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ??_GDXGMONITOR@@AEAAPEAXI@Z @ 0x1C005CFAC (--_GDXGMONITOR@@AEAAPEAXI@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C0121F80 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015CADC (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0186E4C (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ??0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z @ 0x1C018B834 (--0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_CreateSimulatedMonitor(
        __int64 a1,
        __int64 a2,
        int a3,
        struct DXGMONITOR *a4,
        DXGMONITOR **a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  DXGMONITOR **v6; // r14
  __int64 v8; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v14; // r15
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v19; // edi
  __int64 v20; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v21; // ecx
  char *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  DXGMONITOR *v26; // rbx
  __int64 v27; // rax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rax
  _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v34; // [rsp+78h] [rbp+10h] BYREF

  v6 = a5;
  v8 = (unsigned int)a2;
  if ( !a5 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( (_DWORD)v8 == -1 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( a3 == 1 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v13);
  }
  *v6 = 0LL;
  v14 = a6;
  if ( a3 == 5 )
  {
    v15 = *(_QWORD *)(a1 + 8);
    v34 = D3DKMDT_VOT_UNINITIALIZED;
    if ( (int)DmmGetVideoOutputTechnology(*(_QWORD **)(v15 + 16), (unsigned int)v8, &v34, 0LL) < 0 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v17, v16);
      WdLogEvent5_WdAssertion(v18);
    }
    v19 = v34;
    if ( v34 == D3DKMDT_VOT_UNINITIALIZED )
    {
      v20 = WdLogNewEntry5_WdAssertion(v17, v16);
      WdLogEvent5_WdAssertion(v20);
    }
    if ( !IsAnalogueVideoOutput(v19)
      && *(_BYTE *)(a1 + 3)
      && (!IsInternalVideoOutput(v21) || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 2596LL) >= 1200) )
    {
      MONITOR_MGR::_EnableDisableMonitor(a1, 0xFFFFFFFFLL, 0, 8, 1uLL);
    }
  }
  v23 = (char *)operator new[](0x538uLL, 0x4D677844u, (POOL_TYPE)512);
  if ( v23 )
    v26 = DXGMONITOR::DXGMONITOR(v23, (struct MONITOR_MGR *)a1);
  else
    v26 = 0LL;
  if ( v26 )
  {
    v29 = DXGMONITOR::_InitializeMonitor((__int64)v26, (unsigned int)v8, 0LL, 0LL, 0, a3, a4, v14);
    v32 = v29;
    if ( v29 >= 0 )
    {
      *v6 = v26;
    }
    else
    {
      v33 = WdLogNewEntry5_WdError(v31, v30);
      *(_QWORD *)(v33 + 24) = v8;
      *(_QWORD *)(v33 + 32) = v32;
      WdLogEvent5_WdError(v33);
      DXGMONITOR::`scalar deleting destructor'(v26);
    }
    return (unsigned int)v32;
  }
  else
  {
    v27 = WdLogNewEntry5_WdError(v25, v24);
    WdLogEvent5_WdError(v27);
    return 3221225495LL;
  }
}
