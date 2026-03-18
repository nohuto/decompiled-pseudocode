/*
 * XREFs of ?GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x18000EC50
 * Callers:
 *     ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIBitmapRealization@@AEBUD2D_POINT_2F@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18000E968 (-GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIBitmapRealization@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x180010DB8 (-GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x18018D7E0 (-DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 *     ?RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18018F980 (-RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateWhiteColorIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIBitmapRealization@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180266A70 (-GenerateWhiteColorIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180082FD8 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::GetCachedEffectNoRef(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v4; // rax
  unsigned int v6; // edi
  __int64 v7; // rsi
  __int64 v8; // rax
  int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  *a3 = 0LL;
  v4 = a1 + 1112;
  if ( !a1 )
    v4 = 1128LL;
  v6 = *(_DWORD *)v4;
  if ( *(int *)v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x468u, 0LL, 0, v6, 0x5FBu, 0LL);
  }
  else
  {
    v7 = a2;
    v8 = *(_QWORD *)(a1 + 8LL * a2 + 256);
    if ( v8 )
    {
LABEL_5:
      *a3 = v8;
      return CD3DDevice::TranslateDXGIorD3DErrorInContext((a1 - 16) & -(__int64)(a1 != 0), v6, 0LL);
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64 *))(**(_QWORD **)(a1 + 240) + 504LL))(
            *(_QWORD *)(a1 + 240),
            (char *)&xmmword_1803435C4 + 24 * a2,
            &v12);
    v6 = v10;
    if ( v10 >= 0 )
    {
      v8 = v12;
      v12 = 0LL;
      *(_QWORD *)(a1 + 8 * v7 + 256) = v8;
      goto LABEL_5;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x600u, 0LL);
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return CD3DDevice::TranslateDXGIorD3DErrorInContext((a1 - 16) & -(__int64)(a1 != 0), v6, 0LL);
}
