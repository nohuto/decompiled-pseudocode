/*
 * XREFs of ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C013F584
 * Callers:
 *     ?ADAPTER_DISPLAY_SetVidPnSourceVisibility@@YAJPEAVADAPTER_DISPLAY@@IEIE@Z @ 0x1C00421A0 (-ADAPTER_DISPLAY_SetVidPnSourceVisibility@@YAJPEAVADAPTER_DISPLAY@@IEIE@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0109440 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013FB1C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C014A6EC (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C014BD78 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C014BE84 (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C014D3A8 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C014DDCC (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C014E000 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0211888 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C0213838 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C02DE764 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E4B54 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     ?SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ @ 0x1C02FF978 (-SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0001B04 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A708 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B73C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000D178 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C000D440 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0019DF8 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?Resume@CVidSchSuspendResume@@QEAAXXZ @ 0x1C001AF84 (-Resume@CVidSchSuspendResume@@QEAAXXZ.c)
 *     ?IsPointerVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C001B1B4 (-IsPointerVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z @ 0x1C003AF6C (-SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C013D324 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0162118 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?DdiSetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEVISIBILITY@@@Z @ 0x1C0168C98 (-DdiSetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEVISIBILITY@@@Z.c)
 *     ?DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C016C7A0 (-DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0211660 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C0216048 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetVidPnSourceVisibility(
        ADAPTER_DISPLAY *this,
        __int64 a2,
        BOOLEAN a3,
        int a4,
        unsigned __int8 a5)
{
  __int64 v5; // rax
  __int64 v7; // rsi
  __int64 v8; // r12
  char v10; // bl
  __int64 v11; // r8
  char v12; // r14
  char v13; // r9
  ADAPTER_RENDER *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  DXGADAPTER *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  int v27; // r12d
  struct _LUID *v28; // rdx
  DXGADAPTER *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  char v49; // [rsp+30h] [rbp-41h]
  unsigned __int64 v50; // [rsp+38h] [rbp-39h] BYREF
  _DXGKARG_SETVIDPNSOURCEVISIBILITY v51; // [rsp+40h] [rbp-31h] BYREF
  unsigned int v52; // [rsp+48h] [rbp-29h]
  ADAPTER_RENDER *v53[2]; // [rsp+50h] [rbp-21h] BYREF
  struct _DXGKARG_SETPOINTERPOSITION v54; // [rsp+60h] [rbp-11h] BYREF

  v51 = 0LL;
  v5 = *((_QWORD *)this + 14);
  v7 = (unsigned int)a2;
  v8 = 3968LL * (unsigned int)a2;
  v54 = 0LL;
  LODWORD(v50) = a4;
  v10 = *(_BYTE *)(v8 + v5 + 721);
  v49 = v10;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 20) )
  {
    v38 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v38 + 24) = 1746LL;
    WdLogEvent5_WdAssertion(v38);
  }
  if ( a3 && !ADAPTER_DISPLAY::IsVidPnSourceActive(this, (unsigned int)v7) )
  {
    v39 = WdLogNewEntry5_WdAssertion(v34, v33);
    *(_QWORD *)(v39 + 24) = 1747LL;
    WdLogEvent5_WdAssertion(v39);
  }
  v11 = *((_QWORD *)this + 2);
  v54.VidPnSourceId = v7;
  v51.VidPnSourceId = v7;
  v51.Visible = a3;
  v12 = 0;
  v52 = (unsigned __int8)v7 | (v10 != 0 ? 0x80000000 : 0) | (a3 != 0 ? 0x40000000 : 0);
  v54.Flags.Value ^= (*(_BYTE *)&v54.Flags.0 ^ a3) & 1;
  if ( a5 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v11) )
    {
      v40 = WdLogNewEntry5_WdAssertion(v37, v36);
      *(_QWORD *)(v40 + 24) = 1768LL;
      WdLogEvent5_WdAssertion(v40);
    }
    v11 = *((_QWORD *)this + 2);
    v13 = 0;
  }
  else if ( *(_DWORD *)(v11 + 324) == 32902 && *(int *)(v11 + 2328) < 4864 )
  {
    v13 = 0;
  }
  else if ( DXGADAPTER::IsLegacyDisplayStateSynchronization((DXGADAPTER *)v11) )
  {
    v12 = v13;
  }
  v14 = *(ADAPTER_RENDER **)(v11 + 2704);
  LODWORD(v53[0]) = 0;
  v53[1] = v14;
  if ( v14 && v13 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v11) )
    {
      v41 = WdLogNewEntry5_WdAssertion(v16, v15);
      *(_QWORD *)(v41 + 24) = 1796LL;
      WdLogEvent5_WdAssertion(v41);
    }
    v17 = *((_QWORD *)this + 2);
    if ( v12 )
    {
      ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(v17 + 2704), 6, v7, 1);
    }
    else
    {
      ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(*(ADAPTER_RENDER **)(v17 + 2704), 0, 1 << v7, 0, 1 << v7);
      CVidSchSuspendResume::SetSuspendSourceMask((CVidSchSuspendResume *)v53, (unsigned int)(1 << v7));
    }
  }
  if ( a3 )
  {
    v35 = ADAPTER_DISPLAY::DdiSetVidPnSourceVisibility(this, &v51);
    v26 = v35;
    if ( v35 >= 0 )
    {
      if ( ADAPTER_DISPLAY::IsPointerVisible(this, (unsigned int)v7) )
      {
        v43 = *((_QWORD *)this + 14);
        v54.X = *(_DWORD *)(v8 + v43 + 728);
        v54.Y = *(_DWORD *)(v8 + v43 + 732);
        v44 = ADAPTER_DISPLAY::DdiSetPointerPosition(this, &v54);
        LODWORD(v26) = v44;
        if ( v44 < 0 )
        {
          v47 = WdLogNewEntry5_WdAssertion(v46, v45);
          *(_QWORD *)(v47 + 24) = 1851LL;
          WdLogEvent5_WdAssertion(v47);
        }
      }
      goto LABEL_21;
    }
LABEL_36:
    v42 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
    v42[3] = v7;
    v42[4] = *((_QWORD *)this + 2);
    v42[5] = v26;
    WdLogEvent5_WdError(v42);
    ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((DXGADAPTER **)this, v7, 1);
    v27 = v50;
    goto LABEL_22;
  }
  v18 = (DXGADAPTER *)*((_QWORD *)this + 2);
  if ( *((_BYTE *)v18 + 2642) )
  {
    if ( DXGADAPTER::IsLegacyDisplayStateSynchronization(v18) )
      ADAPTER_DISPLAY::DisableMPOPlanes(this, v7, 0);
  }
  else
  {
    ADAPTER_DISPLAY::DisableAllPlanesOnVidPnSourcesImmediate(this, 1 << v7);
  }
  if ( (int)ADAPTER_DISPLAY::DdiSetPointerPosition(this, &v54) < 0 )
  {
    v48 = WdLogNewEntry5_WdAssertion(v20, v19);
    *(_QWORD *)(v48 + 24) = 1876LL;
    WdLogEvent5_WdAssertion(v48);
  }
  v21 = ADAPTER_DISPLAY::DdiSetVidPnSourceVisibility(this, &v51);
  v26 = v21;
  if ( v21 < 0 )
    goto LABEL_36;
LABEL_21:
  LOBYTE(v25) = a3;
  v27 = v50;
  LOBYTE(v24) = v49;
  DisplayScenarioJournalVidPnSourceVisibility(
    *(_QWORD *)(*((_QWORD *)this + 2) + 316LL),
    (unsigned int)v7,
    v24,
    v25,
    v50);
LABEL_22:
  v29 = (DXGADAPTER *)*((_QWORD *)this + 2);
  v50 = 0LL;
  DXGADAPTER::IsAdapterSessionized(v29, v28, 0LL, &v50);
  DxgkLogCodePointPacketForSession(0x44u, v50, v52, v27, v26, *(_QWORD *)(v30 + 316));
  v31 = *(_QWORD *)(*((_QWORD *)this + 2) + 2704LL);
  if ( v31 && v12 )
    ADAPTER_RENDER::FlushScheduler(v31, 7, v7, 1);
  CVidSchSuspendResume::Resume(v53);
  return (unsigned int)v26;
}
