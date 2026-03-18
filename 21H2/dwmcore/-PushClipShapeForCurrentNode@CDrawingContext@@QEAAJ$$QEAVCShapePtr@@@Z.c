/*
 * XREFs of ?PushClipShapeForCurrentNode@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z @ 0x1801B3068
 * Callers:
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1802A9A0C (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008AF20 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ??0NodeEffects@CDrawingContext@@QEAA@XZ @ 0x18008B2D8 (--0NodeEffects@CDrawingContext@@QEAA@XZ.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x180098620 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRect.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::PushClipShapeForCurrentNode(CDrawingContext *this, __int64 *a2)
{
  __int64 v4; // rax
  char v5; // di
  __int64 v6; // rbx
  const struct CMILMatrix *TopByReference; // rax
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v12; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+38h] [rbp-C8h] BYREF
  char v14; // [rsp+40h] [rbp-C0h]
  _BYTE v15[100]; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v16; // [rsp+ACh] [rbp-54h]
  __int128 v17; // [rsp+BCh] [rbp-44h]
  __int128 v18; // [rsp+CCh] [rbp-34h]
  __int128 v19; // [rsp+DCh] [rbp-24h]
  int v20; // [rsp+ECh] [rbp-14h]
  char v21; // [rsp+130h] [rbp+30h] BYREF

  CDrawingContext::NodeEffects::NodeEffects((CDrawingContext::NodeEffects *)&v12);
  v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 32LL))((char *)this + 24);
  v5 = *((_BYTE *)a2 + 8);
  v6 = *a2;
  v12 = v4;
  CShapePtr::Release((CShapePtr *)&v13);
  v14 = v5;
  v13 = v6;
  *a2 = 0LL;
  *((_BYTE *)a2 + 8) = 0;
  TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 368));
  v21 = 0;
  v16 = *(_OWORD *)TopByReference;
  v17 = *((_OWORD *)TopByReference + 1);
  v18 = *((_OWORD *)TopByReference + 2);
  v19 = *((_OWORD *)TopByReference + 3);
  v20 = *((_DWORD *)TopByReference + 16);
  v8 = CDrawingContext::PushLocalSpaceClipAndAlphaInternal(this, 0LL, (__int64)&v12, &v21);
  v10 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0xCAEu);
  CShapePtr::Release((CShapePtr *)v15);
  CShapePtr::Release((CShapePtr *)&v13);
  return v10;
}
