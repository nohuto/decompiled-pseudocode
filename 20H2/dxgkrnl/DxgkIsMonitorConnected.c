/*
 * XREFs of DxgkIsMonitorConnected @ 0x1C0222ED0
 * Callers:
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C02EDC94 (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C011BF7C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorGetMonitorHandle @ 0x1C01251F0 (MonitorGetMonitorHandle.c)
 *     MonitorReleaseMonitorHandle @ 0x1C012B11C (MonitorReleaseMonitorHandle.c)
 *     MonitorGetUsageClass @ 0x1C01437F8 (MonitorGetUsageClass.c)
 *     MonitorIsMonitorConnected @ 0x1C015BC84 (MonitorIsMonitorConnected.c)
 */

__int64 __fastcall DxgkIsMonitorConnected(struct _LUID a1, __int64 a2, char a3, char a4, bool *a5)
{
  __int64 v6; // r15
  __int64 v9; // rax
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 UsageClass; // rdi
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD *v28; // rax
  __int64 v29; // rax
  int IsMonitorConnected; // eax
  __int64 v31; // rcx
  __int64 v32; // r8
  int MonitorHandle; // eax
  __int64 HighPart; // rcx
  __int64 v35; // rbx
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // [rsp+38h] [rbp-91h] BYREF
  struct _LUID v39; // [rsp+40h] [rbp-89h] BYREF
  unsigned __int64 v40[2]; // [rsp+48h] [rbp-81h] BYREF
  _BYTE v41[144]; // [rsp+58h] [rbp-71h] BYREF

  v6 = (unsigned int)a2;
  v39 = a1;
  if ( !a5 )
  {
    v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdError)(a1, a2);
    *(_QWORD *)(v9 + 24) = 9312LL;
LABEL_3:
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
  *a5 = 0;
  Global = DXGGLOBAL::GetGlobal(*(_QWORD *)&a1, a2);
  v12 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, v40);
  v15 = (__int64)v12;
  if ( !v12 )
  {
    v9 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v9 + 24) = v39.HighPart;
    *(_QWORD *)(v9 + 32) = a1.LowPart;
    goto LABEL_3;
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(v12) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v17, v16);
    *(_QWORD *)(v18 + 24) = 9333LL;
    WdLogEvent5_WdAssertion(v18);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v41, (struct DXGADAPTER *const)v15, 0LL);
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v15);
  if ( *(_QWORD *)(v15 + 2696) )
  {
    v24 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v41, 0LL);
    UsageClass = v24;
    if ( v24 >= 0 )
    {
      if ( *(_BYTE *)(v15 + 2609) )
      {
        v29 = WdLogNewEntry5_WdEvent(v26, v25);
        *(_QWORD *)(v29 + 24) = v39.HighPart;
        *(_QWORD *)(v29 + 32) = a1.LowPart;
        WdLogEvent5_WdEvent(v29);
        LODWORD(UsageClass) = -1073741130;
        goto LABEL_23;
      }
      LOBYTE(v27) = a3;
      IsMonitorConnected = MonitorIsMonitorConnected(v15, (unsigned int)v6, v27, a5);
      UsageClass = IsMonitorConnected;
      if ( IsMonitorConnected < 0 )
        goto LABEL_18;
      if ( !*a5 || a4 )
        goto LABEL_23;
      v40[0] = 0LL;
      LOBYTE(v32) = a3;
      MonitorHandle = MonitorGetMonitorHandle(
                        v15,
                        (unsigned int)v6,
                        v32,
                        DxgkIsMonitorConnected,
                        (struct HDXGMONITOR__ **)v40);
      UsageClass = MonitorHandle;
      if ( MonitorHandle >= 0 )
      {
        v35 = v40[0];
        v39.LowPart = 0;
        LOBYTE(v38) = 0;
        UsageClass = (int)MonitorGetUsageClass((struct HDXGMONITOR__ *)v40[0], &v39, &v38);
        MonitorReleaseMonitorHandle(v15, v35, DxgkIsMonitorConnected, v36);
        if ( (int)UsageClass >= 0 )
        {
          *a5 = v39.LowPart == 0;
          goto LABEL_23;
        }
        v28 = (_QWORD *)WdLogNewEntry5_WdError(v37, v22);
        v28[3] = v35;
        v28[4] = UsageClass;
      }
      else
      {
LABEL_18:
        v28 = (_QWORD *)WdLogNewEntry5_WdError(v31, v22);
        HighPart = v39.HighPart;
        v28[3] = v6;
        v28[4] = HighPart;
        v28[5] = a1.LowPart;
        v28[6] = UsageClass;
      }
    }
    else
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25);
      v28[3] = v39.HighPart;
      v28[4] = a1.LowPart;
      v28[5] = UsageClass;
    }
    WdLogEvent5_WdError(v28);
    goto LABEL_23;
  }
  v21 = WdLogNewEntry5_WdError(v20, v19);
  *(_QWORD *)(v21 + 24) = v39.HighPart;
  *(_QWORD *)(v21 + 32) = a1.LowPart;
  WdLogEvent5_WdError(v21);
  LODWORD(UsageClass) = -1073741811;
LABEL_23:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v41, v22);
  return (unsigned int)UsageClass;
}
