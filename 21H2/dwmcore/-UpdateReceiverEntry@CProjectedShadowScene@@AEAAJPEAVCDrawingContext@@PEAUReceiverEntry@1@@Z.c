/*
 * XREFs of ?UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z @ 0x180237684
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180236944 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B098 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ @ 0x1802358A8 (-IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ.c)
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@@Z @ 0x18023610C (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@.c)
 *     ?FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@@Z @ 0x18023642C (-FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@.c)
 *     ?IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1@@Z @ 0x180236744 (-IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1.c)
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1802368A0 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x180237870 (-clear@-$_Tree@V-$_Tmap_traits@PEAVCProjectedShadowCaster@@V-$com_ptr_t@VCProjectedShadow@@Uerr_.c)
 */

__int64 __fastcall CProjectedShadowScene::UpdateReceiverEntry(
        CProjectedShadowScene *this,
        struct CDrawingContext *a2,
        CProjectedShadowReceiver **a3)
{
  CProjectedShadowReceiver *v3; // rsi
  const struct CVisualTree *v6; // r15
  unsigned int v8; // ebp
  struct CVisual *v9; // r14
  __int64 v10; // rax
  CVisual *v11; // r12
  __int64 v12; // rdx
  int (__fastcall ***v13)(_QWORD, char *, __int128 *); // rcx
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rcx
  __int64 **ReceiverEntry; // rax
  __int128 v19; // [rsp+30h] [rbp-58h] BYREF

  v3 = *a3;
  v6 = (const struct CVisualTree *)*((_QWORD *)a2 + 991);
  v8 = 0;
  v9 = (struct CVisual *)*((_QWORD *)*a3 + 8);
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 200LL))(*((_QWORD *)this + 12));
  *((_BYTE *)a3 + 100) = 1;
  v11 = (CVisual *)v10;
  v19 = 0LL;
  if ( CProjectedShadowReceiver::IsEmptyMaskContent(v3) || !CProjectedShadowScene::IsValidVisual(v6, v9) )
    goto LABEL_15;
  v12 = *((_QWORD *)v3 + 13);
  if ( !v12 )
    v12 = *(_QWORD *)(*((_QWORD *)v3 + 2) + 320LL);
  v13 = (int (__fastcall ***)(_QWORD, char *, __int128 *))(v12 + 64 + *(int *)(*(_QWORD *)(v12 + 64) + 8LL));
  if ( (**v13)(v13, (char *)v9 + 140, &v19) < 0
    || (float)(*((float *)&v19 + 2) - *(float *)&v19) < 0.5
    || (float)(*((float *)&v19 + 3) - *((float *)&v19 + 1)) < 0.5 )
  {
    goto LABEL_15;
  }
  if ( (unsigned __int64)a3[3] >= *((_QWORD *)this + 13)
    && a3[3] >= (CProjectedShadowReceiver *)CVisual::FindTreeData(v9, v6)[34] )
  {
    return v8;
  }
  v15 = CVisual::CalcSrcToDestVisualTransform(v6, v14, (__int64)v9, v11, (__int64)(a3 + 4));
  v8 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0x302u);
    return v8;
  }
  a3[3] = *(CProjectedShadowReceiver **)(*((_QWORD *)this + 2) + 496LL);
  if ( CProjectedShadowScene::IsShadowInFrontOfReceiver(
         this,
         (ShadowHelpers **)a2,
         (const struct CProjectedShadowScene::ReceiverEntry *)a3) )
  {
    return v8;
  }
LABEL_15:
  *((_BYTE *)a3 + 100) = 0;
  ReceiverEntry = CProjectedShadowScene::FindReceiverEntry(this, v3);
  ReceiverEntry[3] = 0LL;
  std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::clear(ReceiverEntry + 1);
  return 0LL;
}
