/*
 * XREFs of ?TryDrawSuperWetLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801A8404
 * Callers:
 *     ?TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801A88E0 (-TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180014EBC (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B098 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?reset@?$com_ptr_t@VCBrushRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800DC290 (-reset@-$com_ptr_t@VCBrushRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180111C2C (McTemplateU0q_EventWriteTransfer.c)
 *     McTemplateU0p_EventWriteTransfer @ 0x180180BF8 (McTemplateU0p_EventWriteTransfer.c)
 *     TryFillRenderState @ 0x1801A86B8 (TryFillRenderState.c)
 *     ?TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z @ 0x1801A87F0 (-TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z.c)
 *     ?UpdateRenderStateClip@CSuperWetInkManager@@CA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAUD2D_RECT_U@@@Z @ 0x1801A8E30 (-UpdateRenderStateClip@CSuperWetInkManager@@CA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoi.c)
 *     ?GetSuperWetInkClip@CTreeData@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1801B4A28 (-GetSuperWetInkClip@CTreeData@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 */

__int64 __fastcall CSuperWetInkManager::TryDrawSuperWetLocal(
        CSuperWetInkManager *this,
        struct CSuperWetSource *a2,
        const struct CVisualTree **a3,
        __int64 a4,
        bool *a5)
{
  struct CSuperWetInkManager::SuperWetStroke *v7; // rax
  __int64 v8; // rcx
  const struct CVisualTree *v9; // rdx
  const struct CVisualTree *v10; // rcx
  CVisual *v11; // rax
  __int64 **TreeData; // rax
  __int64 v13; // rcx
  __int64 v15; // rax
  __int64 (__fastcall *v16)(struct CSuperWetSource *, const struct CVisualTree *, __int128 *, __int64 *); // rbx
  int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // [rsp+30h] [rbp-61h] BYREF
  _DWORD v22[2]; // [rsp+38h] [rbp-59h] BYREF
  _DWORD v23[4]; // [rsp+40h] [rbp-51h] BYREF
  __int128 v24; // [rsp+50h] [rbp-41h] BYREF
  __int128 v25; // [rsp+60h] [rbp-31h] BYREF
  __int128 v26; // [rsp+70h] [rbp-21h] BYREF
  __int128 v27; // [rsp+80h] [rbp-11h] BYREF
  int v28; // [rsp+90h] [rbp-1h]
  int v29; // [rsp+94h] [rbp+3h]
  char v30[28]; // [rsp+9Ch] [rbp+Bh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+57h]

  *a5 = 0;
  v7 = CSuperWetInkManager::TryLookupDataForSource(this, a2);
  if ( !v7 || *(_QWORD *)(*(_QWORD *)v8 + 496LL) - *((_QWORD *)v7 + 11) >= 0xAuLL )
    return 0LL;
  TryFillRenderState((CDrawingContext *)a3);
  v28 = 0;
  v29 = 0;
  v9 = a3[4];
  v27 = *(_OWORD *)&_xmm;
  v10 = (const struct CVisualTree *)((char *)v9 + *(int *)(*((_QWORD *)v9 + 1) + 16LL) + 8);
  (**(void (__fastcall ***)(const struct CVisualTree *, _DWORD *))v10)(v10, v22);
  v23[0] = 0;
  v23[1] = 0;
  v23[2] = v22[0];
  v23[3] = v22[1];
  v11 = (CVisual *)(*((__int64 (__fastcall **)(char *))a3[3] + 4))((char *)a3 + 24);
  TreeData = CVisual::FindTreeData(v11, a3[991]);
  if ( TreeData )
    v25 = *(_OWORD *)CTreeData::GetSuperWetInkClip(TreeData, &v25);
  else
    v25 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v24 = v25;
  if ( !(unsigned __int8)CSuperWetInkManager::UpdateRenderStateClip(&v24, v23, a3 + 12, v30) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
      McTemplateU0p_EventWriteTransfer(v13, &EVTDESC_COMPUTESCRIBBLE_DRAWSKIPPED, (__int64)a2);
    *a5 = 1;
    return 0LL;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(struct CSuperWetSource *, const struct CVisualTree *, __int128 *, _QWORD))(*(_QWORD *)a2 + 288LL))(
          a2,
          a3[5],
          &v27,
          0LL) )
    return 0LL;
  v15 = *(_QWORD *)a2;
  v21 = 0LL;
  v16 = *(__int64 (__fastcall **)(struct CSuperWetSource *, const struct CVisualTree *, __int128 *, __int64 *))(v15 + 296);
  wil::com_ptr_t<CBrushRenderingGraph,wil::err_returncode_policy>::reset(&v21);
  v17 = v16(a2, a3[5], &v27, &v21);
  v18 = v17;
  if ( v17 >= 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v21 + 72LL))(v21) )
    {
      v26 = 0LL;
      v17 = (*(__int64 (__fastcall **)(__int64, const struct CVisualTree **, __int128 *))(*(_QWORD *)v21 + 80LL))(
              v21,
              a3,
              &v26);
      v18 = v17;
      if ( v17 < 0 )
      {
        v19 = 627LL;
        goto LABEL_19;
      }
      if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a3[991] + 184LL))(a3[991]) )
        *(_OWORD *)((char *)a2 + 72) = v26;
      *a5 = 1;
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
    {
      McTemplateU0q_EventWriteTransfer(v20, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, 19LL);
    }
    v18 = 0;
    goto LABEL_24;
  }
  v19 = 615LL;
LABEL_19:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
    (const char *)(unsigned int)v17);
LABEL_24:
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>(&v21);
  return v18;
}
