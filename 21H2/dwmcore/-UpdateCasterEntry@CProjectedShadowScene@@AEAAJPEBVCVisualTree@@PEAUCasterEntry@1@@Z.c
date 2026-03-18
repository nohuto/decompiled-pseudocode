/*
 * XREFs of ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x180114AC6
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180236944 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B098 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x1800E8734 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Find@PEBVCVisualTree@@@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@1@AEBQEBVCVisualTree@@@Z @ 0x180201004 (--$_Find@PEBVCVisualTree@@@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProject.c)
 *     ?GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z @ 0x180201840 (-GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z.c)
 *     ?IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ @ 0x1802018DC (-IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ.c)
 *     ?at@?$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@@std@@QEBAAEBUVisualPropertyData@CProjectedShadowCaster@@AEBQEBVCVisualTree@@@Z @ 0x180202304 (-at@-$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$less@PEBVCVisualTree@@.c)
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@@Z @ 0x18023610C (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@.c)
 *     ?DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x1802363B8 (-DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z.c)
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1802368A0 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x180261004 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 *     ?GetLightToCameraMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@AEBUfloat3@Numerics@Foundation@Windows@@PEAVCMILMatrix@@@Z @ 0x1802AA298 (-GetLightToCameraMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@AEBUfloat3@Num.c)
 */

__int64 __fastcall CProjectedShadowScene::UpdateCasterEntry(
        CProjectedShadowScene *this,
        const struct CVisualTree *a2,
        struct CProjectedShadowScene::CasterEntry *a3)
{
  struct CProjectedShadowCaster *v3; // r14
  unsigned int v7; // edi
  CVisual *v8; // r13
  __int64 v9; // rax
  bool *v10; // r8
  float *v11; // rax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  const struct CVisualTree *v15; // rdx
  int LightToCameraMatrix; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  struct D2D_VECTOR_4F v25; // [rsp+38h] [rbp-A9h] BYREF
  struct D2D_VECTOR_4F v26; // [rsp+48h] [rbp-99h] BYREF
  __int128 v27; // [rsp+58h] [rbp-89h] BYREF
  __int128 v28; // [rsp+68h] [rbp-79h]
  __int128 v29; // [rsp+78h] [rbp-69h]
  __int128 v30; // [rsp+88h] [rbp-59h]
  int v31; // [rsp+98h] [rbp-49h]
  _OWORD v32[4]; // [rsp+A8h] [rbp-39h] BYREF
  int v33; // [rsp+E8h] [rbp+7h]
  const struct CVisualTree *v34; // [rsp+148h] [rbp+67h] BYREF
  __int64 v35; // [rsp+158h] [rbp+77h]

  v3 = *(struct CProjectedShadowCaster **)a3;
  v7 = 0;
  v8 = *(CVisual **)(*(_QWORD *)a3 + 64LL);
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 200LL))(*((_QWORD *)this + 12));
  *((_BYTE *)a3 + 152) = 1;
  v35 = v9;
  if ( !CProjectedShadowCaster::IsEmptyMaskContent(v3)
    && CProjectedShadowScene::IsValidVisual(a2, v8)
    && (v34 = a2,
        *(_BYTE *)(std::map<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData>::at((char *)v3 + 80, &v34)
                 + 17))
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(CProjectedShadowCaster::GetEffectiveAlpha(v3, a2, v10)) & _xmm) >= 0.0000011920929
    && (v34 = a2,
        v11 = (float *)std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Find<CVisualTree const *>(
                         (char *)v3 + 80,
                         &v34),
        (float)(v11[17] - v11[15]) >= 0.5)
    && (float)(v11[18] - v11[16]) >= 0.5 )
  {
    if ( *((_QWORD *)a3 + 1) < *((_QWORD *)this + 13)
      || *((_QWORD *)a3 + 1) < (unsigned __int64)CVisual::FindTreeData(v8, a2)[34] )
    {
      CVisual::GetEffectiveSize(v8, (float *)&v34, (float *)&v34 + 1);
      v33 = 0;
      v25.y = *((float *)&v34 + 1) * 0.5;
      v25.z = 0.0;
      v25.x = *(float *)&v34 * 0.5;
      LODWORD(v25.w) = (_DWORD)FLOAT_1_0;
      v13 = CVisual::CalcSrcToDestVisualTransform(a2, v12, v8, v35);
      v7 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0x2CDu);
      }
      else
      {
        CMILMatrix::Transform4DVector((CMILMatrix *)v32, &v26, &v25);
        v15 = (const struct CVisualTree *)*((_QWORD *)this + 12);
        v25.x = v26.x / v26.w;
        v25.z = v26.z / v26.w;
        v25.y = v26.y / v26.w;
        LightToCameraMatrix = ShadowHelpers::GetLightToCameraMatrix(
                                a2,
                                v15,
                                (const struct CCompositionLight *)&v25,
                                (struct CProjectedShadowScene::CasterEntry *)((char *)a3 + 84),
                                (struct CMILMatrix *)v32);
        v7 = LightToCameraMatrix;
        if ( LightToCameraMatrix < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, LightToCameraMatrix, 0x2D7u);
        }
        else
        {
          v27 = v32[0];
          v31 = v33;
          v28 = v32[1];
          v29 = v32[2];
          v30 = v32[3];
          CMILMatrix::Multiply(
            (CMILMatrix *)&v27,
            (struct CProjectedShadowScene::CasterEntry *)((char *)a3 + 84),
            v18,
            v19);
          v20 = v31;
          v21 = v28;
          *((_OWORD *)a3 + 1) = v27;
          v22 = v29;
          *((_OWORD *)a3 + 2) = v21;
          v23 = v30;
          *((_OWORD *)a3 + 3) = v22;
          *((_OWORD *)a3 + 4) = v23;
          *((_DWORD *)a3 + 20) = v20;
          *((_QWORD *)a3 + 1) = *(_QWORD *)(*((_QWORD *)this + 2) + 496LL);
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
