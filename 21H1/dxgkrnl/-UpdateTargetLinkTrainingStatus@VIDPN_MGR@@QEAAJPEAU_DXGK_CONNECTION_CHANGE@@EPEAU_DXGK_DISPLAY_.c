/*
 * XREFs of ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E0294
 * Callers:
 *     ?DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02DFF68 (-DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z @ 0x1C02E0008 (-HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000ADD0 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F32C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C001168C (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C00118CC (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0011FD8 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C001A814 (-SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00E2390 (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C00E8A90 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C012B9C0 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C012BF80 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C012EDA4 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C0132B5C (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C013F768 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 *     ?SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z @ 0x1C0158110 (-SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C015A4AC (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0210448 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?SetUnplugHiding@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C02E1F84 (-SetUnplugHiding@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C02E1FDC (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
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
  __int64 v35; // rcx
  const struct DMMVIDPNTOPOLOGY *v36; // r11
  DMMVIDPNPRESENTPATH *v37; // r13
  __int64 v38; // rax
  __int64 v39; // rdx
  ULONGLONG v40; // rcx
  struct DXGGLOBAL *v41; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned __int8 v44; // r8
  __int64 v45; // rax
  __int64 v46; // r12
  int MostImportantVidPnPathTargetsFromSource; // eax
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  char v54; // r13
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rbx
  _QWORD *v59; // rax
  unsigned __int8 v60; // r8
  __int64 v61; // rcx
  PERESOURCE **v62; // rcx
  _QWORD *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rcx
  DXGSESSIONMGR *v67; // rsi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rax
  ULONGLONG v73; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v74; // [rsp+48h] [rbp-20h] BYREF
  __int64 v75[3]; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v76; // [rsp+B0h] [rbp+48h] BYREF
  int v77; // [rsp+B8h] [rbp+50h] BYREF
  struct _LUID *v78; // [rsp+C0h] [rbp+58h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v79; // [rsp+C8h] [rbp+60h]

  v79 = a4;
  LOBYTE(v78) = a3;
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
  v73 = 0LL;
  TargetLinkTrainingStatus = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus((__int64)TargetById, &v73);
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
    LOBYTE(v20) = (_BYTE)v78;
    if ( !(_BYTE)v78 )
      goto LABEL_11;
    v74 = 0LL;
    DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v10, v20, 0LL, &v74);
    DxgkLogCodePointPacketForSession(
      0x58u,
      v74,
      *((_DWORD *)a2 + 2) & 0xFFFFFF,
      v12,
      a2->ConnectionChangeId,
      *(_QWORD *)(v10 + 316));
  }
  LOBYTE(v20) = (_BYTE)v78;
LABEL_11:
  if ( v73 <= a2->ConnectionChangeId )
  {
    ConnectionChangeId = a2->ConnectionChangeId;
    if ( v73 == a2->ConnectionChangeId )
    {
      if ( v12 == (_DWORD)v24 )
        return 0LL;
      if ( (_DWORD)v24 == 14 || (_DWORD)v24 == 13 )
      {
        if ( v12 == 12 )
        {
          v27 = WdLogNewEntry5_WdDmmEvent(ConnectionChangeId);
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
    QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 158), 0LL, v30, v31);
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
      v75[0] = 0LL;
LABEL_69:
      auto_rc<DMMVIDPN const>::reset(v75, 0LL);
      return 0LL;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v32 + 32));
    v33 = *((_QWORD *)this + 11);
    v75[0] = v33;
    if ( !v33 )
      goto LABEL_69;
    PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget((DMMVIDPNTOPOLOGY *)(v33 + 96), *((_DWORD *)a2 + 2) & 0xFFFFFF);
    v37 = PathFromTarget;
    if ( !PathFromTarget )
    {
      if ( v23 )
      {
        v38 = WdLogNewEntry5_WdDmmEvent(v35);
        *(_QWORD *)(v38 + 24) = *((_DWORD *)a2 + 2) & 0xFFFFFF;
        *(_QWORD *)(v38 + 32) = v10;
        WdLogEvent5_WdDmmEvent(v38);
        if ( v12 == 12 )
        {
          DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(v16, 1u);
        }
        else
        {
          v40 = a2->ConnectionChangeId;
          *(_BYTE *)(*((_QWORD *)v16 + 67) + 168LL) = 14;
          *(_QWORD *)(*((_QWORD *)v16 + 67) + 160LL) = v40;
          v41 = DXGGLOBAL::GetGlobal(v40, v39);
          QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)v41 + 158), 0LL, v42, v43);
        }
      }
      v44 = v12 == 12;
      goto LABEL_48;
    }
    v45 = *((_QWORD *)PathFromTarget + 11);
    v76 = 0;
    v46 = *(unsigned int *)(v45 + 24);
    MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(v36, v46, &v76);
    v50 = 0x80000000LL;
    v51 = MostImportantVidPnPathTargetsFromSource + 0x80000000;
    if ( (int)v51 >= 0 && MostImportantVidPnPathTargetsFromSource != -1071774919 )
    {
      v52 = WdLogNewEntry5_WdAssertion(v51, 0x80000000LL);
      WdLogEvent5_WdAssertion(v52);
    }
    v53 = *(_QWORD *)(v10 + 2680);
    LOBYTE(v76) = (*((_DWORD *)a2 + 2) & 0xFFFFFF) == v76;
    if ( v53 )
      ADAPTER_RENDER::FlushScheduler(v53, 8, v46, 0);
    if ( v12 == 14 )
    {
      DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v16, v50, v48, v49);
      if ( !*((_BYTE *)v16 + 418) )
      {
        v44 = 0;
LABEL_48:
        DMMVIDEOPRESENTTARGET::SetTargetActivated(v16, 0LL, v44);
        goto LABEL_69;
      }
      DMMVIDPNPRESENTPATH::SetDriverGammaRamp(v37, 0LL);
      v54 = v76;
      if ( !(_BYTE)v76 )
        goto LABEL_69;
      ADAPTER_DISPLAY::SetVidPnPrimaryTarget(*(ADAPTER_DISPLAY **)(v10 + 2672), v46, *((_DWORD *)a2 + 2) & 0xFFFFFF);
      v55 = ADAPTER_DISPLAY::SetVidPnSourceActive(*(PERESOURCE ***)(v10 + 2672), v46, 1, 0, (unsigned __int8)v78);
      v58 = v55;
      if ( v55 >= 0 )
        goto LABEL_69;
      v59 = (_QWORD *)WdLogNewEntry5_WdError(v57, v56);
      v59[3] = v10;
      v59[4] = v46;
      v59[5] = v58;
      WdLogEvent5_WdError(v59);
      v12 = 13;
    }
    else
    {
      if ( v12 != 13 )
      {
        LOBYTE(v50) = *((_BYTE *)v16 + 418);
        v60 = 1;
        v54 = v76;
        goto LABEL_53;
      }
      DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v16, v50, v48, v49);
      v54 = v76;
    }
    LOBYTE(v50) = 0;
    v60 = 0;
LABEL_53:
    DMMVIDEOPRESENTTARGET::SetTargetActivated(v16, v50, v60);
    if ( (_DWORD)v24 == 14 )
    {
      v62 = *(PERESOURCE ***)(v10 + 2672);
      if ( v54 )
        ADAPTER_DISPLAY::SetVidPnSourceActive(v62, v46, 0, 0, (unsigned __int8)v78);
      else
        ADAPTER_DISPLAY::SetVidPnSourceVisibility(
          (ADAPTER_DISPLAY *)v62,
          (unsigned int)v46,
          0,
          2048,
          (unsigned __int8)v78);
    }
    if ( v12 == 13 || a5 )
    {
      v63 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v61);
      v63[3] = *((_DWORD *)a2 + 2) & 0xFFFFFF;
      v63[5] = a5;
      v63[4] = v10;
      WdLogEvent5_WdDmmEvent(v63);
      v67 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v65, v64) + 88);
      if ( v67 )
      {
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v66);
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v67, CurrentProcessSessionId);
      }
      else
      {
        SessionDataForSpecifiedSession = 0LL;
      }
      if ( SessionDataForSpecifiedSession && *((_BYTE *)SessionDataForSpecifiedSession + 18491) )
      {
        v77 = PsGetCurrentProcessSessionId(v66);
        if ( (int)ZwUpdateWnfStateData(&WNF_DXGK_PATH_FAILED_OR_INVALIDATED, 0LL, 0LL, 0LL, &v77, 0, 0) < 0 )
        {
          v72 = WdLogNewEntry5_WdError(v71, v70);
          *(_QWORD *)(v72 + 24) = v10;
          WdLogEvent5_WdError(v72);
        }
      }
      else
      {
        ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(*(DXGADAPTER ***)(v10 + 2672), 0LL, v79);
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
