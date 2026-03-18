/*
 * XREFs of ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02925C8
 * Callers:
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C02911A8 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0008E58 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0011F0C (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00E8464 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00E8F0C (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00EB9C0 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0116E44 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C011739C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C013304C (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C013A7F8 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C014BB30 (DxgkInvalidateMonitorConnections.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014BC90 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C0293074 (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MON.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C02D9850 (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C02E6478 (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C02EBFFC (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 */

__int64 __fastcall HandleMonitorDepartureCase(
        __int64 a1,
        const struct _LUID *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  __int64 v7; // r13
  __int64 v9; // r12
  struct DXGGLOBAL *Global; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rax
  DXGGLOBAL *v18; // rax
  struct DXGADAPTER *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  DXGADAPTER *v22; // r15
  _QWORD *v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r14
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct DXGGLOBAL *v32; // rax
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r14
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  _QWORD *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  struct CCD_BTL *v48; // rax
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r14
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  unsigned int v56; // r14d
  __int64 v57; // rax
  int PathDescriptorByTarget; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rsi
  int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rax
  int v69; // eax
  _QWORD *v70; // rax
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rax
  unsigned __int8 v77[8]; // [rsp+30h] [rbp-D0h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v78; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v79; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v80[76]; // [rsp+50h] [rbp-B0h] BYREF
  int v81; // [rsp+9Ch] [rbp-64h]
  int v82; // [rsp+A0h] [rbp-60h]
  _BYTE v83[144]; // [rsp+B0h] [rbp-50h] BYREF

  v7 = a4;
  v9 = a3;
  v78 = a6;
  if ( a4 == 10 && a5 == 2 )
  {
    *(_BYTE *)(a1 + 25) = 0;
    Global = DXGGLOBAL::GetGlobal(2LL, (__int64)a2);
    v11 = DXGGLOBAL::IterateAdaptersWithCallback(
            (__int64)Global,
            (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigCountMonitorsCallback,
            a1,
            (int)v7 - 6);
    v15 = v11;
    if ( v11 < 0 )
    {
      v16 = WdLogNewEntry5_WdWarning(v13, v12, v14);
      *(_QWORD *)(v16 + 24) = v15;
      WdLogEvent5_WdWarning(v16);
      return (unsigned int)v15;
    }
    *(_BYTE *)(a1 + 26) = 1;
    return 0LL;
  }
  if ( a5 == 5 )
  {
    v18 = DXGGLOBAL::GetGlobal(2LL, (__int64)a2);
    v19 = DXGGLOBAL::ReferenceAdapterByLuid(v18, *a2, &v79);
    v22 = v19;
    if ( v19 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v83, v19, 0LL);
      DXGADAPTER::ReleaseReferenceNoTracking(v22);
      v24 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v83, 0LL);
      v27 = v24;
      if ( v24 >= 0 )
      {
        v77[0] = 0;
        if ( DmmIsTargetInClientVidPnTopology(v22, v9, v77) >= 0 && !v77[0] )
          *(_BYTE *)(a1 + 26) = 0;
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v83);
        *(_BYTE *)(a1 + 25) = 0;
        v32 = DXGGLOBAL::GetGlobal(v31, v30);
        v33 = DXGGLOBAL::IterateAdaptersWithCallback(
                (__int64)v32,
                (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigCountMonitorsCallback,
                a1,
                4);
        v27 = v33;
        if ( v33 >= 0 )
        {
          LODWORD(v27) = 0;
        }
        else
        {
          v36 = WdLogNewEntry5_WdWarning(v34, v29, v35);
          *(_QWORD *)(v36 + 24) = v27;
          WdLogEvent5_WdWarning(v36);
        }
      }
      else
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25);
        v28[3] = a2->HighPart;
        v28[4] = a2->LowPart;
        v28[5] = v27;
        WdLogEvent5_WdError(v28);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v83, v29);
      return (unsigned int)v27;
    }
    else
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
      v23[3] = a2->HighPart;
      v23[4] = a2->LowPart;
      v23[5] = -1073741811LL;
      WdLogEvent5_WdError(v23);
      return 3221225485LL;
    }
  }
  v37 = DxgkInvalidateMonitorConnections(2uLL);
  v40 = v37;
  if ( v37 < 0 )
  {
    v41 = WdLogNewEntry5_WdEvent(v39, v38);
    *(_QWORD *)(v41 + 24) = v40;
    WdLogEvent5_WdEvent(v41);
  }
  if ( (int)MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(a1, a2, (unsigned int)v9) < 0 )
  {
    v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v43, v42, v44);
    v45[3] = a2->HighPart;
    v45[4] = a2->LowPart;
    v45[5] = v9;
    WdLogEvent5_WdWarning(v45);
  }
  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 26) = 1;
    *(_BYTE *)(a1 + 31) = 1;
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v80, 8u, 0);
    v48 = CCD_BTL::Global(v47, v46);
    v49 = CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)v80, (struct CCD_BTL *)((char *)v48 + 8));
    v52 = v49;
    if ( v49 < 0 )
    {
      v70 = (_QWORD *)WdLogNewEntry5_WdError(v51, v50);
      v70[3] = v52;
      v70[4] = a2->HighPart;
      v70[5] = a2->LowPart;
      v70[6] = v9;
      v70[7] = v7;
      WdLogEvent5_WdError(v70);
      DxgkLogCodePointPacket(0x3Du, v52, 0, 0, (__int64)*a2);
      goto LABEL_37;
    }
    v56 = *((_DWORD *)DXGGLOBAL::GetGlobal(v51, v50) + 412);
    if ( v56 > 1 )
    {
      v57 = WdLogNewEntry5_WdWarning(v54, v53, v55);
      *(_QWORD *)(v57 + 24) = 3177LL;
      WdLogEvent5_WdWarning(v57);
      v78 = 0LL;
      DxgkLogCodePointPacket(0x52u, v56, 0, 0, 0LL);
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v80);
      return 0LL;
    }
    if ( *(_DWORD *)(a1 + 20) == -1 )
      goto LABEL_37;
    *(_BYTE *)(a1 + 25) = 0;
    PathDescriptorByTarget = CCD_TOPOLOGY::FindPathDescriptorByTarget((CCD_TOPOLOGY *)v80, a2, v9, 0LL);
    v62 = PathDescriptorByTarget;
    if ( PathDescriptorByTarget == -1073741275 )
    {
      v81 = 1;
      v82 = 4;
      v63 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v80, 0, 0);
      v62 = v63;
      if ( v63 >= 0 )
      {
        v69 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v80, 0LL, v66, v67);
        v62 = v69;
        if ( v69 >= 0 )
        {
          *(_DWORD *)(a1 + 32) |= 0x20u;
          *(_BYTE *)(a1 + 26) = 0;
          *(_BYTE *)(a1 + 31) = 0;
LABEL_37:
          CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v80);
          goto LABEL_38;
        }
      }
      v68 = WdLogNewEntry5_WdWarning(v65, v64, v66);
    }
    else
    {
      if ( PathDescriptorByTarget >= 0 )
        goto LABEL_37;
      v68 = WdLogNewEntry5_WdWarning(v60, v59, v61);
      *(_QWORD *)(v68 + 32) = v9;
    }
    *(_QWORD *)(v68 + 24) = v62;
    WdLogEvent5_WdWarning(v68);
    goto LABEL_37;
  }
LABEL_38:
  if ( *(_BYTE *)(a1 + 30) )
  {
    *(_BYTE *)(a1 + 25) = 0;
    *(_DWORD *)(a1 + 20) = v9;
  }
  v71 = DisplayConfigHandleMonitorInvalidation(5LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, v78);
  v74 = v71;
  if ( v71 < 0 )
  {
    v75 = WdLogNewEntry5_WdEvent(v73, v72);
    *(_QWORD *)(v75 + 24) = v74;
    WdLogEvent5_WdEvent(v75);
    LODWORD(v74) = 0;
  }
  v76 = WdLogNewEntry5_WdEvent(v73, v72);
  *(_QWORD *)(v76 + 24) = (int)v74;
  WdLogEvent5_WdEvent(v76);
  return (unsigned int)v74;
}
