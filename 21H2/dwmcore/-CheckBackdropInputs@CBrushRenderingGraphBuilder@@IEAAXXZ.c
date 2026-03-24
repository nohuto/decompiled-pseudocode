/*
 * XREFs of ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ @ 0x18004B318
 * Callers:
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18001D1A8 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composit.c)
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z @ 0x180049940 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z.c)
 * Callees:
 *     ?HasBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x18004DBB8 (-HasBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x18004E038 (-HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?IsIntermediateUsedInBlur@CBrushRenderingGraphBuilder@@AEBA_NI@Z @ 0x1800D8A74 (-IsIntermediateUsedInBlur@CBrushRenderingGraphBuilder@@AEBA_NI@Z.c)
 */

void __fastcall CBrushRenderingGraphBuilder::CheckBackdropInputs(CBrushRenderingGraphBuilder *this)
{
  bool IsIntermediateUsedInBlur; // bp
  char v3; // cl
  bool HasWindowBackdropInput; // di
  unsigned int v5; // esi
  __int64 v6; // r14
  unsigned int v7; // r13d
  __int64 v8; // r15
  __int64 v9; // rax
  CRenderingTechnique *v10; // r12
  char v11; // [rsp+50h] [rbp+8h]

  IsIntermediateUsedInBlur = 0;
  v3 = 0;
  HasWindowBackdropInput = 0;
  v5 = 0;
  v11 = 0;
  v6 = *(_QWORD *)this;
  v7 = *(_DWORD *)(*(_QWORD *)this + 168LL);
  if ( v7 )
  {
    v8 = 0LL;
    do
    {
      v9 = *(_QWORD *)(v6 + 144);
      v10 = *(CRenderingTechnique **)(v8 + v9);
      if ( !HasWindowBackdropInput )
        HasWindowBackdropInput = CRenderingTechnique::HasWindowBackdropInput(*(CRenderingTechnique **)(v8 + v9));
      if ( IsIntermediateUsedInBlur
        || CRenderingTechnique::HasBackdropInput(v10)
        && (v11 = 1, IsIntermediateUsedInBlur = CBrushRenderingGraphBuilder::IsIntermediateUsedInBlur(this, v5)) )
      {
        if ( HasWindowBackdropInput )
          break;
      }
      ++v5;
      v8 += 8LL;
    }
    while ( v5 < v7 );
    v3 = v11;
  }
  *(_BYTE *)(*(_QWORD *)this + 196LL) = v3;
  *(_BYTE *)(*(_QWORD *)this + 197LL) = IsIntermediateUsedInBlur;
  *(_BYTE *)(*(_QWORD *)this + 198LL) = HasWindowBackdropInput;
}
