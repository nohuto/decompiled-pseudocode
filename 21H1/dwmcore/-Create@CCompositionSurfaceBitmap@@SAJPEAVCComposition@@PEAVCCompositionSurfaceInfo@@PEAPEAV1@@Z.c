/*
 * XREFs of ?Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x1801C08D4
 * Callers:
 *     ?CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x180182414 (-CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCC.c)
 * Callees:
 *     ?SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z @ 0x18002C10C (-SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800323F0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??0CCompositionSurfaceBitmap@@IEAA@PEAVCComposition@@@Z @ 0x180093074 (--0CCompositionSurfaceBitmap@@IEAA@PEAVCComposition@@@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800B5D50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ??2CCompositionSurfaceBitmap@@KAPEAX_K@Z @ 0x1800CCA70 (--2CCompositionSurfaceBitmap@@KAPEAX_K@Z.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::Create(
        struct CComposition *a1,
        struct CCompositionSurfaceInfo *a2,
        struct CCompositionSurfaceBitmap **a3)
{
  unsigned int v3; // esi
  CCompositionSurfaceBitmap *v7; // rax
  __int64 v8; // rcx
  CMILCOMBase *v9; // rdi

  v3 = 0;
  *a3 = 0LL;
  v7 = (CCompositionSurfaceBitmap *)CCompositionSurfaceBitmap::operator new();
  if ( v7 )
    v9 = CCompositionSurfaceBitmap::CCompositionSurfaceBitmap(v7, a1);
  else
    v9 = 0LL;
  if ( v9 )
  {
    CMILCOMBase::InternalAddRef(v9);
    CCompositionSurfaceBitmap::SetSurfaceInfo(v9, a2);
    *a3 = v9;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x1Du, 0LL);
  }
  return v3;
}
