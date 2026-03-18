/*
 * XREFs of ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x18003FFB8
 * Callers:
 *     ?ProcessUpdate@CGdiSpriteBitmap@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_GDISPRITEBITMAP@@@Z @ 0x18003FF24 (-ProcessUpdate@CGdiSpriteBitmap@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_GDISPRITEBITMAP@@@Z.c)
 *     ?NeedsTiling@CGdiSpriteBitmap@@UEAA_NI@Z @ 0x1800C6330 (-NeedsTiling@CGdiSpriteBitmap@@UEAA_NI@Z.c)
 * Callees:
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x18003FFF4 (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

bool __fastcall CGdiSpriteBitmap::EnsureBitmapRealization(CGdiSpriteBitmap *this)
{
  int Bitmap; // eax
  unsigned int v3; // ecx

  if ( !*((_QWORD *)this + 60) )
  {
    Bitmap = CGdiSpriteBitmap::CreateBitmap(this, (enum DXGI_FORMAT)*((_DWORD *)this + 24));
    if ( Bitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, Bitmap, 0xE7u, 0LL);
  }
  return *((_QWORD *)this + 60) != 0LL;
}
