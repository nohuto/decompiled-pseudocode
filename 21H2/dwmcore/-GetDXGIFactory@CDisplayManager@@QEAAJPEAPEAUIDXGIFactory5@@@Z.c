/*
 * XREFs of ?GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x18003DC80
 * Callers:
 *     ?EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ @ 0x18003D964 (-EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x1801994B0 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 *     ?CreateCompositionSwapChain@CD3DDevice@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVICompositionSwapChain@@@Z @ 0x18027D028 (-CreateCompositionSwapChain@CD3DDevice@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTarg.c)
 * Callees:
 *     ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x18003DCAC (-InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800A7C48 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 */

__int64 __fastcall CDisplayManager::GetDXGIFactory(CDisplayManager *this, struct IDXGIFactory5 **a2)
{
  int DXGIFactory; // eax
  unsigned int v3; // ecx
  unsigned int v4; // ebx
  CDisplayManager *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = this;
  DXGIFactory = CDisplayManager::InternalGetDXGIFactory(this, a2);
  LODWORD(v6) = DXGIFactory;
  v4 = DXGIFactory;
  if ( DXGIFactory < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_180347468, 2u, DXGIFactory, 0x3Au, 0LL);
    TranslateDXGIorD3DErrorInContext(v4, 4LL, &v6);
    return (unsigned int)v6;
  }
  return v4;
}
