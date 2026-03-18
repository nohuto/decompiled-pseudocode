/*
 * XREFs of ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z @ 0x180004FDC
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCDirtyRegion@@@Z @ 0x180079150 (-PreCompute@CPreComputeContext@@IEAAJPEAVCDirtyRegion@@@Z.c)
 *     ?UpdateProjectedShadowCasters@CPreComputeContext@@AEAAJ_N@Z @ 0x1800D5044 (-UpdateProjectedShadowCasters@CPreComputeContext@@AEAAJ_N@Z.c)
 * Callees:
 *     ?CalculateCasterBounds@CProjectedShadowCaster@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@PEA_N@Z @ 0x1800055D0 (-CalculateCasterBounds@CProjectedShadowCaster@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?ComputeEffectiveAlpha@CProjectedShadowCaster@@AEBAMPEBVCVisualTree@@PEA_N@Z @ 0x1800064C4 (-ComputeEffectiveAlpha@CProjectedShadowCaster@@AEBAMPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RequestRedraw@CProjectedShadowCaster@@QEAAXXZ @ 0x18000660C (-RequestRedraw@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ??$_Lbound@PEBVCVisualTree@@@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@1@AEBQEBVCVisualTree@@@Z @ 0x18000C3A0 (--$_Lbound@PEBVCVisualTree@@@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProje.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAPEBVCVisualTree@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAPEBVCVisualTree@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18000F7C8 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAPEBVCVisualTree@@@2@V-$tuple@$$V@2@.c)
 *     ?InternalRelease@?$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x18001CC20 (-InternalRelease@-$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18007AFB4 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@_N@Z @ 0x1800C3914 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@_N@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProjectedShadowCaster::UpdateVisualProperty(
        const struct CVisual **this,
        const struct CVisualTree *a2,
        char a3)
{
  __int64 v5; // rax
  _QWORD *v6; // r9
  unsigned __int64 v7; // r10
  __int64 v8; // rbx
  unsigned __int64 CurrentFrameId; // rax
  float v10; // xmm0_4
  char v11; // al
  char v12; // r8
  CVisualTree *v13; // r10
  char v14; // si
  bool v15; // cl
  __int128 v16; // xmm0
  bool v17[8]; // [rsp+30h] [rbp-30h] BYREF
  CVisualTree *v18; // [rsp+38h] [rbp-28h] BYREF
  char v19; // [rsp+40h] [rbp-20h] BYREF
  __int128 v20; // [rsp+48h] [rbp-18h] BYREF

  v18 = a2;
  v5 = std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Lbound<CVisualTree const *>(
         this + 9,
         &v18);
  v8 = v5;
  if ( v5 == *v6 || v7 < *(_QWORD *)(v5 + 32) )
  {
    *(_QWORD *)&v20 = &v18;
    v8 = *(_QWORD *)std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<CVisualTree const * &&>,std::tuple<>>(
                      (_DWORD)v6,
                      (unsigned int)&v19,
                      v5,
                      (_DWORD)v6,
                      (__int64)&v20);
  }
  CurrentFrameId = GetCurrentFrameId();
  if ( *(_QWORD *)(v8 + 48) != CurrentFrameId )
  {
    *(_QWORD *)(v8 + 48) = CurrentFrameId;
    v10 = CProjectedShadowCaster::ComputeEffectiveAlpha((CProjectedShadowCaster *)this, v18, v17);
    v11 = CVisualTree::_IsInTree(v18, this[7], 1);
    v14 = 0;
    v15 = v17[0];
    if ( *(float *)(v8 + 40) != v10 || *(_BYTE *)(v8 + 56) != v17[0] || *(_BYTE *)(v8 + 57) != v11 )
    {
      *(float *)(v8 + 40) = v10;
      v14 = v12;
      *(_BYTE *)(v8 + 56) = v15;
      *(_BYTE *)(v8 + 57) = v11;
      v13 = v18;
    }
    CProjectedShadowCaster::CalculateCasterBounds(this, &v20, v13, v17);
    if ( *(_BYTE *)(v8 + 76) != v17[0]
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v8 + 60) - *(float *)&v20) & _xmm) > 0.0000011920929
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v8 + 64) - *((float *)&v20 + 1)) & _xmm) > 0.0000011920929
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v8 + 68) - *((float *)&v20 + 2)) & _xmm) > 0.0000011920929
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v8 + 72) - *((float *)&v20 + 3)) & _xmm) > 0.0000011920929 )
    {
      v16 = v20;
      *(_BYTE *)(v8 + 76) = v17[0];
      *(_OWORD *)(v8 + 60) = v16;
      Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(v8 + 80);
      v14 = 1;
    }
    if ( v14 )
    {
      if ( !a3 )
      {
        (*((void (__fastcall **)(const struct CVisual **, _QWORD, const struct CVisual **))*this + 9))(this, 0LL, this);
        CProjectedShadowCaster::RequestRedraw((CProjectedShadowCaster *)this);
      }
    }
  }
}
