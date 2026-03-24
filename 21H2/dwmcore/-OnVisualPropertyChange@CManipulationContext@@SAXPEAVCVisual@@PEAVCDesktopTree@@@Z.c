/*
 * XREFs of ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z @ 0x180235170
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x18004DCC0 (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x180233B38 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@.c)
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x180234D24 (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x180235D70 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18009FEE0 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800B7380 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     _lambda_9a9771997357178f95a5eaf72b6b0000_::operator() @ 0x180233928 (_lambda_9a9771997357178f95a5eaf72b6b0000_--operator().c)
 */

void __fastcall CManipulationContext::OnVisualPropertyChange(struct CVisual *a1, struct CDesktopTree *a2)
{
  struct CInteraction *InteractionInternal; // rax
  CVisual *v3; // r10
  const struct CVisualTree *v4; // r11
  struct CInteraction *v5; // rbx
  __int64 v6; // rax
  CVisual *v7; // r10
  struct CInteraction *v8; // rax
  __int64 v9; // r10
  char v10; // r11
  int v11; // r8d
  __int64 v12; // rcx
  int v13; // r8d
  __int64 v14; // rcx
  int v15; // r8d
  __int64 v16; // rcx
  int v17; // r8d
  __int64 v18; // rcx
  __int128 v19; // xmm1
  char v20; // [rsp+30h] [rbp-40h] BYREF
  struct CInteraction *v21; // [rsp+38h] [rbp-38h] BYREF
  _BYTE *v22[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v23; // [rsp+50h] [rbp-20h] BYREF
  __int128 v24; // [rsp+60h] [rbp-10h] BYREF

  InteractionInternal = CVisual::GetInteractionInternal(a1);
  v5 = InteractionInternal;
  if ( InteractionInternal )
  {
    CVisual::GetWorldTransform(v3, v4, 5, (__int64)InteractionInternal + 112, 0LL, 0LL);
    v6 = *((_QWORD *)v5 + 13);
    v7 = 0LL;
    v23 = 0LL;
    v24 = 0LL;
    if ( v6 )
      v7 = *(CVisual **)(v6 + 16);
    v20 = 0;
    do
    {
      if ( !v7 )
        break;
      v8 = CVisual::GetInteractionInternal(v7);
      v21 = v8;
      if ( v8 )
      {
        v20 = 1;
        v22[0] = &v21;
        v11 = 0;
        v22[1] = &v20;
        v12 = *((_QWORD *)v8 + 12);
        if ( v12 )
          v11 = *(_DWORD *)(v12 + 76);
        lambda_9a9771997357178f95a5eaf72b6b0000_::operator()(v22, (__int64 *)&v23, v11);
        v13 = 0;
        v14 = *((_QWORD *)v21 + 12);
        if ( v14 )
          v13 = *(_DWORD *)(v14 + 80);
        lambda_9a9771997357178f95a5eaf72b6b0000_::operator()(v22, (__int64 *)&v23 + 1, v13);
        v15 = 0;
        v16 = *((_QWORD *)v21 + 12);
        if ( v16 )
          v15 = *(_DWORD *)(v16 + 88);
        lambda_9a9771997357178f95a5eaf72b6b0000_::operator()(v22, (__int64 *)&v24 + 1, v15);
        v17 = 0;
        v18 = *((_QWORD *)v21 + 12);
        if ( v18 )
          v17 = *(_DWORD *)(v18 + 84);
        lambda_9a9771997357178f95a5eaf72b6b0000_::operator()(v22, (__int64 *)&v24, v17);
        v10 = v20;
      }
      v7 = *(CVisual **)(v9 + 80);
    }
    while ( !v10 );
    v19 = v24;
    *((_OWORD *)v5 + 4) = v23;
    *((_OWORD *)v5 + 5) = v19;
  }
}
