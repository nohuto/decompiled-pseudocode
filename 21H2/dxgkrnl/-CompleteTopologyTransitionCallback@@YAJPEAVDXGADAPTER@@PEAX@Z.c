/*
 * XREFs of ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01617D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00024D8 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007578 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009DE0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B73C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C0124590 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C0124B5C (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0161968 (-_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorIsMonitorConnected @ 0x1C0161DE4 (MonitorIsMonitorConnected.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C02F31C4 (MonitorCreateSimulatedMonitor.c)
 */

__int64 __fastcall CompleteTopologyTransitionCallback(struct DXGADAPTER *a1, _QWORD *a2)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v2; // r12
  int v5; // r8d
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  __int64 v12; // rax
  unsigned int v13; // esi
  unsigned __int64 v14; // r15
  int v15; // eax
  __int64 v16; // rdx
  MONITOR_MGR *v17; // rcx
  __int64 v18; // rax
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // [rsp+20h] [rbp-99h]
  int v32; // [rsp+30h] [rbp-89h]
  _BYTE v33[4]; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v34; // [rsp+44h] [rbp-75h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v35; // [rsp+48h] [rbp-71h] BYREF
  _BYTE v36[144]; // [rsp+50h] [rbp-69h] BYREF

  v2 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2[1];
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v36, a1, 0LL);
  v6 = COREADAPTERACCESS::AcquireExclusive((__int64)v36, (unsigned int)(v5 + 1));
  v11 = 0;
  if ( v6 < 0 )
  {
    if ( v6 == -1073741130 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
      v20[3] = a1;
      v20[4] = *((int *)a1 + 80);
      v20[5] = *((unsigned int *)a1 + 79);
    }
    else
    {
      v11 = v6;
    }
  }
  else
  {
    v12 = *((_QWORD *)a1 + 337);
    if ( v12 )
    {
      v13 = 0;
      if ( *(_DWORD *)(v12 + 80) )
      {
        do
        {
          v34 = -1;
          v14 = 0LL;
          while ( 1 )
          {
            v15 = DmmEnumClientVidPnPathTargetsFromSource(a1, v13, v14++, &v34);
            if ( v15 < 0 || v34 == -1 )
              break;
            v35 = D3DKMDT_VOT_UNINITIALIZED;
            DmmGetVideoOutputTechnology(a1, v34, 0LL, &v35);
            if ( v35 == D3DKMDT_VOT_MIRACAST )
            {
              if ( *(_DWORD *)a2 || *((_DWORD *)a2 + 1) )
              {
                v27 = WdLogNewEntry5_WdAssertion(v22, v21);
                *(_QWORD *)(v27 + 24) = 7547LL;
                WdLogEvent5_WdAssertion(v27);
              }
              *a2 = *(_QWORD *)((char *)a1 + 316);
            }
            v33[0] = 0;
            if ( (int)MonitorIsMonitorConnected(a1, v34, 0LL, v33) >= 0 && !v33[0] )
            {
              v28 = WdLogNewEntry5_WdTrace(v24, v23, v25, v26);
              *(_QWORD *)(v28 + 24) = a1;
              *(_QWORD *)(v28 + 32) = v34;
              MonitorCreateSimulatedMonitor(a1, v31, 0, v32, (__int64)v2);
            }
          }
          ++v13;
        }
        while ( v13 < *(_DWORD *)(*((_QWORD *)a1 + 337) + 80LL) );
      }
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
      {
        v29 = WdLogNewEntry5_WdAssertion(v17, v16);
        WdLogEvent5_WdAssertion(v29);
      }
      v18 = *((_QWORD *)a1 + 337);
      if ( v18 && (v17 = *(MONITOR_MGR **)(v18 + 96)) != 0LL )
      {
        MONITOR_MGR::_CleanUpFromSimulatedMonitor(v17, v2);
      }
      else
      {
        v30 = WdLogNewEntry5_WdError(v17, v16);
        *(_QWORD *)(v30 + 24) = a1;
        WdLogEvent5_WdError(v30);
      }
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v36, v7);
  return v11;
}
