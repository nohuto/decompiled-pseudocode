/*
 * XREFs of ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C01BCB6C
 * Callers:
 *     ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1C01BC4FC (-DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_C.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C01BC9FC (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C039D314 (-DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C03A3518 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C00136D0 (-IsTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?DdiUpdateActiveVidPnPresentPath@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH@@@Z @ 0x1C01BCEC0 (-DdiUpdateActiveVidPnPresentPath@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH.c)
 *     ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x1C01BD054 (-GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01BD088 (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath(
        DMMVIDPNPRESENTPATH *this,
        const struct DXGK_GAMMA_RAMP *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rsi
  DXGADAPTER **v7; // rbx
  _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *v8; // r8
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *v9; // xmm1_8
  _D3DKMDT_VIDPN_PRESENT_PATH *v10; // rax
  __int64 v11; // rcx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES VidPnTargetColorCoeffDynamicRanges; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int64 v24; // rax
  int updated; // eax
  unsigned int v26; // ebx
  _D3DKMDT_VIDPN_PRESENT_PATH v28; // [rsp+20h] [rbp-308h] BYREF
  _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH v29; // [rsp+190h] [rbp-198h] BYREF

  v4 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  v5 = *(_QWORD *)(v4 + 40);
  if ( !v5 )
  {
    WdLogSingleEntry0(1LL);
    v5 = *(_QWORD *)(v4 + 40);
  }
  v6 = *(_QWORD *)(v5 + 88);
  v7 = *(DXGADAPTER ***)(v6 + 8);
  if ( !v7 )
  {
    WdLogSingleEntry0(1LL);
    v7 = *(DXGADAPTER ***)(v6 + 8);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v7[2]) )
    WdLogSingleEntry0(1LL);
  if ( !a2 )
    return 0LL;
  if ( !DMMVIDEOPRESENTTARGET::IsTargetCurrentActive(*(DMMVIDEOPRESENTTARGET **)(*((_QWORD *)this + 12) + 96LL)) )
    return 0LL;
  memset(&v29.VidPnPresentPathInfo.VidPnTargetId, 0, 0x164uLL);
  memset(&v28, 0, sizeof(v28));
  DMMVIDPNPRESENTPATH::Serialize(this, &v28);
  v8 = &v29;
  v9 = (D3DDDI_GAMMA_RAMP_RGB256x3x16 *)*((_QWORD *)a2 + 4);
  v10 = &v28;
  *(_OWORD *)&v28.GammaRamp.Type = *((_OWORD *)a2 + 1);
  v11 = 2LL;
  v28.GammaRamp.Data.pRgb256x3x16 = v9;
  do
  {
    v12 = *(_OWORD *)&v10->ContentTransformation.ScalingSupport;
    *(_OWORD *)&v8->VidPnPresentPathInfo.VidPnSourceId = *(_OWORD *)&v10->VidPnSourceId;
    v13 = *(_OWORD *)&v10->VisibleFromActiveTLOffset.cy;
    *(_OWORD *)&v8->VidPnPresentPathInfo.ContentTransformation.ScalingSupport = v12;
    VidPnTargetColorCoeffDynamicRanges = v10->VidPnTargetColorCoeffDynamicRanges;
    *(_OWORD *)&v8->VidPnPresentPathInfo.VisibleFromActiveTLOffset.cy = v13;
    v15 = *(_OWORD *)&v10->Content;
    v8->VidPnPresentPathInfo.VidPnTargetColorCoeffDynamicRanges = VidPnTargetColorCoeffDynamicRanges;
    v16 = *(_OWORD *)&v10->CopyProtection.OEMCopyProtection[4];
    *(_OWORD *)&v8->VidPnPresentPathInfo.Content = v15;
    v17 = *(_OWORD *)&v10->CopyProtection.OEMCopyProtection[20];
    *(_OWORD *)&v8->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[4] = v16;
    v18 = *(_OWORD *)&v10->CopyProtection.OEMCopyProtection[36];
    v10 = (_D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v10 + 128);
    *(_OWORD *)&v8->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v17;
    v8 = (_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *)((char *)v8 + 128);
    *(_OWORD *)&v8[-1].VidPnPresentPathInfo.GammaRamp.DataSize = v18;
    --v11;
  }
  while ( v11 );
  v19 = *(_OWORD *)&v10->ContentTransformation.ScalingSupport;
  *(_OWORD *)&v8->VidPnPresentPathInfo.VidPnSourceId = *(_OWORD *)&v10->VidPnSourceId;
  v20 = *(_OWORD *)&v10->VisibleFromActiveTLOffset.cy;
  *(_OWORD *)&v8->VidPnPresentPathInfo.ContentTransformation.ScalingSupport = v19;
  v21 = v10->VidPnTargetColorCoeffDynamicRanges;
  *(_OWORD *)&v8->VidPnPresentPathInfo.VisibleFromActiveTLOffset.cy = v20;
  v22 = *(_OWORD *)&v10->Content;
  v8->VidPnPresentPathInfo.VidPnTargetColorCoeffDynamicRanges = v21;
  v23 = *(_OWORD *)&v10->CopyProtection.OEMCopyProtection[4];
  v24 = *(_QWORD *)&v10->CopyProtection.OEMCopyProtection[20];
  *(_OWORD *)&v8->VidPnPresentPathInfo.Content = v22;
  *(_OWORD *)&v8->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[4] = v23;
  *(_QWORD *)&v8->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v24;
  v29.VidPnPresentPathInfo.ContentTransformation.Rotation = DMMVIDPNPRESENTPATH::GetContentRotationHw(this);
  updated = ADAPTER_DISPLAY::DdiUpdateActiveVidPnPresentPath((ADAPTER_DISPLAY *)v7, &v29);
  v26 = updated;
  if ( updated >= 0 )
    return 0LL;
  WdLogSingleEntry2(2LL, this, updated);
  return v26;
}
