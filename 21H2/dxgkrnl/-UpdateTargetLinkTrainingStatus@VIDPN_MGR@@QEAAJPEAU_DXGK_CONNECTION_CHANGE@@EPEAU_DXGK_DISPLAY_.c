/*
 * XREFs of ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C03A4D40
 * Callers:
 *     ?DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C03A4A78 (-DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z @ 0x1C03A4B10 (-HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000F08C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F0C8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000F16C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C0013194 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0014340 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0019DE4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C001F5D4 (-SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C01A0358 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C01BAD80 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C01BB044 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C01BC9FC (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C01C02FC (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C01C69E4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x1C01C79D8 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 *     ?SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z @ 0x1C01C8FF4 (-SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C01E9B14 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C218C (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C03A07E8 (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 */

__int64 __fastcall VIDPN_MGR::UpdateTargetLinkTrainingStatus(
        VIDPN_MGR *this,
        struct _DXGK_CONNECTION_CHANGE *a2,
        unsigned __int8 a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4,
        unsigned __int8 a5)
{
  __int64 v5; // r13
  unsigned __int8 v6; // di
  VIDPN_MGR *v8; // rbx
  unsigned int v9; // esi
  __int64 v10; // r13
  unsigned int v11; // edx
  unsigned int v12; // esi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  struct DMMVIDEOPRESENTTARGET *v14; // r14
  struct _LUID *v16; // rdx
  __int64 TargetLinkTrainingStatus; // r12
  int v18; // edi
  int v19; // ebx
  __int64 v20; // r11
  ULONGLONG ConnectionChangeId; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // r11d
  struct DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  int v27; // r11d
  ULONGLONG v28; // rcx
  struct DXGGLOBAL *v29; // rax
  unsigned __int8 v30; // r8
  __int64 v31; // rax
  unsigned int v32; // ebx
  int MostImportantVidPnPathTargetsFromSource; // eax
  __int64 v34; // rcx
  ADAPTER_DISPLAY *v35; // rbx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  int v37; // eax
  char v38; // dl
  unsigned __int8 v39; // r8
  PERESOURCE **v40; // rcx
  __int64 v41; // rcx
  DXGSESSIONMGR *v42; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v45; // rcx
  unsigned __int64 v46; // [rsp+40h] [rbp-28h] BYREF
  __int64 v47; // [rsp+48h] [rbp-20h] BYREF
  struct DMMVIDPNTOPOLOGY *v48; // [rsp+50h] [rbp-18h]
  DMMVIDPNPRESENTPATH *v49; // [rsp+58h] [rbp-10h]
  VIDPN_MGR *v50; // [rsp+B0h] [rbp+48h] BYREF
  ULONGLONG v51; // [rsp+B8h] [rbp+50h] BYREF
  unsigned __int8 v52; // [rsp+C0h] [rbp+58h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v53; // [rsp+C8h] [rbp+60h]

  v53 = a4;
  v52 = a3;
  v50 = this;
  v5 = *((_QWORD *)this + 1);
  v6 = a3;
  v8 = this;
  if ( !v5 )
  {
    WdLogSingleEntry0(1LL);
    v5 = *((_QWORD *)v8 + 1);
  }
  v9 = *((_DWORD *)a2 + 2);
  v10 = *(_QWORD *)(v5 + 16);
  v11 = v9 & 0xFFFFFF;
  v12 = HIBYTE(v9) & 0xF;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(*((DMMVIDEOPRESENTTARGETSET **)v8 + 15), v11);
  v14 = TargetById;
  if ( !TargetById )
  {
    WdLogSingleEntry2(2LL, *((_DWORD *)a2 + 2) & 0xFFFFFFLL, -1073741811LL);
    return 3221225485LL;
  }
  v51 = 0LL;
  TargetLinkTrainingStatus = (unsigned int)DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus((__int64)TargetById, &v51);
  if ( a5 )
  {
    if ( v12 != 8 )
    {
      ConnectionChangeId = a2->ConnectionChangeId;
      v12 = 13;
      goto LABEL_23;
    }
    v12 = 12;
  }
  else if ( v6 )
  {
    v18 = *((_DWORD *)a2 + 2);
    v19 = a2->ConnectionChangeId;
    v46 = 0LL;
    DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v10, v16, 0LL, &v46);
    DxgkLogCodePointPacketForSession(0x58u, v46, v18 & 0xFFFFFF, v12, v19, v20);
    v8 = v50;
    v6 = v52;
  }
  if ( v51 <= a2->ConnectionChangeId )
  {
    ConnectionChangeId = a2->ConnectionChangeId;
    if ( v51 == a2->ConnectionChangeId )
    {
      if ( v12 == (_DWORD)TargetLinkTrainingStatus )
        return 0LL;
      if ( (_DWORD)TargetLinkTrainingStatus == 14 || (_DWORD)TargetLinkTrainingStatus == 13 )
      {
        if ( v12 == 12 )
        {
          WdLogSingleEntry1(7LL, *((_DWORD *)a2 + 2) & 0xFFFFFF);
          return 0LL;
        }
        if ( !v6 )
        {
          WdLogSingleEntry3(1LL, TargetLinkTrainingStatus, v10, *((_DWORD *)a2 + 2) & 0xFFFFFF);
          return 0LL;
        }
        ConnectionChangeId = a2->ConnectionChangeId;
        if ( (_DWORD)TargetLinkTrainingStatus != 13 )
        {
          WdLogSingleEntry2(1LL, v12, TargetLinkTrainingStatus);
          return 0LL;
        }
      }
    }
LABEL_23:
    *(_BYTE *)(*((_QWORD *)v14 + 67) + 168LL) = v12;
    *(_QWORD *)(*((_QWORD *)v14 + 67) + 160LL) = ConnectionChangeId;
    Global = DXGGLOBAL_GetGlobal();
    QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 191), 0LL);
    if ( a5 )
    {
      *(_BYTE *)(*((_QWORD *)v14 + 67) + 172LL) = v12 == 12;
      WdLogSingleEntry2(7LL, *((unsigned int *)v14 + 6), v12 == 12);
    }
    else if ( v12 == (_DWORD)TargetLinkTrainingStatus )
    {
      return 0LL;
    }
    v23 = *((_QWORD *)v8 + 16);
    if ( !v23 )
    {
      v47 = 0LL;
LABEL_65:
      auto_rc<DMMVIDPN const>::reset(&v47, 0LL);
      return 0LL;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v23 + 32));
    v24 = *((_QWORD *)v8 + 16);
    v47 = v24;
    if ( !v24 )
      goto LABEL_65;
    v25 = *((_DWORD *)a2 + 2);
    v48 = (struct DMMVIDPNTOPOLOGY *)(v24 + 96);
    PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget((DMMVIDPNTOPOLOGY *)(v24 + 96), v25 & 0xFFFFFF);
    v49 = PathFromTarget;
    if ( !PathFromTarget )
    {
      if ( a5 )
      {
        WdLogSingleEntry2(7LL, *(_QWORD *)&v27 & 0xFFFFFFLL, v10);
        if ( v12 == 12 )
        {
          DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(v14, 1u);
        }
        else
        {
          v28 = a2->ConnectionChangeId;
          *(_BYTE *)(*((_QWORD *)v14 + 67) + 168LL) = 14;
          *(_QWORD *)(*((_QWORD *)v14 + 67) + 160LL) = v28;
          v29 = DXGGLOBAL_GetGlobal();
          QDC_CACHE::InvalidateCache(*((QDC_CACHE **)v29 + 191), 0LL);
        }
      }
      v30 = v12 == 12;
      goto LABEL_46;
    }
    v31 = *((_QWORD *)PathFromTarget + 11);
    LODWORD(v50) = 0;
    v32 = *(_DWORD *)(v31 + 24);
    LODWORD(v51) = v32;
    MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(
                                                v48,
                                                v32,
                                                (unsigned int *const)&v50);
    if ( (int)(MostImportantVidPnPathTargetsFromSource + 0x80000000) >= 0
      && MostImportantVidPnPathTargetsFromSource != -1071774919 )
    {
      WdLogSingleEntry0(1LL);
    }
    v34 = *(_QWORD *)(v10 + 2800);
    LOBYTE(v50) = (*((_DWORD *)a2 + 2) & 0xFFFFFF) == (_DWORD)v50;
    if ( v34 )
      ADAPTER_RENDER::FlushScheduler(v34, 8u, v32, 0);
    if ( v12 == 14 )
    {
      DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v14);
      if ( !*((_BYTE *)v14 + 418) )
      {
        v30 = 0;
LABEL_46:
        DMMVIDEOPRESENTTARGET::SetTargetActivated(v14, 0, v30);
        goto LABEL_65;
      }
      DMMVIDPNPRESENTPATH::SetDriverGammaRamp(v49, 0LL);
      if ( !(_BYTE)v50 )
        goto LABEL_65;
      ADAPTER_DISPLAY::SetVidPnPrimaryTarget(*(ADAPTER_DISPLAY **)(v10 + 2792), v32, *((_DWORD *)a2 + 2) & 0xFFFFFF);
      v35 = *(ADAPTER_DISPLAY **)(v10 + 2792);
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(v35, v51);
      v37 = ADAPTER_DISPLAY::SetVidPnSourceActive((PERESOURCE **)v35, v51, 1u, DisplayModeInfo, 0, v52 != 0);
      if ( v37 >= 0 )
        goto LABEL_65;
      v32 = v51;
      WdLogSingleEntry3(2LL, v10, (unsigned int)v51, v37);
      v12 = 13;
    }
    else
    {
      if ( v12 != 13 )
      {
        v38 = *((_BYTE *)v14 + 418);
        v39 = 1;
        goto LABEL_51;
      }
      DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v14);
    }
    v38 = 0;
    v39 = 0;
LABEL_51:
    DMMVIDEOPRESENTTARGET::SetTargetActivated(v14, v38, v39);
    if ( (_DWORD)TargetLinkTrainingStatus == 14 )
    {
      v40 = *(PERESOURCE ***)(v10 + 2792);
      if ( (_BYTE)v50 )
        ADAPTER_DISPLAY::SetVidPnSourceActive(v40, v32, 0, 0LL, 0, v52 != 0);
      else
        ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)v40, v32, 0, 2048, v52);
    }
    if ( v12 == 13 || a5 )
    {
      WdLogSingleEntry3(7LL, *((_DWORD *)a2 + 2) & 0xFFFFFF, v10, a5);
      v42 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
      if ( v42
        && (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v41),
            (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                v42,
                                                CurrentProcessSessionId)) != 0LL)
        && *((_BYTE *)SessionDataForSpecifiedSession + 18499) )
      {
        LODWORD(v46) = PsGetCurrentProcessSessionId(v45);
        if ( (int)ZwUpdateWnfStateData(&WNF_DXGK_PATH_FAILED_OR_INVALIDATED, 0LL, 0LL, 0LL, &v46, 0, 0) < 0 )
          WdLogSingleEntry1(2LL, v10);
      }
      else
      {
        ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(*(DXGADAPTER ***)(v10 + 2792), 0LL, v53);
      }
    }
    if ( v12 == 12 )
      DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(v14, 1u);
    goto LABEL_65;
  }
  WdLogSingleEntry0(3LL);
  return 0LL;
}
