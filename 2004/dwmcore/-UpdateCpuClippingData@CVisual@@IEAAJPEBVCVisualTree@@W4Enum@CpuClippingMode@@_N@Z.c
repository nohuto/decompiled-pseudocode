/*
 * XREFs of ?UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z @ 0x18001D1CC
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18006AEC0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x18006A8E0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800A1EB8 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 */

__int64 __fastcall CVisual::UpdateCpuClippingData(CVisual **a1, const struct CVisualTree *a2, unsigned int a3, char a4)
{
  struct CTreeData *TreeData; // r14
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  char v13; // [rsp+20h] [rbp-18h]

  TreeData = CVisual::FindTreeData((CVisual *)a1, a2);
  if ( a1 != *((CVisual ***)a2 + 7) )
    CVisual::FindTreeData(a1[10], a2);
  v13 = a4;
  v9 = CCpuClippingData::Update((char *)TreeData + 200, a2, a1, a3, v13);
  v11 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x7F3u, 0LL);
  return v11;
}
