/*
 * XREFs of ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C012FB08
 * Callers:
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C012D4F4 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x1C0167E80 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_0_1.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C000491C (-IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0008108 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0008208 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C000A278 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A37C (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A3B8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z @ 0x1C011E860 (-AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0125308 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C0125AB8 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N1W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0130038 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N1W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D3.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C0131590 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C01315B4 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C0144A50 (DxgkIsVirtualizationDisabledForTarget.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this,
        struct DXGADAPTER *a2,
        struct DMMVIDPNPRESENTPATH *a3,
        char a4,
        bool a5)
{
  __int64 v7; // rcx
  unsigned __int16 v9; // r14
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  bool v14; // di
  bool v15; // si
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  struct _FAST_MUTEX *v19; // r10
  int MonitorInstance; // eax
  int IsVirtualizationDisabledForTarget; // ebx
  struct DXGMONITOR *v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rbx
  unsigned int *v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  DMMVIDPNSOURCEMODE *v36; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v37; // edx
  struct SESSION_VIEW *SessionViewOwner; // rax
  __int64 v39; // r9
  __int64 v40; // r8
  int TargetLinkTrainingStatus; // eax
  __int64 v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  _QWORD *v52; // r8
  __int64 v53; // rax
  int v54; // [rsp+20h] [rbp-60h]
  int v55; // [rsp+28h] [rbp-58h]
  char IsVirtualModeSuportDisabled; // [rsp+50h] [rbp-30h]
  __int64 v57; // [rsp+58h] [rbp-28h] BYREF
  struct DXGMONITOR *v58; // [rsp+60h] [rbp-20h] BYREF
  __int64 v59; // [rsp+68h] [rbp-18h] BYREF
  __int64 v60; // [rsp+70h] [rbp-10h] BYREF
  char v61; // [rsp+D8h] [rbp+58h]

  v61 = a4;
  v7 = *(_QWORD *)this;
  if ( (*(_BYTE *)(v7 + 84) & 5) == 5 )
  {
    v44 = WdLogNewEntry5_WdAssertion(v7, a2);
    WdLogEvent5_WdAssertion(v44);
    v7 = *(_QWORD *)this;
    a4 = v61;
  }
  v9 = 0;
  v10 = *(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL);
  v11 = *(_DWORD *)(v7 + 84);
  if ( *(_DWORD *)(v10 + 88) )
  {
    if ( (v11 & 5) != 0 )
      goto LABEL_5;
    return 0LL;
  }
  if ( (v11 & 4) != 0 )
    return 0LL;
LABEL_5:
  if ( (v11 & 4) != 0 && !*(_QWORD *)(v10 + 544) )
    return 0LL;
  if ( a4 && !DMMVIDPNPRESENTPATH::IsSourceAndTargetPinned(a3) )
  {
    v45 = (_QWORD *)WdLogNewEntry5_WdAssertion(v13, v12);
    v45[3] = *((int *)a2 + 80);
    v45[4] = *((unsigned int *)a2 + 79);
    v45[5] = *(unsigned int *)(*((_QWORD *)a3 + 11) + 24LL);
    v45[6] = *(unsigned int *)(*((_QWORD *)a3 + 12) + 24LL);
    v45[7] = *(_QWORD *)(*(_QWORD *)this + 64LL);
    WdLogEvent5_WdAssertion(v45);
    return 0LL;
  }
  ++*((_WORD *)this + 4);
  v14 = 0;
  v15 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a2) )
  {
    v14 = 0;
    IsVirtualizationDisabledForTarget = DxgkIsVirtualizationDisabledForTarget(
                                          *(struct _LUID *)((char *)a2 + 316),
                                          *(_DWORD *)(*((_QWORD *)a3 + 12) + 24LL),
                                          0LL,
                                          0LL,
                                          0LL);
    v15 = 0;
    goto LABEL_22;
  }
  if ( !a2 || (v17 = *(unsigned int *)(*((_QWORD *)a3 + 12) + 24LL), LODWORD(v57) = v17, (_DWORD)v17 == -1) )
  {
    IsVirtualizationDisabledForTarget = -1073741811;
    goto LABEL_22;
  }
  v18 = *((_QWORD *)a2 + 337);
  v59 = v18;
  if ( !v18 )
  {
    v46 = WdLogNewEntry5_WdError(v17, v16);
    *(_QWORD *)(v46 + 24) = 9255LL;
    WdLogEvent5_WdError(v46);
    IsVirtualizationDisabledForTarget = -1073741811;
    goto LABEL_52;
  }
  v19 = *(struct _FAST_MUTEX **)(v18 + 96);
  IsVirtualModeSuportDisabled = 0;
  if ( !v19 )
  {
    v48 = WdLogNewEntry5_WdError(v17, v16);
    *(_QWORD *)(v48 + 24) = a2;
    WdLogEvent5_WdError(v48);
    IsVirtualizationDisabledForTarget = -1073741811;
LABEL_54:
    v49 = WdLogNewEntry5_WdAssertion(v17, v16);
    *(_QWORD *)(v49 + 24) = IsVirtualizationDisabledForTarget;
    WdLogEvent5_WdAssertion(v49);
    goto LABEL_22;
  }
  v58 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v19, (unsigned int)v17, 1, &v58);
  IsVirtualizationDisabledForTarget = MonitorInstance;
  if ( MonitorInstance == -1073741275 )
  {
    v43 = WdLogNewEntry5_WdDmmEvent(v17, v16);
    *(_QWORD *)(v43 + 24) = (unsigned int)v57;
    *(_QWORD *)(v43 + 32) = a2;
    WdLogEvent5_WdDmmEvent(v43);
LABEL_43:
    IsVirtualizationDisabledForTarget = 0;
    goto LABEL_44;
  }
  if ( MonitorInstance >= 0 )
  {
    v22 = v58;
    if ( !v58 || *((_DWORD *)v58 + 108) != 1 )
    {
      v50 = WdLogNewEntry5_WdAssertion(v17, v16);
      WdLogEvent5_WdAssertion(v50);
    }
    if ( !v22 )
    {
      v51 = WdLogNewEntry5_WdAssertion(v17, v16);
      WdLogEvent5_WdAssertion(v51);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v22 + 296), 1u);
    IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v22);
    ExReleaseResourceLite((PERESOURCE)((char *)v22 + 296));
    KeLeaveCriticalRegion();
    IsVirtualizationDisabledForTarget = 0;
    goto LABEL_20;
  }
  if ( MonitorInstance == -1073741632 )
    goto LABEL_43;
LABEL_44:
  if ( IsVirtualizationDisabledForTarget < 0 )
    goto LABEL_54;
LABEL_20:
  if ( IsVirtualModeSuportDisabled )
  {
    v15 = 1;
    v14 = 1;
  }
  else
  {
    v15 = *(_BYTE *)(v59 + 250) == 0;
    v14 = *(_BYTE *)(v59 + 249) == 0;
  }
LABEL_22:
  if ( IsVirtualizationDisabledForTarget >= 0 )
  {
    v23 = *((_QWORD *)a3 + 12);
    v57 = 0LL;
    LOBYTE(v55) = !v15;
    LOBYTE(v54) = !v14;
    if ( (unsigned int)CCD_TOPOLOGY::AddPathDescriptor(
                         *(_QWORD *)this,
                         (char *)a2 + 316,
                         *(unsigned int *)(*((_QWORD *)a3 + 11) + 24LL),
                         *(unsigned int *)(v23 + 24),
                         v54,
                         v55,
                         *(_DWORD *)(*(_QWORD *)(v23 + 96) + 80LL),
                         *(_DWORD *)(*(_QWORD *)(v23 + 96) + 84LL),
                         *(_DWORD *)(*(_QWORD *)(v23 + 96) + 88LL),
                         &v57) == -1073741789 )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26);
      v52[3] = this;
      v52[4] = *(_QWORD *)this;
      v52[5] = *(_QWORD *)(*(_QWORD *)this + 64LL);
      v53 = *(_QWORD *)(*(_QWORD *)this + 64LL);
      if ( v53 )
        v9 = *(_WORD *)(v53 + 22);
      v52[6] = v9;
      v52[7] = *((unsigned __int16 *)this + 4);
      WdLogEvent5_WdWarning(v52);
    }
    else
    {
      v27 = v57;
      *(_DWORD *)(v57 + 252) = *((unsigned __int16 *)a3 + 54);
      *(_DWORD *)(v27 + 88) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 80LL);
      *(_DWORD *)(v27 + 92) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 84LL);
      *(_QWORD *)v27 |= 0x800000000000uLL;
      if ( v61 )
      {
        v28 = (unsigned int *)(v27 + 24);
        *(_QWORD *)v27 |= 0x8000000000000000uLL;
        *(_QWORD *)v27 |= -(__int64)(ADAPTER_DISPLAY::IsVidPnSourceActive(
                                       *((ADAPTER_DISPLAY **)a2 + 337),
                                       *(unsigned int *)(v27 + 24)) != 0) & 0x20000000000LL;
        *(_QWORD *)v27 |= -(__int64)(ADAPTER_DISPLAY::IsVidPnSourceVisible(
                                       *((ADAPTER_DISPLAY **)a2 + 337),
                                       *(unsigned int *)(v27 + 24)) != 0) & 0x80000000000LL;
        v29 = *((_QWORD *)a3 + 12);
        v30 = *(_QWORD *)(v29 + 104);
        if ( v30 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v30 + 96));
          v31 = *(_QWORD *)(v29 + 104);
          v27 = v57;
        }
        else
        {
          v31 = 0LL;
        }
        v60 = v31;
        v32 = *(_QWORD *)(v31 + 144);
        if ( v32 )
        {
          *(_OWORD *)(v27 + 32) = *(_OWORD *)(v32 + 72);
          *(_OWORD *)(v27 + 48) = *(_OWORD *)(v32 + 88);
          *(_OWORD *)(v27 + 64) = *(_OWORD *)(v32 + 104);
          *(_QWORD *)(v27 + 80) = *(_QWORD *)(v32 + 120);
          *(_QWORD *)v27 |= 0x87uLL;
          *(_DWORD *)(v27 + 204) = *(_DWORD *)(v32 + 132);
          *(_DWORD *)(v27 + 208) = *(_DWORD *)(v32 + 136);
          *(_QWORD *)v27 |= 8uLL;
        }
        else
        {
          *(_DWORD *)(v27 + 204) = 0;
          *(_DWORD *)(v27 + 208) = 4;
        }
        v33 = *((_QWORD *)a3 + 11);
        v34 = *(_QWORD *)(v33 + 104);
        if ( v34 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v34 + 96));
          v35 = *(_QWORD *)(v33 + 104);
          v27 = v57;
        }
        else
        {
          v35 = 0LL;
        }
        v36 = *(DMMVIDPNSOURCEMODE **)(v35 + 144);
        v59 = v35;
        if ( v36 )
        {
          *(_BYTE *)(v27 + 128) = (unsigned int)(*((_DWORD *)v36 + 18) - 3) <= 1;
          *(struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)(v27 + 96) = *DMMVIDPNSOURCEMODE::GetGraphicsInfo(v36);
          *(_QWORD *)v27 |= 0x100uLL;
          v37 = *((_DWORD *)a3 + 29);
          *(_DWORD *)(v27 + 132) = v37;
          if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 64LL) + 24LL) & 2) != 0 )
            *(_DWORD *)(v27 + 132) = ADAPTER_DISPLAY::AddingMonitorOrientation(
                                       *((ADAPTER_DISPLAY **)a2 + 337),
                                       v37,
                                       *(_DWORD *)(*((_QWORD *)a3 + 12) + 24LL));
          *(_DWORD *)(v27 + 136) = *((_DWORD *)a3 + 28);
          *(_QWORD *)v27 |= 0x40000000200uLL;
          if ( a5 )
          {
            SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(*((ADAPTER_DISPLAY **)a2 + 337), *v28);
            *(_QWORD *)(v27 + 256) = SessionViewOwner;
            if ( SessionViewOwner )
            {
              v39 = 3968LL * *v28;
              v40 = *(_QWORD *)(*((_QWORD *)a2 + 337) + 112LL);
              *(_DWORD *)(v27 + 152) = *((_DWORD *)SessionViewOwner + 8) - *((_DWORD *)SessionViewOwner + 6);
              *(_DWORD *)(v27 + 156) = *((_DWORD *)SessionViewOwner + 9) - *((_DWORD *)SessionViewOwner + 7);
              *(_DWORD *)(v27 + 144) = *((_DWORD *)SessionViewOwner + 6);
              *(_DWORD *)(v27 + 148) = *((_DWORD *)SessionViewOwner + 7);
              *(_DWORD *)(v27 + 168) = *(_DWORD *)(v39 + v40 + 652);
              *(_DWORD *)(v27 + 176) = *(_DWORD *)(v39 + v40 + 660);
              *(_DWORD *)(v27 + 172) = *(_DWORD *)(v39 + v40 + 656);
              *(_DWORD *)(v27 + 180) = *(_DWORD *)(v39 + v40 + 664);
              *(_QWORD *)v27 |= 0x820800uLL;
              *(_QWORD *)(v27 + 196) = *((_QWORD *)SessionViewOwner + 8);
            }
            *(_DWORD *)(v27 + 216) = *(_DWORD *)(3968LL * *v28 + *(_QWORD *)(*((_QWORD *)a2 + 337) + 112LL) + 3756);
            *(_QWORD *)v27 |= 0x1000000000000uLL;
            TargetLinkTrainingStatus = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(
                                         *(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL),
                                         0LL);
            if ( TargetLinkTrainingStatus == 12 )
            {
              *(_DWORD *)(v27 + 192) = 259;
            }
            else if ( TargetLinkTrainingStatus == 13 )
            {
              *(_DWORD *)(v27 + 192) = -1073741437;
            }
          }
        }
        auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v59, 0LL);
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v60, 0LL);
      }
    }
    return 0LL;
  }
LABEL_52:
  v47 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
  v47[3] = *(unsigned int *)(*((_QWORD *)a3 + 12) + 24LL);
  v47[4] = *((int *)a2 + 80);
  v47[5] = *((unsigned int *)a2 + 79);
  WdLogEvent5_WdError(v47);
  return (unsigned int)IsVirtualizationDisabledForTarget;
}
