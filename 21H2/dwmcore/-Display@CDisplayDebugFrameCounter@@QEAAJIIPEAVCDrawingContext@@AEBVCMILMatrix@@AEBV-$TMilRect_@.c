/*
 * XREFs of ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x1801D6A58
 * Callers:
 *     ?RenderDebugFrameCounter@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801C0B5C (-RenderDebugFrameCounter@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180014578 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18003CF50 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800435E0 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18009A3CC (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A9DE0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800D53DC (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV3@@Z @ 0x1801D6D58 (-DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x180260B00 (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 */

__int64 __fastcall CDisplayDebugFrameCounter::Display(
        CDisplayDebugFrameCounter *this,
        __int64 a2,
        __int64 a3,
        CDrawingContext *a4,
        __int64 a5,
        __int128 *a6,
        void *a7,
        _OWORD *a8)
{
  unsigned int v10; // r13d
  _OWORD *v11; // r14
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  int v15; // eax
  __int128 v16; // xmm0
  __int64 v17; // r9
  __int64 v18; // r11
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // ebx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r9
  unsigned int v30; // [rsp+40h] [rbp-C0h]
  _OWORD v31[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+90h] [rbp-70h]
  int v33; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v34; // [rsp+A4h] [rbp-5Ch]
  __int128 v35; // [rsp+B4h] [rbp-4Ch]
  int v36; // [rsp+C4h] [rbp-3Ch]
  _OWORD v37[4]; // [rsp+D0h] [rbp-30h] BYREF
  int v38; // [rsp+110h] [rbp+10h]
  __int64 v39[2]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v40[2]; // [rsp+130h] [rbp+30h] BYREF

  v32 = 0;
  v10 = a2;
  v30 = a3;
  v11 = 0LL;
  v12 = *(_OWORD *)(a5 + 16);
  v37[0] = *(_OWORD *)a5;
  v13 = *(_OWORD *)(a5 + 32);
  v37[1] = v12;
  v14 = *(_OWORD *)(a5 + 48);
  v15 = *(_DWORD *)(a5 + 64);
  v37[2] = v13;
  v16 = *a6;
  v38 = v15;
  v37[3] = v14;
  *(_OWORD *)v40 = v16;
  if ( !CMILMatrix::IsIdentity<0>((__int64)v37, a2, a3, (__int64)a4) )
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v37, v18, (float *)v40, v17);
  if ( (_DWORD)a7 == 1 )
  {
    v31[0] = _xmm;
    v31[1] = _xmm;
    BYTE1(v32) = BYTE1(v32) & 0xC0 | 0x17;
    v31[2] = _xmm;
    v31[3] = _xmm;
    LOBYTE(v32) = 85;
    CMILMatrix::Rotate90((CMILMatrix *)v31);
    CMILMatrix::Translate((CMILMatrix *)v31, *(float *)&v40[1], 0.0);
    CMILMatrix::Multiply((CMILMatrix *)v37, (const struct CMILMatrix *)v31, v19, v20);
    v11 = v31;
  }
  v39[1] = 0LL;
  v39[0] = 0LL;
  v34 = 0LL;
  LODWORD(v34) = 0;
  v36 = 0;
  v35 = 0LL;
  v33 = 2;
  v21 = CDrawingContext::PushRenderOptionsInternal(a4, 0LL, (const struct MilRenderOptions *)&v33, 1);
  v23 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0LL, v21, 0x3Eu);
  }
  else
  {
    v24 = CDrawingContext::PushTransformInternal(a4, 0LL, (const struct CMILMatrix *)v37, 0, 1);
    v23 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0LL, v24, 0x41u);
    }
    else
    {
      v26 = CDisplayDebugFrameCounter::DisplayText(this, v10, v30, a4, (__int64)v40, (int)a7, (__int64)v39);
      v23 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0LL, v26, 0x44u);
      }
      else if ( v11 )
      {
        *(_OWORD *)v40 = *(_OWORD *)v39;
        CMILMatrix::Transform2DBoundsHelper<0>((__int64)v11, (__int64)v40, (float *)v39, v28);
      }
      CDrawingContext::PopTransformInternal(a4, 1);
    }
    CDrawingContext::PopRenderOptionsInternal(a4, 1);
  }
  if ( a8 )
    *a8 = *(_OWORD *)v39;
  return v23;
}
