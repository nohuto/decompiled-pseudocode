/*
 * XREFs of ?TryRegisterSuperWetForDrawHost@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801A89B4
 * Callers:
 *     ?TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801A88E0 (-TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B098 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ @ 0x1801A73B8 (-DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ.c)
 *     ?RegisterStrokeOnHost@CSuperWetInkManager@@AEAAJPEAUVailSuperWetStroke@1@PEA_N@Z @ 0x1801A7E40 (-RegisterStrokeOnHost@CSuperWetInkManager@@AEAAJPEAUVailSuperWetStroke@1@PEA_N@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SuperWetInk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801A8058 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SuperWetInk@@@details@wil@@QEAAX_NW4Repor.c)
 *     TryFillRenderState @ 0x1801A86B8 (TryFillRenderState.c)
 *     ?TryLookupVailDataForSource@CSuperWetInkManager@@AEAAPEAUVailSuperWetStroke@1@PEAVCSuperWetSource@@@Z @ 0x1801A8814 (-TryLookupVailDataForSource@CSuperWetInkManager@@AEAAPEAUVailSuperWetStroke@1@PEAVCSuperWetSourc.c)
 *     ?GetSuperWetInkClip@CTreeData@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1801B4A28 (-GetSuperWetInkClip@CTreeData@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 */

__int64 __fastcall CSuperWetInkManager::TryRegisterSuperWetForDrawHost(
        struct CSuperWetSource **this,
        struct CSuperWetSource *a2,
        struct CDrawingContext *a3,
        __int64 a4,
        bool *a5)
{
  unsigned __int8 v7; // bp
  struct CSuperWetInkManager::VailSuperWetStroke *v9; // rbx
  struct CSuperWetSource *v10; // r9
  struct CSuperWetSource *v11; // rax
  CVisual *v13; // rax
  __int64 **TreeData; // rax
  int v15; // xmm0_4
  int v16; // xmm1_4
  int v17; // xmm2_4
  int v18; // eax
  unsigned int v19; // ebx
  int v20[4]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v7 = a4;
  *a5 = 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuperWetInk>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SuperWetInk>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3,
    a4);
  if ( a2 != this[1] || !this[11] )
    return 0LL;
  v9 = CSuperWetInkManager::TryLookupVailDataForSource((CSuperWetInkManager *)this, a2);
  v11 = (struct CSuperWetSource *)*((_QWORD *)v9 + 1);
  if ( !v11 )
  {
    *((_QWORD *)v9 + 1) = v10;
    *((_QWORD *)v9 + 3) = (**(__int64 (__fastcall ***)(struct CSuperWetSource *))this[11])(this[11]);
    v11 = (struct CSuperWetSource *)*((_QWORD *)v9 + 1);
    v10 = this[11];
  }
  if ( v11 != v10 )
    return 0LL;
  *((_QWORD *)v9 + 2) = *((_QWORD *)a3 + 5);
  if ( !TryFillRenderState(a3, v7, 0, (__int64)v9 + 32) )
  {
    CSuperWetInkManager::DeactivateCurrentSource(this);
    return 0LL;
  }
  v13 = (CVisual *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a3 + 3) + 32LL))((char *)a3 + 24);
  TreeData = CVisual::FindTreeData(v13, *((const struct CVisualTree **)a3 + 991));
  if ( TreeData )
    *(_OWORD *)v20 = *(_OWORD *)CTreeData::GetSuperWetInkClip(TreeData, v20);
  else
    *(_OWORD *)v20 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v15 = v20[1];
  v16 = v20[2];
  v17 = v20[3];
  *((_DWORD *)v9 + 22) = v20[0];
  *((_DWORD *)v9 + 23) = v15;
  *((_DWORD *)v9 + 24) = v16;
  *((_DWORD *)v9 + 25) = v17;
  v18 = CSuperWetInkManager::RegisterStrokeOnHost((struct ID3D12Device *)this, v9, a5);
  v19 = v18;
  if ( v18 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x34E,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
    (const char *)(unsigned int)v18);
  return v19;
}
