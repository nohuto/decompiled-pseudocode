/*
 * XREFs of ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C01C69E4
 * Callers:
 *     ?ADAPTER_DISPLAY_SetVidPnSourceVisibility@@YAJPEAVADAPTER_DISPLAY@@IEIE@Z @ 0x1C00147B0 (-ADAPTER_DISPLAY_SetVidPnSourceVisibility@@YAJPEAVADAPTER_DISPLAY@@IEIE@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01588F8 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C019B990 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B85D0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C01C5840 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C01C66CC (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C01C770C (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x1C01C79D8 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01C7E74 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C02BFF14 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C039CA5C (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C03A3518 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C03A4D40 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     ?SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ @ 0x1C03BE9F0 (-SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000F6D8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C0014310 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0014340 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z @ 0x1C0014430 (-SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z.c)
 *     ?IsPointerVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0014548 (-IsPointerVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0019DE4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?Resume@CVidSchSuspendResume@@QEAAXXZ @ 0x1C001E980 (-Resume@CVidSchSuspendResume@@QEAAXXZ.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C001F014 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C01A54B4 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C01BB044 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DdiSetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEVISIBILITY@@@Z @ 0x1C01C6CF4 (-DdiSetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEVISIBILITY@@@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C01C6EB4 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01C6F6C (-DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01C70A8 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetVidPnSourceVisibility(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        unsigned __int8 a3,
        int a4,
        unsigned __int8 a5)
{
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r13
  int v9; // r12d
  char v10; // bl
  __int64 v11; // r8
  char v12; // r15
  char v13; // r9
  ADAPTER_RENDER *v14; // rax
  __int64 v15; // rax
  DXGADAPTER *v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rsi
  int v22; // ebx
  struct _LUID *v23; // rdx
  DXGADAPTER *v24; // rcx
  __int64 v25; // r11
  __int64 v26; // rcx
  int v28; // eax
  const wchar_t *v29; // r9
  __int64 v30; // rcx
  char v31; // [rsp+50h] [rbp-41h]
  unsigned __int64 v32; // [rsp+58h] [rbp-39h] BYREF
  _DXGKARG_SETVIDPNSOURCEVISIBILITY v33; // [rsp+60h] [rbp-31h] BYREF
  unsigned int v34; // [rsp+68h] [rbp-29h]
  ADAPTER_RENDER *v35[2]; // [rsp+70h] [rbp-21h] BYREF
  struct _DXGKARG_SETPOINTERPOSITION v36; // [rsp+80h] [rbp-11h] BYREF

  v5 = *((_QWORD *)this + 16);
  v6 = a2;
  v7 = 4000LL * a2;
  v36 = 0LL;
  v33 = 0LL;
  LODWORD(v32) = a4;
  v9 = a3;
  v10 = *(_BYTE *)(v5 + v7 + 761);
  v31 = v10;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 1788LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < GetNumVidPnSources()",
      1788LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (_BYTE)v9 && !ADAPTER_DISPLAY::IsVidPnSourceActive(this, v6) )
  {
    WdLogSingleEntry1(1LL, 1789LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!Visible || IsVidPnSourceActive(VidPnSourceId)",
      1789LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v11 = *((_QWORD *)this + 2);
  v36.VidPnSourceId = v6;
  v33.VidPnSourceId = v6;
  v33.Visible = v9;
  v34 = (unsigned __int8)v6 | (v10 != 0 ? 0x80000000 : 0) | ((_BYTE)v9 != 0 ? 0x40000000 : 0);
  v12 = 0;
  v36.Flags.Value ^= (v36.Flags.Value ^ v9) & 1;
  if ( a5 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v11) )
    {
      WdLogSingleEntry1(1LL, 1810LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"IsCoreResourceExclusiveOwner()",
        1810LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v11 = *((_QWORD *)this + 2);
    v13 = 0;
  }
  else if ( *(_DWORD *)(v11 + 412) == 32902 && *(int *)(v11 + 2424) < 4864 )
  {
    v13 = 0;
  }
  else if ( DXGADAPTER::IsLegacyDisplayStateSynchronization((DXGADAPTER *)v11) )
  {
    v12 = v13;
  }
  v14 = *(ADAPTER_RENDER **)(v11 + 2800);
  LODWORD(v35[0]) = 0;
  v35[1] = v14;
  if ( v14 && v13 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v11) )
    {
      WdLogSingleEntry1(1LL, 1838LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"IsCoreResourceExclusiveOwner()",
        1838LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v15 = *((_QWORD *)this + 2);
    if ( v12 )
    {
      ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(v15 + 2800), 6u, v6, 1);
    }
    else
    {
      ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(*(ADAPTER_RENDER **)(v15 + 2800), 0, 1 << v6, 0, 1 << v6);
      CVidSchSuspendResume::SetSuspendSourceMask((CVidSchSuspendResume *)v35, 1 << v6);
    }
  }
  if ( (_BYTE)v9 )
  {
    v28 = ADAPTER_DISPLAY::DdiSetVidPnSourceVisibility(this, &v33);
    v21 = v28;
    if ( v28 >= 0 )
    {
      if ( ADAPTER_DISPLAY::IsPointerVisible(this, v6) )
      {
        v30 = *((_QWORD *)this + 16);
        v36.X = *(_DWORD *)(v30 + v7 + 768);
        v36.Y = *(_DWORD *)(v30 + v7 + 772);
        LODWORD(v21) = ADAPTER_DISPLAY::DdiSetPointerPosition(this, &v36, v19);
        if ( (int)v21 < 0 )
        {
          WdLogSingleEntry1(1LL, 1893LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 1893LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      goto LABEL_22;
    }
    WdLogSingleEntry3(2LL, v6, *((_QWORD *)this + 2), v28);
    v29 = L"Failed to enable scanning from primary on source 0x%I64x on adapter 0x%I64x (status = 0x%I64x)";
LABEL_40:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v29, v6, *((_QWORD *)this + 2), v21, 0LL, 0LL);
    ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((PERESOURCE **)this, v6, 1);
    v22 = v32;
    goto LABEL_23;
  }
  v16 = (DXGADAPTER *)*((_QWORD *)this + 2);
  if ( *((_BYTE *)v16 + 2738) )
  {
    if ( DXGADAPTER::IsLegacyDisplayStateSynchronization(v16) )
      ADAPTER_DISPLAY::DisableMPOPlanes(this, v6, 0);
  }
  else
  {
    ADAPTER_DISPLAY::DisableAllPlanesOnVidPnSourcesImmediate(this, 1 << v6);
  }
  if ( (int)ADAPTER_DISPLAY::DdiSetPointerPosition(this, &v36, v17) < 0 )
  {
    WdLogSingleEntry1(1LL, 1918LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 1918LL, 0LL, 0LL, 0LL, 0LL);
  }
  v18 = ADAPTER_DISPLAY::DdiSetVidPnSourceVisibility(this, &v33);
  v21 = v18;
  if ( v18 < 0 )
  {
    WdLogSingleEntry3(2LL, v6, *((_QWORD *)this + 2), v18);
    v29 = L"Failed to disable scanning from primary on source 0x%I64x on adapter 0x%I64x (status = 0x%I64x)";
    goto LABEL_40;
  }
LABEL_22:
  LOBYTE(v20) = v9;
  v22 = v32;
  LOBYTE(v19) = v31;
  DisplayScenarioJournalVidPnSourceVisibility(
    *(_QWORD *)(*((_QWORD *)this + 2) + 404LL),
    (unsigned int)v6,
    v19,
    v20,
    v32);
LABEL_23:
  v24 = (DXGADAPTER *)*((_QWORD *)this + 2);
  v32 = 0LL;
  DXGADAPTER::IsAdapterSessionized(v24, v23, 0LL, &v32);
  DxgkLogCodePointPacketForSession(0x44u, v32, v34, v22, v21, v25);
  v26 = *(_QWORD *)(*((_QWORD *)this + 2) + 2800LL);
  if ( v26 && v12 )
    ADAPTER_RENDER::FlushScheduler(v26, 7u, v6, 1);
  CVidSchSuspendResume::Resume(v35);
  return (unsigned int)v21;
}
