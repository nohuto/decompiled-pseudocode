/*
 * XREFs of ?UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z @ 0x180008894
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180008B30 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     ?IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1@@Z @ 0x180008A10 (-IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1.c)
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@@Z @ 0x18000A204 (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@.c)
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18000A3E8 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ @ 0x18000A454 (-IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ.c)
 *     ?FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@@Z @ 0x18000A558 (-FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x18000AE78 (-clear@-$_Tree@V-$_Tmap_traits@PEAVCProjectedShadowCaster@@V-$com_ptr_t@VCProjectedShadow@@Uerr_.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800A7124 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadowScene::UpdateReceiverEntry(
        CProjectedShadowScene *this,
        struct CDrawingContext *a2,
        CProjectedShadowReceiver **a3)
{
  CProjectedShadowReceiver *v3; // rsi
  const struct CVisualTree *v6; // r15
  unsigned int v8; // ebp
  CVisual *v9; // r14
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rdx
  int (__fastcall ***v13)(_QWORD, char *, __int128 *); // rcx
  __int64 v14; // rdx
  int v15; // eax
  unsigned int v16; // ecx
  struct CProjectedShadowScene::ReceiverEntry *ReceiverEntry; // rax
  __int128 v19; // [rsp+30h] [rbp-58h] BYREF

  v3 = *a3;
  v6 = (const struct CVisualTree *)*((_QWORD *)a2 + 741);
  v8 = 0;
  v9 = (CVisual *)*((_QWORD *)*a3 + 7);
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 216LL))(*((_QWORD *)this + 11));
  *((_BYTE *)a3 + 100) = 1;
  v11 = v10;
  v19 = 0LL;
  if ( !CProjectedShadowReceiver::IsEmptyMaskContent(v3) && CProjectedShadowScene::IsValidVisual(v6, v9) )
  {
    v12 = *((_QWORD *)v3 + 12);
    if ( !v12 )
      v12 = *(_QWORD *)(*((_QWORD *)v3 + 2) + 168LL);
    v13 = (int (__fastcall ***)(_QWORD, char *, __int128 *))(v12 + 56 + *(int *)(*(_QWORD *)(v12 + 56) + 8LL));
    if ( (**v13)(v13, (char *)v9 + 132, &v19) >= 0
      && (float)(*((float *)&v19 + 2) - *(float *)&v19) >= 0.5
      && (float)(*((float *)&v19 + 3) - *((float *)&v19 + 1)) >= 0.5 )
    {
      if ( (unsigned __int64)a3[3] >= *((_QWORD *)this + 12)
        && (unsigned __int64)a3[3] >= *((_QWORD *)CVisual::FindTreeData(v9, v6) + 15) )
      {
        return v8;
      }
      v15 = CVisual::CalcSrcToDestVisualTransform(v6, v14, v9, v11, a3 + 4);
      v8 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x302u, 0LL);
        return v8;
      }
      a3[3] = *(CProjectedShadowReceiver **)(*((_QWORD *)this + 2) + 352LL);
      if ( CProjectedShadowScene::IsShadowInFrontOfReceiver(
             this,
             a2,
             (const struct CProjectedShadowScene::ReceiverEntry *)a3) )
      {
        return v8;
      }
    }
  }
  *((_BYTE *)a3 + 100) = 0;
  ReceiverEntry = CProjectedShadowScene::FindReceiverEntry(this, v3);
  *((_QWORD *)ReceiverEntry + 3) = 0LL;
  std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::clear((char *)ReceiverEntry + 8);
  return 0LL;
}
