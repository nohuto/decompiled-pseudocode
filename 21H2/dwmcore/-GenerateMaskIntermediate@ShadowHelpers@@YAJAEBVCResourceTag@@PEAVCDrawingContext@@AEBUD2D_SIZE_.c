/*
 * XREFs of ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18000F3F4
 * Callers:
 *     ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x180006350 (-GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListB.c)
 *     ?GenerateApproxBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@MAEBUD2D_SIZE_F@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18000E924 (-GenerateApproxBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@MAEBUD2D_SIZE_F@@PEA.c)
 *     ?GenerateFastShadowIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18000F57C (-GenerateFastShadowIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801E42FC (-UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MarkCurrentState@CDrawingContext@@QEAAJXZ @ 0x18000F53C (-MarkCurrentState@CDrawingContext@@QEAAJXZ.c)
 *     ?RestoreStateToLastMark@CDrawingContext@@QEAAXXZ @ 0x18001FC0C (-RestoreStateToLastMark@CDrawingContext@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x1800409B0 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180040A80 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x180040B6C (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180041730 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C891C (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?PushClipShape@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z @ 0x180177EA8 (-PushClipShape@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x18025D4FC (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?ClipWithRect@CShape@@SAJAEBV1@AEBUtagRECT@@PEAPEAV1@@Z @ 0x18025D6C8 (-ClipWithRect@CShape@@SAJAEBV1@AEBUtagRECT@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall ShadowHelpers::GenerateMaskIntermediate(
        __int64 a1,
        CDrawingContext *a2,
        __int64 a3,
        __int64 a4,
        struct CShape *a5,
        char a6,
        float *a7,
        _QWORD *a8)
{
  struct CShape *v8; // rsi
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // edi
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rdx
  unsigned int v18; // ecx
  __int64 v19; // rcx
  int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // rax
  int v24; // eax
  unsigned int v25; // ecx
  int v26; // eax
  unsigned int v27; // ecx
  int v28; // eax
  unsigned int v29; // ecx
  __int64 v30; // [rsp+30h] [rbp-48h] BYREF
  struct CShape *v31; // [rsp+38h] [rbp-40h] BYREF
  char v32; // [rsp+40h] [rbp-38h]
  struct CShape *v33; // [rsp+48h] [rbp-30h] BYREF
  struct tagRECT v34; // [rsp+50h] [rbp-28h] BYREF

  v8 = a5;
  v30 = 0LL;
  v12 = CDrawingContext::PushOffScreenRenderingLayer(a2, a1, a3, DisplayId::None, 0, &v30);
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xE7u, 0LL);
    goto LABEL_11;
  }
  v15 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
  v14 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xEAu, 0LL);
    goto LABEL_10;
  }
  v14 = CDrawingContext::MarkCurrentState(a2);
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v14, 0xEEu, 0LL);
    goto LABEL_9;
  }
  v31 = 0LL;
  v32 = 0;
  if ( a5 )
  {
    if ( !a6 )
    {
      CShapePtr::Release((CShapePtr *)&v31);
      v32 = 0;
      goto LABEL_22;
    }
    v34.left = (int)*a7;
    v34.top = (int)a7[1];
    v34.right = (int)a7[2];
    v34.bottom = (int)a7[3];
    v24 = CShape::ClipWithRect(a5, &v34, &v33);
    v14 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xF8u, 0LL);
      goto LABEL_8;
    }
    v8 = v33;
    CShapePtr::Release((CShapePtr *)&v31);
  }
  else
  {
    if ( !a6 )
    {
LABEL_6:
      v19 = a4 + *(int *)(*(_QWORD *)(a4 + 56) + 8LL) + 56LL;
      v20 = (*(__int64 (__fastcall **)(__int64, CDrawingContext *, __int64, _QWORD))(*(_QWORD *)v19 + 16LL))(
              v19,
              a2,
              a3,
              0LL);
      v14 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x10Cu, 0LL);
      }
      else
      {
        v22 = v30;
        v30 = 0LL;
        *a8 = v22;
      }
      goto LABEL_8;
    }
    v26 = CShape::BuildFromRectFs(a7, v17, &v33);
    v14 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x103u, 0LL);
      goto LABEL_8;
    }
    CShapePtr::Release((CShapePtr *)&v31);
    v8 = v33;
  }
  v32 = 1;
LABEL_22:
  v31 = v8;
  if ( !v8 )
    goto LABEL_6;
  v28 = CDrawingContext::PushClipShape(a2);
  v14 = v28;
  if ( v28 >= 0 )
    goto LABEL_6;
  MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x109u, 0LL);
LABEL_8:
  CShapePtr::Release((CShapePtr *)&v31);
  CDrawingContext::RestoreStateToLastMark(a2);
LABEL_9:
  CDrawingContext::PopTransformInternal(a2, 1);
LABEL_10:
  CDrawingContext::PopLayer(a2);
LABEL_11:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v30);
  return (unsigned int)v14;
}
