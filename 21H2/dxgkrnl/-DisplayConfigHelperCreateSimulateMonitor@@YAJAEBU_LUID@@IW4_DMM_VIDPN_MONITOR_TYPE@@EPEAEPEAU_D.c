/*
 * XREFs of ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02959D0
 * Callers:
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015F170 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0297434 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00024D8 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004130 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007578 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009DE0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C011F70C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C02DDF78 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C02DE110 (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C02F31C4 (MonitorCreateSimulatedMonitor.c)
 */

__int64 __fastcall DisplayConfigHelperCreateSimulateMonitor(
        struct _LUID *a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        unsigned __int8 *a5,
        __int64 a6)
{
  __int64 v8; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DXGADAPTER *v16; // rbx
  __int64 v17; // rax
  int v19; // r8d
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int IsTargetInClientVidPnTopology; // edi
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // rax
  __int64 v32; // rdx
  int v33; // [rsp+20h] [rbp-108h]
  int v34; // [rsp+30h] [rbp-F8h]
  _BYTE v35[8]; // [rsp+40h] [rbp-E8h] BYREF
  unsigned __int64 v36; // [rsp+48h] [rbp-E0h] BYREF
  _BYTE v37[144]; // [rsp+50h] [rbp-D8h] BYREF

  v8 = (unsigned int)a2;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  v11 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v36);
  v16 = v11;
  if ( v11 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v37, v11, 0LL);
    v20 = COREADAPTERACCESS::AcquireExclusive((__int64)v37, (unsigned int)(v19 + 2));
    IsTargetInClientVidPnTopology = v20;
    if ( v20 >= 0 )
    {
      if ( a5 )
      {
        IsTargetInClientVidPnTopology = DmmIsTargetInClientVidPnTopology(v16, v8, a5);
        if ( IsTargetInClientVidPnTopology < 0 )
        {
          v31 = (_QWORD *)WdLogNewEntry5_WdTrace(v28, v27, v29, v30);
          IsTargetInClientVidPnTopology = 0;
          v31[3] = v8;
          v31[4] = v16;
          v31[5] = *((int *)v16 + 80);
          v31[6] = *((unsigned int *)v16 + 79);
        }
      }
      v35[0] = 0;
      if ( a4 || (int)DmmIsTargetForceable(v16, (unsigned int)v8, v35, a3) >= 0 && v35[0] )
        IsTargetInClientVidPnTopology = MonitorCreateSimulatedMonitor(v16, v33, a4, v34, a6);
    }
    else
    {
      if ( v20 == -1073741130 )
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v21, v23, v24);
        v26[3] = v16;
        v26[4] = *((int *)v16 + 80);
        v26[5] = *((unsigned int *)v16 + 79);
      }
      IsTargetInClientVidPnTopology = 0;
    }
    DXGADAPTER::ReleaseReference(v16);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v37, v32);
    return (unsigned int)IsTargetInClientVidPnTopology;
  }
  else
  {
    v17 = WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
    *(_QWORD *)(v17 + 24) = a1->HighPart;
    *(_QWORD *)(v17 + 32) = a1->LowPart;
    return 3223191554LL;
  }
}
