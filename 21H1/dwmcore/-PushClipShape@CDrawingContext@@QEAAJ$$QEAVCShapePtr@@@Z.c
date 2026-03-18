/*
 * XREFs of ?PushClipShape@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z @ 0x18017C238
 * Callers:
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18000D628 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18002F788 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x180058320 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV-.c)
 *     ??0NodeEffects@CDrawingContext@@QEAA@XZ @ 0x180178B1C (--0NodeEffects@CDrawingContext@@QEAA@XZ.c)
 */

__int64 __fastcall CDrawingContext::PushClipShape(CDrawingContext *this, CShapePtr *a2)
{
  const struct CMILMatrix *TopByReference; // rax
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v9[11]; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v10; // [rsp+8Ch] [rbp-5Ch]
  __int128 v11; // [rsp+9Ch] [rbp-4Ch]
  __int128 v12; // [rsp+ACh] [rbp-3Ch]
  __int128 v13; // [rsp+BCh] [rbp-2Ch]
  int v14; // [rsp+CCh] [rbp-1Ch]
  char v15; // [rsp+D4h] [rbp-14h]
  __int64 v16; // [rsp+F0h] [rbp+8h] BYREF

  CDrawingContext::NodeEffects::NodeEffects((CDrawingContext::NodeEffects *)v9);
  v15 = 1;
  TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 408));
  LOBYTE(v16) = 0;
  v10 = *(_OWORD *)TopByReference;
  v11 = *((_OWORD *)TopByReference + 1);
  v12 = *((_OWORD *)TopByReference + 2);
  v13 = *((_OWORD *)TopByReference + 3);
  v14 = *((_DWORD *)TopByReference + 16);
  v5 = CDrawingContext::PushLocalSpaceClipAndAlphaInternal(this, a2, (int)&CMILMatrix::Identity, 0LL, (__int64)v9, &v16);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xBFDu, 0LL);
  return v7;
}
