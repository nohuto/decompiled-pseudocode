/*
 * XREFs of ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x180054FB4
 * Callers:
 *     ?GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x18000959C (-GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@.c)
 *     ?ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z @ 0x18005430C (-ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18005464C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?GetEffectStageInput@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@2PEAUEffectInput@@@Z @ 0x180054EEC (-GetEffectStageInput@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV-$vec.c)
 *     ?UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@AEBVRenderTargetInfo@@AEBUEffectInput@@@Z @ 0x180058B9C (-UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@AEBVRenderTargetInfo@@AE.c)
 *     ?LookupCachedBlur@CBlurredBackdropCache@@QEBA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@PEAUEffectInput@@@Z @ 0x1800DE490 (-LookupCachedBlur@CBlurredBackdropCache@@QEBA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@P.c)
 *     std::_Func_impl_no_alloc__lambda_239ebeae39ba09a417b6b83fb5c00141__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x1800E8AD0 (std--_Func_impl_no_alloc__lambda_239ebeae39ba09a417b6b83fb5c00141__long_CExternalEffectGraph--CG.c)
 *     ??$move@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@0@0V12@@Z @ 0x180253318 (--$move@V-$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V-$checked_array_iterator@P.c)
 *     ??$move_backward@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@0@0V12@@Z @ 0x180253408 (--$move_backward@V-$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V-$checked_array_i.c)
 *     ??$move@V?$move_iterator@PEAUEffectInput@@@std@@V?$checked_array_iterator@PEAUEffectInput@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUEffectInput@@@stdext@@V?$move_iterator@PEAUEffectInput@@@0@0V12@@Z @ 0x1802B31D0 (--$move@V-$move_iterator@PEAUEffectInput@@@std@@V-$checked_array_iterator@PEAUEffectInput@@@stde.c)
 *     ??$move_backward@V?$move_iterator@PEAUEffectInput@@@std@@V?$checked_array_iterator@PEAUEffectInput@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUEffectInput@@@stdext@@V?$move_iterator@PEAUEffectInput@@@0@0V12@@Z @ 0x1802B32A0 (--$move_backward@V-$move_iterator@PEAUEffectInput@@@std@@V-$checked_array_iterator@PEAUEffectInp.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall EffectInput::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rsi
  __int64 v4; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 *result; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx

  v2 = *a1;
  v4 = *a2;
  *a1 = *a2;
  if ( v4 )
  {
    v6 = *(int *)(*(_QWORD *)(v4 + 8) + 4LL) + v4 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  if ( v2 )
  {
    v11 = v2 + *(int *)(*(_QWORD *)(v2 + 8) + 4LL) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v7 = a2[1];
  v8 = a1[1];
  a1[1] = v7;
  if ( v7 )
  {
    v9 = v7 + 8 + *(int *)(*(_QWORD *)(v7 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  }
  if ( v8 )
  {
    v12 = v8 + *(int *)(*(_QWORD *)(v8 + 8) + 4LL) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  *((_BYTE *)a1 + 16) = *((_BYTE *)a2 + 16);
  *(_OWORD *)(a1 + 3) = *(_OWORD *)(a2 + 3);
  *((_DWORD *)a1 + 10) = *((_DWORD *)a2 + 10);
  *((_BYTE *)a1 + 44) = *((_BYTE *)a2 + 44);
  *((_BYTE *)a1 + 45) = *((_BYTE *)a2 + 45);
  result = a1;
  *((_OWORD *)a1 + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)a1 + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)a1 + 5) = *((_OWORD *)a2 + 5);
  a1[12] = a2[12];
  *((_OWORD *)a1 + 3) = *((_OWORD *)a2 + 3);
  return result;
}
