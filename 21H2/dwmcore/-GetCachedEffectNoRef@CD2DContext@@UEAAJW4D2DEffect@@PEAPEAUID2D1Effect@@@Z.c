/*
 * XREFs of ?GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x180010070
 * Callers:
 *     ?GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIBitmapRealization@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18000FB3C (-GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x180194320 (-DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 *     ?RenderLayer@CColorTransformLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801D8880 (-RenderLayer@CColorTransformLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIBitmapRealization@@AEBUD2D_POINT_2F@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x1802A9724 (-GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?GenerateWhiteColorIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIBitmapRealization@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1802A9CA0 (-GenerateWhiteColorIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x18007F688 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::GetCachedEffectNoRef(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v3; // rax
  unsigned int v6; // edi
  __int64 v7; // rsi
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ecx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v3 = a1 + 1072;
  v12 = 0LL;
  if ( !a1 )
    v3 = 1088LL;
  v6 = *(_DWORD *)v3;
  if ( *(int *)v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x440u, 0LL, 0, v6, 0x5C8u, 0LL);
  }
  else
  {
    v7 = a2;
    v8 = *(_QWORD *)(a1 + 8LL * a2 + 216);
    if ( v8 )
    {
LABEL_7:
      *a3 = v8;
      return CD3DDevice::TranslateDXGIorD3DErrorInContext((a1 - 16) & -(__int64)(a1 != 0), v6, 0LL);
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64 *))(**(_QWORD **)(a1 + 200) + 504LL))(
           *(_QWORD *)(a1 + 200),
           (char *)&xmmword_1803D2474 + 24 * a2,
           &v12);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v8 = v12;
      v12 = 0LL;
      *(_QWORD *)(a1 + 8 * v7 + 216) = v8;
      goto LABEL_7;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x5CDu, 0LL);
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return CD3DDevice::TranslateDXGIorD3DErrorInContext((a1 - 16) & -(__int64)(a1 != 0), v6, 0LL);
}
