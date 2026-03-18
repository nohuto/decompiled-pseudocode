/*
 * XREFs of ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x1800604DC
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18008C7B0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?SetSurface@?$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJPEAUHLSURF__@@@Z @ 0x1800EA874 (-SetSurface@-$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJPEAUHLSURF__@@@Z.c)
 * Callees:
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x18006051C (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

bool __fastcall CGdiSpriteBitmap::EnsureBitmapRealization(CGdiSpriteBitmap *this)
{
  int Bitmap; // eax
  unsigned int v3; // ecx

  if ( !*((_QWORD *)this + 53) )
  {
    Bitmap = CGdiSpriteBitmap::CreateBitmap(this, (enum DXGI_FORMAT)*((_DWORD *)this + 32));
    if ( Bitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, Bitmap, 0x97u, 0LL);
  }
  return *((_QWORD *)this + 53) != 0LL;
}
