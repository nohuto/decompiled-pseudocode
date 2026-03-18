/*
 * XREFs of ?InsertDependenciesForAxis@InteractionSourceManager@@QEAAX_KW4ScrollAxis@@@Z @ 0x18021092C
 * Callers:
 *     ?InsertDependenciesForAxis@CInteractionTracker@@QEAAX_KW4ScrollAxis@@@Z @ 0x1801C94B8 (-InsertDependenciesForAxis@CInteractionTracker@@QEAAX_KW4ScrollAxis@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x180024548 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x180070034 (-InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV-$CWeakReference@VCResource@@@.c)
 *     ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x180070208 (-Create@-$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18016427C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSourceModifierConditionalAnimation@CManipulation@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x18021087C (-GetSourceModifierConditionalAnimation@CManipulation@@QEBAPEAVCConditionalExpression@@W4ScrollAx.c)
 */

void __fastcall InteractionSourceManager::InsertDependenciesForAxis(_QWORD *a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v6; // r12
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 SourceModifierConditionalAnimation; // rax
  struct CResource *v11; // rcx
  struct CResource *v12; // r8
  __int64 v13; // r8
  int v14; // eax
  struct CWeakResourceReference *v15; // rbx
  unsigned int v16; // r9d
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct CWeakResourceReference *v18; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1[13];
  v6 = v3 + a1[14];
  while ( v3 != v6 )
  {
    v8 = v3 & 1;
    v9 = *(_QWORD *)(a1[11] + 8 * ((v3 >> 1) & (a1[12] - 1LL)));
    SourceModifierConditionalAnimation = CManipulation::GetSourceModifierConditionalAnimation(
                                           *(_QWORD **)(v9 + 8 * v8),
                                           a3);
    if ( SourceModifierConditionalAnimation )
    {
      (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)SourceModifierConditionalAnimation + 216LL))(
        SourceModifierConditionalAnimation,
        a2);
      v12 = *(struct CResource **)(v9 + 8 * v8);
      v11 = v12;
    }
    if ( a3 )
    {
      if ( a3 != 1 )
        goto LABEL_11;
      v13 = *((_QWORD *)v12 + 61);
    }
    else
    {
      v13 = *((_QWORD *)v12 + 60);
    }
    if ( v13 )
    {
      (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v13 + 216LL))(v13, a2);
      v11 = *(struct CResource **)(v9 + 8 * v8);
    }
LABEL_11:
    v18 = 0LL;
    v14 = CWeakReference<CVisual>::Create(v11, &v18);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xFB,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\animations\\interactionsourcemanager.cpp",
        (const char *)(unsigned int)v14);
      __debugbreak();
    }
    v15 = v18;
    if ( a3 >= 0 )
    {
      if ( a3 <= 1 )
      {
        v16 = 1;
      }
      else
      {
        if ( a3 != 2 )
          goto LABEL_18;
        v16 = 3;
      }
      CExpressionManager::InsertExpressionsInOrderForTarget(*(_QWORD *)(*a1 + 272LL), a2, (__int64)v18, v16);
    }
LABEL_18:
    CExpressionManager::InsertExpressionsInOrderForTarget(*(_QWORD *)(*a1 + 272LL), a2, (__int64)v15, 9u);
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v18);
    ++v3;
  }
}
