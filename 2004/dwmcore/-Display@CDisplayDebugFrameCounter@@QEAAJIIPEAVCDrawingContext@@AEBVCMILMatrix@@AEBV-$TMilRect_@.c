/*
 * XREFs of ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x1801638FC
 * Callers:
 *     ?RenderDebugFrameCounter@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801861E8 (-RenderDebugFrameCounter@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18003A358 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18003C064 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006BEB0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18006F780 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180072960 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800828C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180082C58 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800AAC20 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800D339C (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV3@@Z @ 0x180163C08 (-DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x180210748 (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 */

__int64 __fastcall CDisplayDebugFrameCounter::Display(
        CDisplayDebugFrameCounter *this,
        unsigned int a2,
        unsigned int a3,
        CDrawingContext *a4,
        __int64 a5,
        __int128 *a6,
        int a7,
        _OWORD *a8)
{
  CMILMatrix *v11; // r14
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  int v15; // eax
  __int128 v16; // xmm0
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // ebx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  _OWORD v29[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+90h] [rbp-70h]
  int v31; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v32; // [rsp+A4h] [rbp-5Ch]
  __int128 v33; // [rsp+B4h] [rbp-4Ch]
  int v34; // [rsp+C4h] [rbp-3Ch]
  _OWORD v35[4]; // [rsp+D0h] [rbp-30h] BYREF
  int v36; // [rsp+110h] [rbp+10h]
  __int64 v37[2]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v38[2]; // [rsp+130h] [rbp+30h] BYREF

  v30 = 0;
  v11 = 0LL;
  v12 = *(_OWORD *)(a5 + 16);
  v35[0] = *(_OWORD *)a5;
  v13 = *(_OWORD *)(a5 + 32);
  v35[1] = v12;
  v14 = *(_OWORD *)(a5 + 48);
  v15 = *(_DWORD *)(a5 + 64);
  v35[2] = v13;
  v16 = *a6;
  v36 = v15;
  v35[3] = v14;
  *(_OWORD *)v38 = v16;
  if ( !CMILMatrix::IsIdentity<0>((__int64)v35) )
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v35, v17, (float *)v38);
  if ( a7 == 1 )
  {
    v29[0] = _xmm;
    v29[1] = _xmm;
    v29[2] = _xmm;
    v29[3] = _xmm;
    LOWORD(v30) = 32085;
    CMILMatrix::Rotate90((CMILMatrix *)v29);
    CMILMatrix::Translate((CMILMatrix *)v29, *(float *)&v38[1], 0.0);
    CMILMatrix::Multiply((CMILMatrix *)v35, (const struct CMILMatrix *)v29);
    v11 = (CMILMatrix *)v29;
  }
  v37[1] = 0LL;
  v37[0] = 0LL;
  v32 = 0LL;
  LODWORD(v32) = 0;
  v34 = 0;
  v33 = 0LL;
  v31 = 2;
  v18 = CDrawingContext::PushRenderOptionsInternal(a4, 0LL, (const struct MilRenderOptions *)&v31, 1);
  v20 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x3Eu, 0LL);
  }
  else
  {
    v21 = CDrawingContext::PushTransformInternal(a4, 0LL, (const struct CMILMatrix *)v35, 0, 1);
    v20 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x41u, 0LL);
    }
    else
    {
      v23 = CDrawingContext::ApplyRenderStateInternal(a4, 0);
      v20 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x45u, 0LL);
      }
      else
      {
        v25 = CDisplayDebugFrameCounter::DisplayText(this, a2, a3, a4, (__int64)v38, a7, (__int64)v37);
        v20 = v25;
        if ( v25 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x47u, 0LL);
        }
        else if ( v11 )
        {
          *(_OWORD *)v38 = *(_OWORD *)v37;
          CMILMatrix::Transform2DBoundsHelper<0>(v11, (__int64)v38, (float *)v37);
        }
      }
      CDrawingContext::PopTransformInternal(a4, 1);
    }
    CDrawingContext::PopRenderOptionsInternal(a4, 1);
  }
  if ( a8 )
    *a8 = *(_OWORD *)v37;
  return v20;
}
