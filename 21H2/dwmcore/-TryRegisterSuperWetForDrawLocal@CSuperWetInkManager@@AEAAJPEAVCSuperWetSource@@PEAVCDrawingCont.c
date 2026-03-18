/*
 * XREFs of ?TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801A8B44
 * Callers:
 *     ?TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801A88E0 (-TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@.c)
 * Callees:
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B098 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180111C2C (McTemplateU0q_EventWriteTransfer.c)
 *     ??4?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIMonitorTarget@@@Z @ 0x1801A6F60 (--4-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIMonitorTarget@.c)
 *     ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ @ 0x1801A73B8 (-DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SuperWetInk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801A8058 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SuperWetInk@@@details@wil@@QEAAX_NW4Repor.c)
 *     TryFillRenderState @ 0x1801A86B8 (TryFillRenderState.c)
 *     ?TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z @ 0x1801A87F0 (-TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z.c)
 *     ?TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z @ 0x1801A8838 (-TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z.c)
 *     ?GetSuperWetInkClip@CTreeData@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1801B4A28 (-GetSuperWetInkClip@CTreeData@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 */

__int64 __fastcall CSuperWetInkManager::TryRegisterSuperWetForDrawLocal(
        CSuperWetInkManager *this,
        struct CSuperWetSource *a2,
        struct CDrawingContext *a3,
        __int64 a4,
        bool *a5)
{
  unsigned __int8 v7; // r15
  __int64 *v9; // rsi
  __int64 v10; // rsi
  struct CSuperWetInkManager::SuperWetStroke *v11; // rbx
  __int64 v12; // rax
  CVisual *v13; // rax
  __int64 **TreeData; // rax
  int v15; // xmm0_4
  int v16; // xmm1_4
  int v17; // xmm2_4
  __int64 v18; // rcx
  __int128 v20; // [rsp+20h] [rbp-48h] BYREF

  v7 = a4;
  *a5 = 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuperWetInk>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SuperWetInk>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3,
    a4);
  if ( a2 == *((struct CSuperWetSource **)this + 1) )
  {
    v9 = (__int64 *)*((_QWORD *)a3 + 6);
    if ( v9 )
    {
      v10 = *v9;
      if ( v10 )
      {
        v11 = CSuperWetInkManager::TryLookupDataForSource(this, a2);
        v12 = *((_QWORD *)v11 + 1);
        if ( !v12 )
        {
          wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::operator=((__int64 *)v11 + 1, v10);
          v12 = *((_QWORD *)v11 + 1);
        }
        if ( v12 == v10 )
        {
          if ( TryFillRenderState(a3, v7, 0, (__int64)v11 + 16) )
          {
            v13 = (CVisual *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a3 + 3) + 32LL))((char *)a3 + 24);
            TreeData = CVisual::FindTreeData(v13, *((const struct CVisualTree **)a3 + 991));
            if ( TreeData )
              v20 = *(_OWORD *)CTreeData::GetSuperWetInkClip(TreeData, &v20);
            else
              v20 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
            v15 = DWORD1(v20);
            v16 = DWORD2(v20);
            v17 = HIDWORD(v20);
            *((_DWORD *)v11 + 18) = v20;
            *((_DWORD *)v11 + 19) = v15;
            *((_DWORD *)v11 + 20) = v16;
            *((_DWORD *)v11 + 21) = v17;
            if ( (int)CSuperWetInkManager::TryReadyForCurrentFrame(this, v11, a5) < 0 )
            {
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
                McTemplateU0q_EventWriteTransfer(v18, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, 18LL);
              CSuperWetInkManager::DeactivateCurrentSource((struct CSuperWetSource **)this);
              *a5 = 0;
            }
          }
          else
          {
            CSuperWetInkManager::DeactivateCurrentSource((struct CSuperWetSource **)this);
          }
        }
      }
    }
  }
  return 0LL;
}
