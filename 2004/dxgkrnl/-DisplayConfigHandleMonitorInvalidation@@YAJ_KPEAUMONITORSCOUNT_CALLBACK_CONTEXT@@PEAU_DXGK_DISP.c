/*
 * XREFs of ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015A1C0
 * Callers:
 *     DxgkInvalidateMonitorConnections @ 0x1C015A060 (DxgkInvalidateMonitorConnections.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0295D6C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0296AB8 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0296F54 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01306EC (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1C0130A14 (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     ??0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ @ 0x1C015A2D8 (--0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0295500 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 */

__int64 __fastcall DisplayConfigHandleMonitorInvalidation(
        __int64 a1,
        struct MONITORSCOUNT_CALLBACK_CONTEXT *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct MONITORSCOUNT_CALLBACK_CONTEXT *v8; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  struct DXGGLOBAL *v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct DXGGLOBAL *v27; // rax
  struct DXGGLOBAL *v28; // rax
  __int64 v29; // [rsp+30h] [rbp-40h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v30; // [rsp+38h] [rbp-38h]
  _BYTE v31[48]; // [rsp+40h] [rbp-30h] BYREF
  char v32; // [rsp+A8h] [rbp+38h] BYREF

  if ( (unsigned int)DxgIsRemoteSessionUsingWddmMonitors(a1, (__int64)a2) )
    return 0LL;
  MONITORSCOUNT_CALLBACK_CONTEXT::MONITORSCOUNT_CALLBACK_CONTEXT((MONITORSCOUNT_CALLBACK_CONTEXT *)v31);
  v8 = (struct MONITORSCOUNT_CALLBACK_CONTEXT *)v31;
  if ( a2 )
    v8 = a2;
  if ( a3 )
    *((_BYTE *)a3 + 48) = *((_BYTE *)v8 + 26);
  if ( (a1 & 2) != 0 )
    *((_DWORD *)v8 + 8) |= 4u;
  LODWORD(v29) = 4;
  v30 = a3;
  BYTE4(v29) = (a1 & 2) == 0;
  *(_WORD *)((char *)&v29 + 5) = 0;
  HIBYTE(v29) = 0;
  Global = DXGGLOBAL::GetGlobal(v7, v6);
  v12 = (int)DXGGLOBAL::IterateAdaptersWithCallback(
               (__int64)Global,
               (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigDestroySimulatedMonitors,
               (__int64)&v29,
               4);
  if ( (a1 & 1) == 0 )
  {
    v20 = WdLogNewEntry5_WdEvent(v11, v10);
    *(_QWORD *)(v20 + 24) = a1;
    *(_QWORD *)(v20 + 32) = v12;
    WdLogEvent5_WdEvent(v20);
    return (unsigned int)v12;
  }
  *(_DWORD *)v8 = 0;
  *((_DWORD *)v8 + 1) = 0;
  *((_DWORD *)v8 + 2) = 0;
  v13 = DXGGLOBAL::GetGlobal(v11, v10);
  v14 = DXGGLOBAL::IterateAdaptersWithCallback(
          (__int64)v13,
          (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigCountMonitorsCallback,
          (__int64)v8,
          4);
  v12 = v14;
  if ( v14 < 0 )
  {
    v21 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v21 + 24) = v12;
    WdLogEvent5_WdWarning(v21);
    return (unsigned int)v12;
  }
  if ( *(_DWORD *)v8 )
  {
    if ( *(_DWORD *)v8 > 1u )
    {
      if ( *((_DWORD *)v8 + 2) )
        *((_DWORD *)v8 + 8) |= 2u;
      v29 = 5LL;
      v30 = a3;
      v28 = DXGGLOBAL::GetGlobal(v16, v15);
      LODWORD(v12) = DXGGLOBAL::IterateAdaptersWithCallback(
                       (__int64)v28,
                       (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigDestroySimulatedMonitors,
                       (__int64)&v29,
                       4);
    }
    return (unsigned int)v12;
  }
  if ( *((_DWORD *)v8 + 2) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v16, v15);
    *(_QWORD *)(v22 + 24) = 2657LL;
    WdLogEvent5_WdAssertion(v22);
  }
  *((_DWORD *)v8 + 8) |= 1u;
  v23 = *((unsigned int *)v8 + 5);
  if ( (_DWORD)v23 != -1 )
  {
    LOBYTE(v18) = *((_BYTE *)v8 + 30);
    v32 = 0;
    LODWORD(v12) = DisplayConfigHelperCreateSimulateMonitor((char *)v8 + 12, v23, 5LL, v18, &v32, a3, v29, v30);
    if ( (int)v12 < 0 || !v32 )
    {
LABEL_24:
      if ( (a1 & 4) != 0 )
      {
        v27 = DXGGLOBAL::GetGlobal(v26, v25);
        DXGGLOBAL::IterateAdaptersWithCallback(
          (__int64)v27,
          (__int64 (__fastcall *)(_QWORD *, __int64))InvalidateChildRelationsOnAdapterCallback,
          0LL,
          4);
      }
      return (unsigned int)v12;
    }
    if ( (a1 & 4) != 0 )
    {
      *((_BYTE *)v8 + 26) = 0;
      goto LABEL_24;
    }
    return (unsigned int)v12;
  }
  v24 = WdLogNewEntry5_WdWarning(v16, v23, v17);
  *(_QWORD *)(v24 + 24) = a1;
  WdLogEvent5_WdWarning(v24);
  return 3223191554LL;
}
