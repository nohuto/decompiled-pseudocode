/*
 * XREFs of ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E4B54
 * Callers:
 *     ?DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E4828 (-DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z @ 0x1C02E48C8 (-HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00056AC (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0007E24 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C000B8E8 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000D178 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0019DF8 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C001B104 (-SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00E2438 (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116C30 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C01262F0 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C0135DE0 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C013D324 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C013ED58 (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C013F584 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C014D3A8 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 *     ?SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z @ 0x1C016CFB4 (-SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C016EC60 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02143C8 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?SetUnplugHiding@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C02E6854 (-SetUnplugHiding@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C02E68AC (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 */

__int64 __fastcall VIDPN_MGR::UpdateTargetLinkTrainingStatus(
        VIDPN_MGR *this,
        struct _DXGK_CONNECTION_CHANGE *a2,
        char a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4,
        unsigned __int8 a5)
{
  __int64 v5; // r14
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // r14
  __int64 v11; // rdx
  unsigned int v12; // ebx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DMMVIDEOPRESENTTARGET *v16; // rdi
  __int64 v17; // rax
  unsigned int TargetLinkTrainingStatus; // eax
  struct _LUID *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned __int8 v23; // r12
  __int64 v24; // r15
  __int64 v25; // rax
  ULONGLONG ConnectionChangeId; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rax
  struct DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  const struct DMMVIDPNTOPOLOGY *v37; // r11
  DMMVIDPNPRESENTPATH *v38; // r13
  __int64 v39; // rax
  __int64 v40; // rdx
  ULONGLONG v41; // rcx
  struct DXGGLOBAL *v42; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned __int8 v45; // r8
  __int64 v46; // rax
  __int64 v47; // r12
  int MostImportantVidPnPathTargetsFromSource; // eax
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rcx
  char v55; // r13
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rbx
  _QWORD *v60; // rax
  unsigned __int8 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // rcx
  PERESOURCE **v64; // rcx
  _QWORD *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  DXGSESSIONMGR *v70; // rsi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rax
  ULONGLONG v76; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v77; // [rsp+48h] [rbp-20h] BYREF
  __int64 v78[3]; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v79; // [rsp+B0h] [rbp+48h] BYREF
  int v80; // [rsp+B8h] [rbp+50h] BYREF
  struct _LUID *v81; // [rsp+C0h] [rbp+58h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v82; // [rsp+C8h] [rbp+60h]

  v82 = a4;
  LOBYTE(v81) = a3;
  v5 = *((_QWORD *)this + 1);
  if ( !v5 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v8);
    v5 = *((_QWORD *)this + 1);
  }
  v9 = *((_DWORD *)a2 + 2);
  v10 = *(_QWORD *)(v5 + 16);
  v11 = v9 & 0xFFFFFF;
  v12 = HIBYTE(v9) & 0xF;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(*((DMMVIDEOPRESENTTARGETSET **)this + 10), v11);
  v16 = TargetById;
  if ( !TargetById )
  {
    v17 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v17 + 24) = *((_DWORD *)a2 + 2) & 0xFFFFFFLL;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    return 3221225485LL;
  }
  v76 = 0LL;
  TargetLinkTrainingStatus = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus((__int64)TargetById, &v76);
  v23 = a5;
  v24 = TargetLinkTrainingStatus;
  if ( a5 )
  {
    if ( v12 != 8 )
    {
      ConnectionChangeId = a2->ConnectionChangeId;
      v12 = 13;
      goto LABEL_25;
    }
    v12 = 12;
  }
  else
  {
    LOBYTE(v20) = (_BYTE)v81;
    if ( !(_BYTE)v81 )
      goto LABEL_11;
    v77 = 0LL;
    DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v10, v20, 0LL, &v77);
    DxgkLogCodePointPacketForSession(
      0x58u,
      v77,
      *((_DWORD *)a2 + 2) & 0xFFFFFF,
      v12,
      a2->ConnectionChangeId,
      *(_QWORD *)(v10 + 316));
  }
  LOBYTE(v20) = (_BYTE)v81;
LABEL_11:
  if ( v76 <= a2->ConnectionChangeId )
  {
    ConnectionChangeId = a2->ConnectionChangeId;
    if ( v76 == a2->ConnectionChangeId )
    {
      if ( v12 == (_DWORD)v24 )
        return 0LL;
      if ( (_DWORD)v24 == 14 || (_DWORD)v24 == 13 )
      {
        if ( v12 == 12 )
        {
          v27 = WdLogNewEntry5_WdDmmEvent(ConnectionChangeId, v20);
          *(_QWORD *)(v27 + 24) = *((_DWORD *)a2 + 2) & 0xFFFFFF;
          WdLogEvent5_WdDmmEvent(v27);
          return 0LL;
        }
        if ( !(_BYTE)v20 )
        {
          v28 = (_QWORD *)WdLogNewEntry5_WdAssertion(ConnectionChangeId, v20);
          v28[3] = v24;
          v28[4] = v10;
          v28[5] = *((_DWORD *)a2 + 2) & 0xFFFFFF;
LABEL_21:
          WdLogEvent5_WdAssertion(v28);
          return 0LL;
        }
        ConnectionChangeId = a2->ConnectionChangeId;
        if ( (_DWORD)v24 != 13 )
        {
          v28 = (_QWORD *)WdLogNewEntry5_WdAssertion(ConnectionChangeId, v20);
          v28[3] = v12;
          v28[4] = v24;
          goto LABEL_21;
        }
      }
    }
LABEL_25:
    *(_BYTE *)(*((_QWORD *)v16 + 67) + 168LL) = v12;
    *(_QWORD *)(*((_QWORD *)v16 + 67) + 160LL) = ConnectionChangeId;
    Global = DXGGLOBAL::GetGlobal(ConnectionChangeId, (__int64)v20);
    QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 172), 0LL, v30, v31);
    if ( v23 )
    {
      DMMVIDEOPRESENTTARGET::SetUnplugHiding(v16, v12 == 12);
    }
    else if ( v12 == (_DWORD)v24 )
    {
      return 0LL;
    }
    v32 = *((_QWORD *)this + 11);
    if ( !v32 )
    {
      v78[0] = 0LL;
LABEL_69:
      auto_rc<DMMVIDPN const>::reset(v78, 0LL);
      return 0LL;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v32 + 32));
    v33 = *((_QWORD *)this + 11);
    v78[0] = v33;
    if ( !v33 )
      goto LABEL_69;
    PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget((DMMVIDPNTOPOLOGY *)(v33 + 96), *((_DWORD *)a2 + 2) & 0xFFFFFF);
    v38 = PathFromTarget;
    if ( !PathFromTarget )
    {
      if ( v23 )
      {
        v39 = WdLogNewEntry5_WdDmmEvent(v36, v35);
        *(_QWORD *)(v39 + 24) = *((_DWORD *)a2 + 2) & 0xFFFFFF;
        *(_QWORD *)(v39 + 32) = v10;
        WdLogEvent5_WdDmmEvent(v39);
        if ( v12 == 12 )
        {
          DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(v16, 1u);
        }
        else
        {
          v41 = a2->ConnectionChangeId;
          *(_BYTE *)(*((_QWORD *)v16 + 67) + 168LL) = 14;
          *(_QWORD *)(*((_QWORD *)v16 + 67) + 160LL) = v41;
          v42 = DXGGLOBAL::GetGlobal(v41, v40);
          QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)v42 + 172), 0LL, v43, v44);
        }
      }
      v45 = v12 == 12;
      goto LABEL_48;
    }
    v46 = *((_QWORD *)PathFromTarget + 11);
    v79 = 0;
    v47 = *(unsigned int *)(v46 + 24);
    MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(v37, v47, &v79);
    v51 = 0x80000000LL;
    v52 = MostImportantVidPnPathTargetsFromSource + 0x80000000;
    if ( (int)v52 >= 0 && MostImportantVidPnPathTargetsFromSource != -1071774919 )
    {
      v53 = WdLogNewEntry5_WdAssertion(v52, 0x80000000LL);
      WdLogEvent5_WdAssertion(v53);
    }
    v54 = *(_QWORD *)(v10 + 2704);
    LOBYTE(v79) = (*((_DWORD *)a2 + 2) & 0xFFFFFF) == v79;
    if ( v54 )
      ADAPTER_RENDER::FlushScheduler(v54, 8, v47, 0);
    if ( v12 == 14 )
    {
      DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v16, v51, v49, v50);
      if ( !*((_BYTE *)v16 + 418) )
      {
        v45 = 0;
LABEL_48:
        DMMVIDEOPRESENTTARGET::SetTargetActivated(v16, 0LL, v45);
        goto LABEL_69;
      }
      DMMVIDPNPRESENTPATH::SetDriverGammaRamp(v38, 0LL);
      v55 = v79;
      if ( !(_BYTE)v79 )
        goto LABEL_69;
      ADAPTER_DISPLAY::SetVidPnPrimaryTarget(*(ADAPTER_DISPLAY **)(v10 + 2696), v47, *((_DWORD *)a2 + 2) & 0xFFFFFF);
      v56 = ADAPTER_DISPLAY::SetVidPnSourceActive(*(PERESOURCE ***)(v10 + 2696), v47, 1, 0, (unsigned __int8)v81);
      v59 = v56;
      if ( v56 >= 0 )
        goto LABEL_69;
      v60 = (_QWORD *)WdLogNewEntry5_WdError(v58, v57);
      v60[3] = v10;
      v60[4] = v47;
      v60[5] = v59;
      WdLogEvent5_WdError(v60);
      v12 = 13;
    }
    else
    {
      if ( v12 != 13 )
      {
        LOBYTE(v51) = *((_BYTE *)v16 + 418);
        v61 = 1;
        v55 = v79;
        goto LABEL_53;
      }
      DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v16, v51, v49, v50);
      v55 = v79;
    }
    LOBYTE(v51) = 0;
    v61 = 0;
LABEL_53:
    DMMVIDEOPRESENTTARGET::SetTargetActivated(v16, v51, v61);
    if ( (_DWORD)v24 == 14 )
    {
      v64 = *(PERESOURCE ***)(v10 + 2696);
      if ( v55 )
        ADAPTER_DISPLAY::SetVidPnSourceActive(v64, v47, 0, 0, (unsigned __int8)v81);
      else
        ADAPTER_DISPLAY::SetVidPnSourceVisibility(
          (ADAPTER_DISPLAY *)v64,
          (unsigned int)v47,
          0,
          2048,
          (unsigned __int8)v81);
    }
    if ( v12 == 13 || a5 )
    {
      v65 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v63, v62);
      v65[3] = *((_DWORD *)a2 + 2) & 0xFFFFFF;
      v65[5] = a5;
      v65[4] = v10;
      WdLogEvent5_WdDmmEvent(v65);
      v70 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v67, v66) + 102);
      if ( v70 )
      {
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v69, v68);
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v70, CurrentProcessSessionId);
      }
      else
      {
        SessionDataForSpecifiedSession = 0LL;
      }
      if ( SessionDataForSpecifiedSession && *((_BYTE *)SessionDataForSpecifiedSession + 18491) )
      {
        v80 = PsGetCurrentProcessSessionId(v69, v68);
        if ( (int)ZwUpdateWnfStateData(&WNF_DXGK_PATH_FAILED_OR_INVALIDATED, 0LL, 0LL, 0LL, &v80, 0, 0) < 0 )
        {
          v75 = WdLogNewEntry5_WdError(v74, v73);
          *(_QWORD *)(v75 + 24) = v10;
          WdLogEvent5_WdError(v75);
        }
      }
      else
      {
        ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(*(DXGADAPTER ***)(v10 + 2696), 0LL, v82);
      }
    }
    if ( v12 == 12 )
      DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(v16, 1u);
    goto LABEL_69;
  }
  v25 = WdLogNewEntry5_WdWarning(v21, v20, v22);
  WdLogEvent5_WdWarning(v25);
  return 0LL;
}
