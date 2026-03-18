/*
 * XREFs of ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x18000C080
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x18000C670 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     ?GetLightToCameraMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@AEBUfloat3@Numerics@Foundation@Windows@@PEAVCMILMatrix@@@Z @ 0x18000B66C (-GetLightToCameraMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@AEBUfloat3@Num.c)
 *     ?GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z @ 0x18000C308 (-GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z.c)
 *     ?at@?$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@@std@@QEBAAEBUVisualPropertyData@CProjectedShadowCaster@@AEBQEBVCVisualTree@@@Z @ 0x18000C330 (-at@-$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$less@PEBVCVisualTree@@.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEBA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@2@AEBQEBVCVisualTree@@@Z @ 0x18000C364 (-find@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$le.c)
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x18000DC50 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@@Z @ 0x18000DD44 (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@.c)
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18000DF28 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ @ 0x18000DFF0 (-IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ.c)
 *     ?DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x18000E880 (-DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180082C58 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800A1EB8 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x1800BBFC8 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadowScene::UpdateCasterEntry(
        CProjectedShadowScene *this,
        const struct CVisualTree *a2,
        struct CProjectedShadowScene::CasterEntry *a3)
{
  struct CProjectedShadowCaster *v3; // r14
  unsigned int v7; // edi
  CVisual *v8; // r12
  __int64 v9; // rax
  bool *v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // ecx
  const struct CVisualTree *v15; // rdx
  int LightToCameraMatrix; // eax
  unsigned int v17; // ecx
  int v18; // eax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  struct D2D_VECTOR_4F v23; // [rsp+38h] [rbp-A9h] BYREF
  struct D2D_VECTOR_4F v24; // [rsp+48h] [rbp-99h] BYREF
  __int128 v25; // [rsp+58h] [rbp-89h] BYREF
  __int128 v26; // [rsp+68h] [rbp-79h]
  __int128 v27; // [rsp+78h] [rbp-69h]
  __int128 v28; // [rsp+88h] [rbp-59h]
  int v29; // [rsp+98h] [rbp-49h]
  _OWORD v30[4]; // [rsp+A8h] [rbp-39h] BYREF
  int v31; // [rsp+E8h] [rbp+7h]
  const struct CVisualTree *v32; // [rsp+148h] [rbp+67h] BYREF
  __int64 v33; // [rsp+158h] [rbp+77h]
  char v34; // [rsp+160h] [rbp+7Fh] BYREF

  v3 = *(struct CProjectedShadowCaster **)a3;
  v7 = 0;
  v8 = *(CVisual **)(*(_QWORD *)a3 + 56LL);
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 216LL))(*((_QWORD *)this + 11));
  *((_BYTE *)a3 + 152) = 1;
  v33 = v9;
  if ( !CProjectedShadowCaster::IsEmptyMaskContent(v3)
    && CProjectedShadowScene::IsValidVisual(a2, v8)
    && (v32 = a2,
        *(_BYTE *)(std::map<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData>::at((char *)v3 + 72, &v32)
                 + 17))
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(CProjectedShadowCaster::GetEffectiveAlpha(v3, a2, v10)) & _xmm) >= 0.0000011920929
    && (v32 = a2,
        v11 = std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::find(
                (char *)v3 + 72,
                &v34,
                &v32),
        (float)(*(float *)(*(_QWORD *)v11 + 68LL) - *(float *)(*(_QWORD *)v11 + 60LL)) >= 0.5)
    && (float)(*(float *)(*(_QWORD *)v11 + 72LL) - *(float *)(*(_QWORD *)v11 + 64LL)) >= 0.5 )
  {
    if ( *((_QWORD *)a3 + 1) < *((_QWORD *)this + 12)
      || *((_QWORD *)a3 + 1) < *((_QWORD *)CVisual::FindTreeData(v8, a2) + 15) )
    {
      CVisual::GetEffectiveSize(v8, (float *)&v32, (float *)&v32 + 1);
      v31 = 0;
      v23.y = *((float *)&v32 + 1) * 0.5;
      v23.z = 0.0;
      v23.x = *(float *)&v32 * 0.5;
      LODWORD(v23.w) = (_DWORD)FLOAT_1_0;
      v13 = CVisual::CalcSrcToDestVisualTransform(a2, v12, v8, v33, v30);
      v7 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x2CDu, 0LL);
      }
      else
      {
        CMILMatrix::Transform4DVector((CMILMatrix *)v30, &v24, &v23);
        v15 = (const struct CVisualTree *)*((_QWORD *)this + 11);
        v23.x = v24.x / v24.w;
        v23.z = v24.z / v24.w;
        v23.y = v24.y / v24.w;
        LightToCameraMatrix = ShadowHelpers::GetLightToCameraMatrix(
                                a2,
                                v15,
                                (const struct CCompositionLight *)&v23,
                                (struct CProjectedShadowScene::CasterEntry *)((char *)a3 + 84));
        v7 = LightToCameraMatrix;
        if ( LightToCameraMatrix < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, LightToCameraMatrix, 0x2D7u, 0LL);
        }
        else
        {
          v25 = v30[0];
          v29 = v31;
          v26 = v30[1];
          v27 = v30[2];
          v28 = v30[3];
          CMILMatrix::Multiply((CMILMatrix *)&v25, (struct CProjectedShadowScene::CasterEntry *)((char *)a3 + 84));
          v18 = v29;
          v19 = v26;
          *((_OWORD *)a3 + 1) = v25;
          v20 = v27;
          *((_OWORD *)a3 + 2) = v19;
          v21 = v28;
          *((_OWORD *)a3 + 3) = v20;
          *((_OWORD *)a3 + 4) = v21;
          *((_DWORD *)a3 + 20) = v18;
          *((_QWORD *)a3 + 1) = *(_QWORD *)(*((_QWORD *)this + 2) + 352LL);
        }
      }
    }
    return v7;
  }
  else
  {
    *((_BYTE *)a3 + 152) = 0;
    CProjectedShadowScene::DiscardCachesForCaster(this, v3);
    return 0LL;
  }
}
