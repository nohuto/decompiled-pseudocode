/*
 * XREFs of ?InsertDependenciesForAxis@InteractionSourceManager@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@Z @ 0x180264424
 * Callers:
 *     ?InsertDependenciesForAxis@CInteractionTracker@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@Z @ 0x18021B3DC (-InsertDependenciesForAxis@CInteractionTracker@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180014EBC (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@?$CWeakReference@VCResource@@@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x18004A518 (-Create@-$CWeakReference@VCResource@@@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180195110 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAXAEBUExpressionWalkContext@@PEAV?$CWeakReference@VCResource@@@@I@Z @ 0x1801FDCC8 (-InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAXAEBUExpressionWalkContext@@PEAV-$CWe.c)
 *     ?GetSourceModifierConditionalAnimation@CManipulation@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x1802643B0 (-GetSourceModifierConditionalAnimation@CManipulation@@QEBAPEAVCConditionalExpression@@W4ScrollAx.c)
 */

void __fastcall InteractionSourceManager::InsertDependenciesForAxis(
        _QWORD *a1,
        const struct ExpressionWalkContext *a2,
        int a3)
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
  int v17; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct CWeakResourceReference *v19; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1[13];
  v6 = v3 + a1[14];
  while ( v3 != v6 )
  {
    v8 = v3 & 1;
    v9 = *(_QWORD *)(a1[11] + 8 * ((a1[12] - 1LL) & (v3 >> 1)));
    SourceModifierConditionalAnimation = CManipulation::GetSourceModifierConditionalAnimation(
                                           *(_QWORD **)(v9 + 8 * v8),
                                           a3);
    if ( SourceModifierConditionalAnimation )
    {
      (*(void (__fastcall **)(__int64, const struct ExpressionWalkContext *))(*(_QWORD *)SourceModifierConditionalAnimation
                                                                            + 200LL))(
        SourceModifierConditionalAnimation,
        a2);
      v12 = *(struct CResource **)(v9 + 8 * v8);
      v11 = v12;
    }
    if ( a3 )
    {
      if ( a3 != 1 )
        goto LABEL_11;
      v13 = *((_QWORD *)v12 + 62);
    }
    else
    {
      v13 = *((_QWORD *)v12 + 61);
    }
    if ( v13 )
    {
      (*(void (__fastcall **)(__int64, const struct ExpressionWalkContext *))(*(_QWORD *)v13 + 200LL))(v13, a2);
      v11 = *(struct CResource **)(v9 + 8 * v8);
    }
LABEL_11:
    v19 = 0LL;
    v14 = CWeakReference<CResource>::Create(v11, &v19);
    if ( v14 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        251LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\animations\\interactionsourcemanager.cpp",
        (const char *)(unsigned int)v14,
        v17);
    v15 = v19;
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
      CExpressionManager::InsertExpressionsInOrderForTarget(*(_QWORD *)(*a1 + 424LL), a2, (__int64)v19, v16);
    }
LABEL_18:
    CExpressionManager::InsertExpressionsInOrderForTarget(*(_QWORD *)(*a1 + 424LL), a2, (__int64)v15, 9u);
    wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)&v19);
    ++v3;
  }
}
