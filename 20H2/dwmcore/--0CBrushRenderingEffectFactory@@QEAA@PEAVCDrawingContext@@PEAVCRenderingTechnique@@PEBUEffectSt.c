/*
 * XREFs of ??0CBrushRenderingEffectFactory@@QEAA@PEAVCDrawingContext@@PEAVCRenderingTechnique@@PEBUEffectStage@@@Z @ 0x1800C1974
 * Callers:
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x1800C1574 (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawLi.c)
 * Callees:
 *     <none>
 */

CBrushRenderingEffectFactory *__fastcall CBrushRenderingEffectFactory::CBrushRenderingEffectFactory(
        CBrushRenderingEffectFactory *this,
        struct CDrawingContext *a2,
        struct CRenderingTechnique *a3,
        const struct EffectStage *a4)
{
  unsigned int v4; // edx
  unsigned __int64 v5; // rax
  char v6; // al
  bool v8; // zf

  *((_QWORD *)this + 1) = a2;
  *((_QWORD *)this + 2) = a3;
  *(_QWORD *)this = &CBrushRenderingEffectFactory::`vftable';
  v4 = 0;
  for ( *((_QWORD *)this + 3) = a4; v4 < *((_DWORD *)a4 + 1); a4 = (const struct EffectStage *)*((_QWORD *)this + 3) )
  {
    v5 = (unsigned __int64)v4 << 7;
    if ( !*((_BYTE *)a4 + v5 + 76) || (v8 = *((_BYTE *)a4 + v5 + 134) == 0, v6 = 1, v8) )
      v6 = 0;
    *((_BYTE *)this + v4++ + 32) = v6;
  }
  return this;
}
