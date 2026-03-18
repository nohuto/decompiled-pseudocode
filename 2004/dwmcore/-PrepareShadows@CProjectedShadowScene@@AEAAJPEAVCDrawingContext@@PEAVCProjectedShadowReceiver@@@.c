/*
 * XREFs of ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x18000C670
 * Callers:
 *     ?DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x18000BF8C (-DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z.c)
 * Callees:
 *     ?IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry@1@PEBUReceiverEntry@1@M@Z @ 0x18000B798 (-IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry.c)
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x18000C080 (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 *     ?UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z @ 0x18000C3D4 (-UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z.c)
 *     ?GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVisual@@PEAVCMILMatrix@@@Z @ 0x18000CBC0 (-GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVi.c)
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x18000DC50 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@@Z @ 0x18000DD44 (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@.c)
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18000DF28 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@@Z @ 0x18000E098 (-FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@.c)
 *     ?IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ @ 0x18000E0C0 (-IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ.c)
 *     ?CalculateOpacity@CProjectedShadowScene@@AEBAMM@Z @ 0x18000E128 (-CalculateOpacity@CProjectedShadowScene@@AEBAMM@Z.c)
 *     ?SetTransforms@CProjectedShadow@@QEAAXAEBVCMILMatrix@@00@Z @ 0x18000E228 (-SetTransforms@CProjectedShadow@@QEAAXAEBVCMILMatrix@@00@Z.c)
 *     ?SetBlurRadius@CProjectedShadow@@QEAAXM@Z @ 0x18000E398 (-SetBlurRadius@CProjectedShadow@@QEAAXM@Z.c)
 *     ?SetShadowOpacity@CProjectedShadow@@QEAAXM@Z @ 0x18000E3D4 (-SetShadowOpacity@CProjectedShadow@@QEAAXM@Z.c)
 *     ?CalculateBlurRadius@CProjectedShadowScene@@AEBAMM@Z @ 0x18000E414 (-CalculateBlurRadius@CProjectedShadowScene@@AEBAMM@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEAVCProjectedShadowCaster@@@Z @ 0x18000E8CC (-erase@-$_Tree@V-$_Tmap_traits@PEAVCProjectedShadowCaster@@V-$com_ptr_t@VCProjectedShadow@@Uerr_.c)
 *     ?ClearShadows@CProjectedShadowScene@@AEAAX_N@Z @ 0x18000EC74 (-ClearShadows@CProjectedShadowScene@@AEAAX_N@Z.c)
 *     ??0CProjectedShadow@@QEAA@PEAVCComposition@@@Z @ 0x18001E4D4 (--0CProjectedShadow@@QEAA@PEAVCComposition@@@Z.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAVCProjectedShadowCaster@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAVCProjectedShadowCaster@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18001F1C4 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAVCProjectedShadowCaster@@@2@V-$tup.c)
 *     ?Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCProjectedShadowReceiver@@@Z @ 0x180020540 (-Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCP.c)
 *     ??2CProjectedShadow@@SAPEAX_K@Z @ 0x18002179C (--2CProjectedShadow@@SAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180082C58 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800A1EB8 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
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
  int v25; // r9d
  char *v26; // r15
  _QWORD *v27; // rax
  _QWORD *v28; // rdx
  unsigned __int64 v29; // rcx
  CProjectedShadow *v30; // r14
  __int64 v31; // rdx
  unsigned __int64 v32; // rax
  struct CCompositionLight *v33; // r12
  const struct CVisualTree *v34; // rdx
  const struct CVisualTree *v35; // rdx
  CProjectedShadow *v37; // rax
  int v38; // eax
  unsigned int v39; // ecx
  int v40; // r9d
  __int64 *v41; // rax
  __int64 *v42; // rdx
  __int64 *v43; // rcx
  __int64 v44; // r15
  CVisual *v45; // rax
  struct CTreeData *TreeData; // rax
  struct CMILMatrix *v47; // [rsp+28h] [rbp-E0h]
  struct CMILMatrix *v48; // [rsp+28h] [rbp-E0h]
  unsigned int v49; // [rsp+28h] [rbp-E0h]
  struct CCompositionLight *v50; // [rsp+38h] [rbp-D0h]
  struct CProjectedShadowCaster **v51; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v52[3]; // [rsp+48h] [rbp-C0h] BYREF
  struct CCompositionLight *v53; // [rsp+60h] [rbp-A8h]
  struct CComposition *v54; // [rsp+68h] [rbp-A0h]
  __int128 v55; // [rsp+70h] [rbp-98h] BYREF
  __int128 v56; // [rsp+80h] [rbp-88h]
  __int128 v57; // [rsp+90h] [rbp-78h]
  __int128 v58; // [rsp+A0h] [rbp-68h]
  int v59; // [rsp+B0h] [rbp-58h]
  __int128 v60; // [rsp+B4h] [rbp-54h] BYREF
  __int128 v61; // [rsp+C4h] [rbp-44h]
  __int128 v62; // [rsp+D4h] [rbp-34h]
  __int128 v63; // [rsp+E4h] [rbp-24h]
  int v64; // [rsp+F4h] [rbp-14h]
  _OWORD v65[4]; // [rsp+F8h] [rbp-10h] BYREF
  int v66; // [rsp+138h] [rbp+30h]
  _OWORD v67[4]; // [rsp+148h] [rbp+40h] BYREF
  int v68; // [rsp+188h] [rbp+80h]
  _OWORD v69[4]; // [rsp+198h] [rbp+90h] BYREF
  int v70; // [rsp+1D8h] [rbp+D0h]
  char v71; // [rsp+1E8h] [rbp+E0h] BYREF
  char v72; // [rsp+1F0h] [rbp+E8h] BYREF
  _OWORD v73[4]; // [rsp+1F8h] [rbp+F0h] BYREF
  int v74; // [rsp+238h] [rbp+130h]
  struct D2D_VECTOR_4F v75; // [rsp+248h] [rbp+140h] BYREF
  int v76; // [rsp+2D0h] [rbp+1C8h]
  struct CProjectedShadowCaster *v78; // [rsp+2E0h] [rbp+1D8h] BYREF

  v3 = (const struct CVisualTree *)*((_QWORD *)a2 + 741);
  v50 = (struct CCompositionLight *)*((_QWORD *)a3 + 7);
  v52[0] = v3;
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
      v45 = (CVisual *)(*(__int64 (__fastcall **)(struct CComposition *))(*(_QWORD *)this[11] + 216LL))(this[11]);
      TreeData = CVisual::FindTreeData(v45, v3);
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
      v49 = 819;
LABEL_67:
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, updated, v49, 0LL);
      return v13;
    }
    if ( *((_BYTE *)ReceiverEntry + 100) )
    {
      v14 = this[7];
      v15 = 0;
      v54 = v14;
      v16 = *(struct CComposition **)v14;
      while ( v16 != v14 )
      {
        v76 = v15 + 1;
        if ( v15 + 1 > 5 )
          break;
        v78 = (struct CProjectedShadowCaster *)*((_QWORD *)v16 + 2);
        v17 = (struct CCompositionLight *)*((_QWORD *)v78 + 7);
        v53 = v17;
        if ( v17 == v50 )
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
        v70 = 0;
        updated = CVisual::CalcSrcToDestVisualTransform(v3, v18, v17, v50, v69);
        v13 = updated;
        if ( updated < 0 )
        {
          v49 = 856;
          goto LABEL_67;
        }
        *(_OWORD *)&v52[1] = _xmm;
        z = CMILMatrix::Transform4DVector((CMILMatrix *)v69, &v75, (const struct D2D_VECTOR_4F *)&v52[1])->z;
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
          v26 = (char *)ReceiverEntry + 8;
          v27 = (_QWORD *)*((_QWORD *)ReceiverEntry + 1);
          v28 = v27;
          v29 = v27[1];
          if ( !*(_BYTE *)(v29 + 25) )
          {
            do
            {
              if ( *(_QWORD *)(v29 + 32) < (unsigned __int64)v78 )
              {
                v29 = *(_QWORD *)(v29 + 16);
              }
              else
              {
                v27 = (_QWORD *)v29;
                v29 = *(_QWORD *)v29;
              }
            }
            while ( !*(_BYTE *)(v29 + 25) );
            v28 = *(_QWORD **)v26;
          }
          if ( v27 == v28 || (unsigned __int64)v78 < v27[4] )
          {
            v51 = &v78;
            v27 = *(_QWORD **)std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<CProjectedShadowCaster * const &>,std::tuple<>>(
                                (int)ReceiverEntry + 8,
                                (unsigned int)&v71,
                                (_DWORD)v27,
                                v25,
                                (__int64)&v51);
          }
          v30 = (CProjectedShadow *)v27[5];
          if ( !v30 )
          {
            v37 = (CProjectedShadow *)CProjectedShadow::operator new(v29);
            if ( v37 )
              v30 = CProjectedShadow::CProjectedShadow(v37, this[2]);
            else
              v30 = 0LL;
            v51 = (struct CProjectedShadowCaster **)v30;
            if ( v30 )
              (*(void (__fastcall **)(CProjectedShadow *))(*(_QWORD *)v30 + 8LL))(v30);
            v38 = CProjectedShadow::Initialize(v30, (struct CProjectedShadowScene *)this, v78, a3);
            v13 = v38;
            if ( v38 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x36Au, 0LL);
              wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v51);
              return v13;
            }
            v41 = *(__int64 **)v26;
            v42 = *(__int64 **)v26;
            v43 = *(__int64 **)(*(_QWORD *)v26 + 8LL);
            if ( !*((_BYTE *)v43 + 25) )
            {
              do
              {
                if ( v43[4] < (unsigned __int64)v78 )
                {
                  v43 = (__int64 *)v43[2];
                }
                else
                {
                  v41 = v43;
                  v43 = (__int64 *)*v43;
                }
              }
              while ( !*((_BYTE *)v43 + 25) );
              v42 = *(__int64 **)v26;
            }
            if ( v41 == v42 || (unsigned __int64)v78 < v41[4] )
            {
              v52[1] = &v78;
              v41 = *(__int64 **)std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<CProjectedShadowCaster * const &>,std::tuple<>>(
                                   (int)ReceiverEntry + 8,
                                   (unsigned int)&v72,
                                   (_DWORD)v41,
                                   v40,
                                   (__int64)&v52[1]);
            }
            v44 = v41[5];
            v41[5] = (__int64)v30;
            if ( v30 )
              (*(void (__fastcall **)(CProjectedShadow *))(*(_QWORD *)v30 + 8LL))(v30);
            if ( v44 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v51);
          }
          CProjectedShadow::SetShadowOpacity(v30, v21);
          CProjectedShadow::SetBlurRadius(v30, v24);
          v32 = *((_QWORD *)v30 + 12);
          if ( v32 < (unsigned __int64)this[12] || v32 < *((_QWORD *)ReceiverEntry + 3) || v32 < *((_QWORD *)v16 + 3) )
          {
            v33 = v53;
            v3 = (const struct CVisualTree *)v52[0];
            v74 = 0;
            updated = CVisual::CalcSrcToDestVisualTransform(v52[0], v31, v50, v53, v73);
            v13 = updated;
            if ( updated < 0 )
            {
              v49 = 892;
              goto LABEL_67;
            }
            v34 = this[11];
            v68 = 0;
            updated = ShadowHelpers::GetProjectionOntoVisualMatrix(v3, v34, v50, (struct CVisual *)v67, v47);
            v13 = updated;
            if ( updated < 0 )
            {
              v49 = 895;
              goto LABEL_67;
            }
            v55 = v69[0];
            v59 = v70;
            v56 = v69[1];
            v57 = v69[2];
            v58 = v69[3];
            CMILMatrix::Multiply((CMILMatrix *)&v55, (const struct CMILMatrix *)v67);
            v35 = this[11];
            v66 = 0;
            v67[0] = v55;
            v68 = v59;
            v67[1] = v56;
            v67[2] = v57;
            v67[3] = v58;
            updated = ShadowHelpers::GetProjectionOntoVisualMatrix(v3, v35, v33, (struct CVisual *)v65, v48);
            v13 = updated;
            if ( updated < 0 )
            {
              v49 = 899;
              goto LABEL_67;
            }
            v60 = v73[0];
            v64 = v74;
            v61 = v73[1];
            v62 = v73[2];
            v63 = v73[3];
            CMILMatrix::Multiply((CMILMatrix *)&v60, (const struct CMILMatrix *)v65);
            v65[0] = v60;
            v66 = v64;
            v65[1] = v61;
            v65[2] = v62;
            v65[3] = v63;
            CProjectedShadow::SetTransforms(
              v30,
              (const struct CMILMatrix *)v69,
              (const struct CMILMatrix *)v67,
              (const struct CMILMatrix *)v65);
          }
          else
          {
            v3 = (const struct CVisualTree *)v52[0];
          }
        }
        else
        {
LABEL_31:
          std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::erase(
            (char *)ReceiverEntry + 8,
            &v78);
        }
        v16 = *(struct CComposition **)v16;
        v15 = v76;
        v14 = v54;
      }
      return v13;
    }
  }
  return 0LL;
}
