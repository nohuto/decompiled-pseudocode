/*
 * XREFs of ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F0610
 * Callers:
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01DAF7C (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F254C (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C000A6FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01A442C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C0206098 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C039C424 (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C03AFD5C (MonitorCreateSimulatedMonitor.c)
 */

__int64 __fastcall DisplayConfigHelperCreateSimulateMonitor(
        struct _LUID *a1,
        unsigned int a2,
        int a3,
        char a4,
        unsigned __int8 *a5,
        __int64 a6)
{
  __int64 v8; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGADAPTER *v14; // rbx
  __int64 v15; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int IsTargetInClientVidPnTopology; // edi
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  int v25; // [rsp+20h] [rbp-108h]
  int v26; // [rsp+30h] [rbp-F8h]
  unsigned __int8 v27[8]; // [rsp+40h] [rbp-E8h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-E0h] BYREF
  _BYTE v29[144]; // [rsp+50h] [rbp-D8h] BYREF

  v8 = a2;
  Global = DXGGLOBAL_GetGlobal();
  v11 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v28);
  v14 = v11;
  if ( v11 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v29, v11, 0LL);
    v17 = COREADAPTERACCESS::AcquireExclusive((__int64)v29);
    IsTargetInClientVidPnTopology = v17;
    if ( v17 >= 0 )
    {
      if ( a5 )
      {
        IsTargetInClientVidPnTopology = DmmIsTargetInClientVidPnTopology(v14, v8, a5);
        if ( IsTargetInClientVidPnTopology < 0 )
        {
          v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v22);
          IsTargetInClientVidPnTopology = 0;
          v24[3] = v8;
          v24[4] = v14;
          v24[5] = *((int *)v14 + 102);
          v24[6] = *((unsigned int *)v14 + 101);
        }
      }
      v27[0] = 0;
      if ( a4 || (int)DmmIsTargetForceable(v14, v8, v27, a3) >= 0 && v27[0] )
        IsTargetInClientVidPnTopology = MonitorCreateSimulatedMonitor(v14, v25, a4, v26, a6);
    }
    else
    {
      if ( v17 == -1073741130 )
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18);
        v21[3] = v14;
        v21[4] = *((int *)v14 + 102);
        v21[5] = *((unsigned int *)v14 + 101);
      }
      IsTargetInClientVidPnTopology = 0;
    }
    DXGADAPTER::ReleaseReference(v14);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
    return (unsigned int)IsTargetInClientVidPnTopology;
  }
  else
  {
    v15 = WdLogNewEntry5_WdTrace(v13, v12);
    *(_QWORD *)(v15 + 24) = a1->HighPart;
    *(_QWORD *)(v15 + 32) = a1->LowPart;
    return 3223191554LL;
  }
}
