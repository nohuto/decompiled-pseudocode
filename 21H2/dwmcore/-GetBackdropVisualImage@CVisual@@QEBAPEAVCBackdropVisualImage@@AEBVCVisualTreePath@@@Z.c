/*
 * XREFs of ?GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z @ 0x18008D714
 * Callers:
 *     ?GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x18000959C (-GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@.c)
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEAU3@@Z @ 0x1800535FC (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18005464C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18008CB20 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18008D06C (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 * Callees:
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18008FC84 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

struct _LIST_ENTRY *__fastcall CVisual::GetBackdropVisualImage(CVisual *this, const struct CVisualTreePath *a2)
{
  struct _LIST_ENTRY *v4; // rsi
  __int64 v5; // rbx
  struct _LIST_ENTRY *v6; // r11
  struct _LIST_ENTRY *j; // rdx
  char *v8; // rcx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v10; // r8
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx

  v4 = *(struct _LIST_ENTRY **)(*((_QWORD *)a2 + 1) - 8LL);
  v5 = 0LL;
  if ( !((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v4->Flink[11].Blink)(v4) )
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(this);
    if ( TreeDataListHead )
    {
      for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
      {
        v6 = i - 24;
        if ( i[2].Flink == v4 )
          goto LABEL_3;
      }
    }
    return 0LL;
  }
  v6 = (struct _LIST_ENTRY *)((char *)this + 336);
LABEL_3:
  if ( !v6 )
    return 0LL;
  for ( j = v6[12].Flink; j != v6[12].Blink; j = (struct _LIST_ENTRY *)((char *)j + 8) )
  {
    v8 = *(char **)a2;
    Flink = j->Flink[112].Flink;
    if ( (((*((_QWORD *)a2 + 1) - *(_QWORD *)a2) ^ ((char *)j->Flink[112].Blink - (char *)Flink)) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
    {
      v10 = (char *)Flink - v8;
      while ( &v8[v10] != (char *)j->Flink[112].Blink )
      {
        if ( *(_QWORD *)&v8[v10] != *(_QWORD *)v8 || *(_QWORD *)&v8[v10 + 8] != *((_QWORD *)v8 + 1) )
          goto LABEL_19;
        v8 += 16;
      }
      j->Flink[124].Flink = v6[18].Flink[1].Flink[31].Flink;
      return j->Flink;
    }
LABEL_19:
    ;
  }
  return (struct _LIST_ENTRY *)v5;
}
