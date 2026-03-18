/*
 * XREFs of ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180008B30
 * Callers:
 *     ?DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x18000844C (-DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2CProjectedShadow@@SAPEAX_K@Z @ 0x180006880 (--2CProjectedShadow@@SAPEAX_K@Z.c)
 *     ??0CProjectedShadow@@QEAA@PEAVCComposition@@@Z @ 0x1800068A4 (--0CProjectedShadow@@QEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCProjectedShadowReceiver@@@Z @ 0x180006B48 (-Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCP.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAVCProjectedShadowCaster@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAVCProjectedShadowCaster@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180006D60 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAVCProjectedShadowCaster@@@2@V-$tup.c)
 *     ?IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry@1@PEBUReceiverEntry@1@M@Z @ 0x180007C58 (-IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry.c)
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x180008540 (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 *     ?UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z @ 0x180008894 (-UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z.c)
 *     ?GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVisual@@PEAVCMILMatrix@@@Z @ 0x180009080 (-GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVi.c)
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x18000A110 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@@Z @ 0x18000A204 (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@.c)
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18000A3E8 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@@Z @ 0x18000A558 (-FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@.c)
 *     ?IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ @ 0x18000A580 (-IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ.c)
 *     ?CalculateOpacity@CProjectedShadowScene@@AEBAMM@Z @ 0x18000A5E8 (-CalculateOpacity@CProjectedShadowScene@@AEBAMM@Z.c)
 *     ?SetTransforms@CProjectedShadow@@QEAAXAEBVCMILMatrix@@00@Z @ 0x18000A6E8 (-SetTransforms@CProjectedShadow@@QEAAXAEBVCMILMatrix@@00@Z.c)
 *     ?SetBlurRadius@CProjectedShadow@@QEAAXM@Z @ 0x18000A858 (-SetBlurRadius@CProjectedShadow@@QEAAXM@Z.c)
 *     ?SetShadowOpacity@CProjectedShadow@@QEAAXM@Z @ 0x18000A894 (-SetShadowOpacity@CProjectedShadow@@QEAAXM@Z.c)
 *     ?CalculateBlurRadius@CProjectedShadowScene@@AEBAMM@Z @ 0x18000A8D4 (-CalculateBlurRadius@CProjectedShadowScene@@AEBAMM@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEAVCProjectedShadowCaster@@@Z @ 0x18000AD8C (-erase@-$_Tree@V-$_Tmap_traits@PEAVCProjectedShadowCaster@@V-$com_ptr_t@VCProjectedShadow@@Uerr_.c)
 *     ?ClearShadows@CProjectedShadowScene@@AEAAX_N@Z @ 0x18000B134 (-ClearShadows@CProjectedShadowScene@@AEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18002FB48 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800A7124 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadowScene::PrepareShadows(
        struct CComposition **this,
        struct CDrawingContext *a2,
        struct CProjectedShadowReceiver *a3)
{
  const struct CVisualTree *v3; // r15
  struct CVisual *v7; // rax
  struct CComposition *v8; // rcx
  struct CProjectedShadowScene::ReceiverEntry *ReceiverEntry; // r13
  CProjectedShadowScene *v10; // rcx
  int updated; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edi
  struct CComposition *v14; // rcx
  int v15; // eax
  struct CComposition *v16; // rbx
  struct CCompositionLight *v17; // r14
  __int64 v18; // rdx
  unsigned int v19; // ecx
  float z; // xmm6_4
  float v21; // xmm7_4
  const struct CVisualTree *v22; // rdx
  CProjectedShadowScene *v23; // rcx
  float v24; // xmm0_4
  __int64 **v25; // r15
  __int64 *v26; // rax
  __int64 *v27; // rdx
  __int64 v28; // rcx
  CProjectedShadow *v29; // r14
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  struct CCompositionLight *v32; // r12
  const struct CVisualTree *v33; // rdx
  const struct CVisualTree *v34; // rdx
  CProjectedShadow *v36; // rax
  int v37; // eax
  unsigned int v38; // ecx
  __int64 *v39; // rax
  __int64 *v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r15
  CVisual *v43; // rax
  struct CTreeData *TreeData; // rax
  struct CMILMatrix *v45; // [rsp+28h] [rbp-E0h]
  struct CMILMatrix *v46; // [rsp+28h] [rbp-E0h]
  unsigned int v47; // [rsp+28h] [rbp-E0h]
  struct CCompositionLight *v48; // [rsp+38h] [rbp-D0h]
  struct CProjectedShadowCaster **v49; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v50[3]; // [rsp+48h] [rbp-C0h] BYREF
  struct CCompositionLight *v51; // [rsp+60h] [rbp-A8h]
  struct CComposition *v52; // [rsp+68h] [rbp-A0h]
  __int128 v53; // [rsp+70h] [rbp-98h] BYREF
  __int128 v54; // [rsp+80h] [rbp-88h]
  __int128 v55; // [rsp+90h] [rbp-78h]
  __int128 v56; // [rsp+A0h] [rbp-68h]
  int v57; // [rsp+B0h] [rbp-58h]
  __int128 v58; // [rsp+B4h] [rbp-54h] BYREF
  __int128 v59; // [rsp+C4h] [rbp-44h]
  __int128 v60; // [rsp+D4h] [rbp-34h]
  __int128 v61; // [rsp+E4h] [rbp-24h]
  int v62; // [rsp+F4h] [rbp-14h]
  _OWORD v63[4]; // [rsp+F8h] [rbp-10h] BYREF
  int v64; // [rsp+138h] [rbp+30h]
  _OWORD v65[4]; // [rsp+148h] [rbp+40h] BYREF
  int v66; // [rsp+188h] [rbp+80h]
  _OWORD v67[4]; // [rsp+198h] [rbp+90h] BYREF
  int v68; // [rsp+1D8h] [rbp+D0h]
  __int64 v69; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v70; // [rsp+1F0h] [rbp+E8h] BYREF
  _OWORD v71[4]; // [rsp+1F8h] [rbp+F0h] BYREF
  int v72; // [rsp+238h] [rbp+130h]
  struct D2D_VECTOR_4F v73; // [rsp+248h] [rbp+140h] BYREF
  int v74; // [rsp+2D0h] [rbp+1C8h]
  struct CProjectedShadowCaster *v76; // [rsp+2E0h] [rbp+1D8h] BYREF

  v3 = (const struct CVisualTree *)*((_QWORD *)a2 + 741);
  v48 = (struct CCompositionLight *)*((_QWORD *)a3 + 7);
  v50[0] = v3;
  if ( CProjectedShadowScene::IsEmptyProjection((CProjectedShadowScene *)this)
    || (v7 = (struct CVisual *)(*(__int64 (__fastcall **)(struct CComposition *))(*(_QWORD *)this[11] + 216LL))(this[11]),
        !CProjectedShadowScene::IsValidVisual(v3, v7)) )
  {
    CProjectedShadowScene::ClearShadows((CProjectedShadowScene *)this, 1);
  }
  else
  {
    if ( this[12] )
    {
      v43 = (CVisual *)(*(__int64 (__fastcall **)(struct CComposition *))(*(_QWORD *)this[11] + 216LL))(this[11]);
      TreeData = CVisual::FindTreeData(v43, v3);
      v8 = this[12];
      if ( (unsigned __int64)v8 <= *((_QWORD *)TreeData + 15) )
        v8 = (struct CComposition *)*((_QWORD *)TreeData + 15);
    }
    else
    {
      v8 = (struct CComposition *)*((_QWORD *)this[2] + 44);
    }
    this[12] = v8;
    ReceiverEntry = CProjectedShadowScene::FindReceiverEntry((CProjectedShadowScene *)this, a3);
    updated = CProjectedShadowScene::UpdateReceiverEntry(v10, a2, (CProjectedShadowReceiver **)ReceiverEntry);
    v13 = updated;
    if ( updated < 0 )
    {
      v47 = 819;
LABEL_67:
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, updated, v47, 0LL);
      return v13;
    }
    if ( *((_BYTE *)ReceiverEntry + 100) )
    {
      v14 = this[7];
      v15 = 0;
      v52 = v14;
      v16 = *(struct CComposition **)v14;
      while ( v16 != v14 )
      {
        v74 = v15 + 1;
        if ( v15 + 1 > 5 )
          break;
        v76 = (struct CProjectedShadowCaster *)*((_QWORD *)v16 + 2);
        v17 = (struct CCompositionLight *)*((_QWORD *)v76 + 7);
        v51 = v17;
        if ( v17 == v48 )
          goto LABEL_31;
        v13 = CProjectedShadowScene::UpdateCasterEntry(
                (CProjectedShadowScene *)this,
                v3,
                (struct CComposition *)((char *)v16 + 16));
        if ( (v13 & 0x80000000) != 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v13, 0x34Fu, 0LL);
          return v13;
        }
        if ( !*((_BYTE *)v16 + 168) )
          goto LABEL_31;
        v68 = 0;
        updated = CVisual::CalcSrcToDestVisualTransform(v3, v18, v17, v48, v67);
        v13 = updated;
        if ( updated < 0 )
        {
          v47 = 856;
          goto LABEL_67;
        }
        *(_OWORD *)&v50[1] = _xmm;
        z = CMILMatrix::Transform4DVector((CMILMatrix *)v67, &v73, (const struct D2D_VECTOR_4F *)&v50[1])->z;
        v21 = CProjectedShadowScene::CalculateOpacity((CProjectedShadowScene *)this, z);
        v24 = CProjectedShadowScene::CalculateBlurRadius((CProjectedShadowScene *)this, z);
        if ( COERCE_FLOAT(LODWORD(v21) & _xmm) >= 0.0000011920929
          && CProjectedShadowScene::IsCasterInBetweenLightAndReceiver(
               v23,
               v22,
               (struct CComposition *)((char *)v16 + 16),
               ReceiverEntry,
               LODWORD(v24)) )
        {
          v25 = (__int64 **)((char *)ReceiverEntry + 8);
          v26 = (__int64 *)*((_QWORD *)ReceiverEntry + 1);
          v27 = v26;
          v28 = v26[1];
          if ( !*(_BYTE *)(v28 + 25) )
          {
            do
            {
              if ( *(_QWORD *)(v28 + 32) < (unsigned __int64)v76 )
              {
                v28 = *(_QWORD *)(v28 + 16);
              }
              else
              {
                v26 = (__int64 *)v28;
                v28 = *(_QWORD *)v28;
              }
            }
            while ( !*(_BYTE *)(v28 + 25) );
            v27 = *v25;
          }
          if ( v26 == v27 || (unsigned __int64)v76 < v26[4] )
          {
            v49 = &v76;
            v26 = (__int64 *)*std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<CProjectedShadowCaster * const &>,std::tuple<>>(
                                (__int64 ***)ReceiverEntry + 1,
                                &v69,
                                v26);
          }
          v29 = (CProjectedShadow *)v26[5];
          if ( !v29 )
          {
            v36 = (CProjectedShadow *)CProjectedShadow::operator new();
            if ( v36 )
              v29 = CProjectedShadow::CProjectedShadow(v36, this[2]);
            else
              v29 = 0LL;
            v49 = (struct CProjectedShadowCaster **)v29;
            if ( v29 )
              (*(void (__fastcall **)(CProjectedShadow *))(*(_QWORD *)v29 + 8LL))(v29);
            v37 = CProjectedShadow::Initialize(v29, (struct CProjectedShadowScene *)this, v76, a3);
            v13 = v37;
            if ( v37 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x36Au, 0LL);
              wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v49);
              return v13;
            }
            v39 = *v25;
            v40 = *v25;
            v41 = (*v25)[1];
            if ( !*(_BYTE *)(v41 + 25) )
            {
              do
              {
                if ( *(_QWORD *)(v41 + 32) < (unsigned __int64)v76 )
                {
                  v41 = *(_QWORD *)(v41 + 16);
                }
                else
                {
                  v39 = (__int64 *)v41;
                  v41 = *(_QWORD *)v41;
                }
              }
              while ( !*(_BYTE *)(v41 + 25) );
              v40 = *v25;
            }
            if ( v39 == v40 || (unsigned __int64)v76 < v39[4] )
            {
              v50[1] = &v76;
              v39 = (__int64 *)*std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<CProjectedShadowCaster * const &>,std::tuple<>>(
                                  (__int64 ***)ReceiverEntry + 1,
                                  &v70,
                                  v39);
            }
            v42 = v39[5];
            v39[5] = (__int64)v29;
            if ( v29 )
              (*(void (__fastcall **)(CProjectedShadow *))(*(_QWORD *)v29 + 8LL))(v29);
            if ( v42 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v49);
          }
          CProjectedShadow::SetShadowOpacity(v29, v21);
          CProjectedShadow::SetBlurRadius(v29, v24);
          v31 = *((_QWORD *)v29 + 12);
          if ( v31 < (unsigned __int64)this[12] || v31 < *((_QWORD *)ReceiverEntry + 3) || v31 < *((_QWORD *)v16 + 3) )
          {
            v32 = v51;
            v3 = (const struct CVisualTree *)v50[0];
            v72 = 0;
            updated = CVisual::CalcSrcToDestVisualTransform(v50[0], v30, v48, v51, v71);
            v13 = updated;
            if ( updated < 0 )
            {
              v47 = 892;
              goto LABEL_67;
            }
            v33 = this[11];
            v66 = 0;
            updated = ShadowHelpers::GetProjectionOntoVisualMatrix(v3, v33, v48, (struct CVisual *)v65, v45);
            v13 = updated;
            if ( updated < 0 )
            {
              v47 = 895;
              goto LABEL_67;
            }
            v53 = v67[0];
            v57 = v68;
            v54 = v67[1];
            v55 = v67[2];
            v56 = v67[3];
            CMILMatrix::Multiply((CMILMatrix *)&v53, (const struct CMILMatrix *)v65);
            v34 = this[11];
            v64 = 0;
            v65[0] = v53;
            v66 = v57;
            v65[1] = v54;
            v65[2] = v55;
            v65[3] = v56;
            updated = ShadowHelpers::GetProjectionOntoVisualMatrix(v3, v34, v32, (struct CVisual *)v63, v46);
            v13 = updated;
            if ( updated < 0 )
            {
              v47 = 899;
              goto LABEL_67;
            }
            v58 = v71[0];
            v62 = v72;
            v59 = v71[1];
            v60 = v71[2];
            v61 = v71[3];
            CMILMatrix::Multiply((CMILMatrix *)&v58, (const struct CMILMatrix *)v63);
            v63[0] = v58;
            v64 = v62;
            v63[1] = v59;
            v63[2] = v60;
            v63[3] = v61;
            CProjectedShadow::SetTransforms(
              v29,
              (const struct CMILMatrix *)v67,
              (const struct CMILMatrix *)v65,
              (const struct CMILMatrix *)v63);
          }
          else
          {
            v3 = (const struct CVisualTree *)v50[0];
          }
        }
        else
        {
LABEL_31:
          std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::erase(
            (char *)ReceiverEntry + 8,
            &v76);
        }
        v16 = *(struct CComposition **)v16;
        v15 = v74;
        v14 = v52;
      }
      return v13;
    }
  }
  return 0LL;
}
