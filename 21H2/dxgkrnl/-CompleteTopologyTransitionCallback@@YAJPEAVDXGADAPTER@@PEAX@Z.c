/*
 * XREFs of ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01E17E0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C000A6FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C01A30A0 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C01B4890 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01B6930 (-_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorIsMonitorConnected @ 0x1C01E1978 (MonitorIsMonitorConnected.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C03AFD5C (MonitorCreateSimulatedMonitor.c)
 */

__int64 __fastcall CompleteTopologyTransitionCallback(struct DXGADAPTER *this, _QWORD *a2)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v2; // r12
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rax
  unsigned int v10; // esi
  __int64 v11; // r15
  __int64 v12; // r8
  __int64 v13; // rax
  MONITOR_MGR *v14; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // [rsp+20h] [rbp-A9h]
  int v21; // [rsp+30h] [rbp-99h]
  _BYTE v22[4]; // [rsp+50h] [rbp-79h] BYREF
  unsigned int v23; // [rsp+54h] [rbp-75h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v24; // [rsp+58h] [rbp-71h] BYREF
  _BYTE v25[144]; // [rsp+60h] [rbp-69h] BYREF

  v2 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2[1];
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v25, this, 0LL);
  v5 = COREADAPTERACCESS::AcquireExclusive((__int64)v25);
  v8 = 0;
  if ( v5 < 0 )
  {
    if ( v5 == -1073741130 )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
      v16[3] = this;
      v16[4] = *((int *)this + 102);
      v16[5] = *((unsigned int *)this + 101);
    }
    else
    {
      v8 = v5;
    }
  }
  else
  {
    v9 = *((_QWORD *)this + 349);
    if ( v9 )
    {
      v10 = 0;
      if ( *(_DWORD *)(v9 + 96) )
      {
        do
        {
          v23 = -1;
          v11 = 0LL;
          while ( 1 )
          {
            v12 = v11++;
            if ( (int)DmmEnumClientVidPnPathTargetsFromSource(this, v10, v12, &v23) < 0 || v23 == -1 )
              break;
            v24 = D3DKMDT_VOT_UNINITIALIZED;
            DmmGetVideoOutputTechnology(this, v23, 0LL, &v24);
            if ( v24 == D3DKMDT_VOT_MIRACAST )
            {
              if ( *(_DWORD *)a2 || *((_DWORD *)a2 + 1) )
              {
                WdLogSingleEntry1(1LL, 7991LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"(pTransContext->ActiveMiracastAdapterLuid.LowPart == 0) && (pTransContext->ActiveMiracastAdap"
                            "terLuid.HighPart == 0)",
                  7991LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              *a2 = *(_QWORD *)((char *)this + 404);
            }
            v22[0] = 0;
            if ( (int)MonitorIsMonitorConnected(this, v23, 0LL, v22) >= 0 && !v22[0] )
            {
              v19 = WdLogNewEntry5_WdTrace(v18, v17);
              *(_QWORD *)(v19 + 24) = this;
              *(_QWORD *)(v19 + 32) = v23;
              MonitorCreateSimulatedMonitor(this, v20, 0, v21, (__int64)v2);
            }
          }
          ++v10;
        }
        while ( v10 < *(_DWORD *)(*((_QWORD *)this + 349) + 96LL) );
      }
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
        WdLogSingleEntry0(1LL);
      v13 = *((_QWORD *)this + 349);
      if ( v13 && (v14 = *(MONITOR_MGR **)(v13 + 112)) != 0LL )
        MONITOR_MGR::_CleanUpFromSimulatedMonitor(v14, v2);
      else
        WdLogSingleEntry1(2LL, this);
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v25);
  return v8;
}
