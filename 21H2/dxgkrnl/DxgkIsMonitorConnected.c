/*
 * XREFs of DxgkIsMonitorConnected @ 0x1C02D2120
 * Callers:
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C03AE4D0 (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     MonitorReleaseMonitorHandle @ 0x1C01A05B4 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C01A0DA4 (MonitorGetMonitorHandle.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01A442C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorGetUsageClass @ 0x1C01D7358 (MonitorGetUsageClass.c)
 *     MonitorIsMonitorConnected @ 0x1C01E1978 (MonitorIsMonitorConnected.c)
 */

__int64 __fastcall DxgkIsMonitorConnected(struct _LUID a1, unsigned int a2, char a3, char a4, bool *a5)
{
  __int64 v6; // r14
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v10; // rax
  __int64 v11; // rdi
  __int64 LowPart; // rdi
  __int64 HighPart; // rbx
  const wchar_t *v14; // r9
  __int64 v15; // rsi
  __int64 UsageClass; // r15
  int v17; // eax
  int IsMonitorConnected; // eax
  const wchar_t *v19; // r9
  int MonitorHandle; // eax
  __int64 v21; // [rsp+28h] [rbp-D8h]
  __int64 v22; // [rsp+30h] [rbp-D0h]
  __int64 v23; // [rsp+38h] [rbp-C8h]
  _BYTE v24[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct _LUID v25; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v26[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v27[144]; // [rsp+70h] [rbp-90h] BYREF

  v24[0] = a4;
  v6 = a2;
  v25 = a1;
  if ( !a5 )
  {
    WdLogSingleEntry1(2LL, 9441LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specifies a NULL pHasMonitorConnected in DxgkIsMonitorConnected function.",
      9441LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  *a5 = 0;
  Global = DXGGLOBAL_GetGlobal();
  v10 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, v26);
  v11 = (__int64)v10;
  if ( !v10 )
  {
    WdLogSingleEntry2(2LL, v25.HighPart, a1.LowPart);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkIsMonitorConnected function.",
      v25.HighPart,
      a1.LowPart,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(v10) )
  {
    WdLogSingleEntry1(1LL, 9462LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!pAdapter->IsCoreResourceSharedOwner()",
      9462LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v27, (struct DXGADAPTER *const)v11, 0LL);
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v11);
  if ( !*(_QWORD *)(v11 + 2792) )
  {
    LowPart = a1.LowPart;
    HighPart = v25.HighPart;
    WdLogSingleEntry2(2LL, v25.HighPart, (unsigned int)LowPart);
    v14 = L"Caller specified adapter (0x%I64x%08I64x) in DxgkIsMonitorConnected function is NOT a display adapter.";
    v15 = 0LL;
    LODWORD(UsageClass) = -1073741811;
LABEL_12:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v14, HighPart, LowPart, v15, 0LL, 0LL);
    goto LABEL_26;
  }
  v17 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v27, 0LL);
  LODWORD(UsageClass) = v17;
  if ( v17 < 0 )
  {
    LowPart = a1.LowPart;
    HighPart = v25.HighPart;
    v15 = v17;
    WdLogSingleEntry3(2LL, v25.HighPart, (unsigned int)LowPart, v17);
    v14 = L"Failed to acquire shared access on adapter luid (0x%I64x::0x%I64x) with status (0x%I64x)";
    goto LABEL_12;
  }
  if ( !*(_BYTE *)(v11 + 2705) )
  {
    IsMonitorConnected = MonitorIsMonitorConnected(v11, (unsigned int)v6, a3, a5);
    UsageClass = IsMonitorConnected;
    if ( IsMonitorConnected >= 0 )
    {
      if ( !*a5 || v24[0] )
        goto LABEL_26;
      v26[0] = 0LL;
      MonitorHandle = MonitorGetMonitorHandle(v11, (unsigned int)v6, a3, DxgkIsMonitorConnected, (DXGMONITOR **)v26);
      UsageClass = MonitorHandle;
      if ( MonitorHandle >= 0 )
      {
        v6 = v26[0];
        v25.LowPart = 0;
        v24[0] = 0;
        UsageClass = (int)MonitorGetUsageClass(v26[0], &v25, v24);
        MonitorReleaseMonitorHandle(v11, v6, DxgkIsMonitorConnected);
        if ( (int)UsageClass >= 0 )
        {
          *a5 = v25.LowPart == 0;
          goto LABEL_26;
        }
        WdLogSingleEntry2(2LL, v6, UsageClass);
        v19 = L"Failed to check monitor HMD state on monitor 0x%I64x with status (0x%I64x)";
        v23 = 0LL;
        v22 = 0LL;
        v21 = UsageClass;
      }
      else
      {
        WdLogSingleEntry4(2LL, v6, v25.HighPart, a1.LowPart, MonitorHandle);
        v19 = L"Failed to get monitor handle on target 0x%I64x from adapter 0x%I64x0x%I64x with status (0x%I64x)";
        v23 = UsageClass;
        v22 = a1.LowPart;
        v21 = v25.HighPart;
      }
    }
    else
    {
      WdLogSingleEntry4(2LL, v6, v25.HighPart, a1.LowPart, IsMonitorConnected);
      v19 = L"Failed to check monitor connectivity on target 0x%I64x from adapter 0x%I64x0x%I64x with status (0x%I64x)";
      v23 = UsageClass;
      v22 = a1.LowPart;
      v21 = v25.HighPart;
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v19, v6, v21, v22, v23, 0LL);
    goto LABEL_26;
  }
  WdLogSingleEntry2(4LL, v25.HighPart, a1.LowPart);
  LODWORD(UsageClass) = -1073741130;
LABEL_26:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v27);
  return (unsigned int)UsageClass;
}
