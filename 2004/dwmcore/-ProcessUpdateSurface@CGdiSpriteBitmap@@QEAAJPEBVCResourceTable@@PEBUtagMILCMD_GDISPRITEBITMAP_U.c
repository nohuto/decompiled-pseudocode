/*
 * XREFs of ?ProcessUpdateSurface@CGdiSpriteBitmap@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_GDISPRITEBITMAP_UPDATESURFACE@@@Z @ 0x1800D61E0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x180094624 (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::ProcessUpdateSurface(
        CGdiSpriteBitmap *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_GDISPRITEBITMAP_UPDATESURFACE *a3)
{
  unsigned int v4; // ebx
  __int64 result; // rax
  int Bitmap; // eax
  __int64 v7; // rcx

  if ( *((_QWORD *)this + 10) )
  {
    v4 = 0;
    if ( *((_DWORD *)a3 + 2) != *((_DWORD *)this + 24) )
    {
      *((_BYTE *)this + 130) = 1;
      Bitmap = CGdiSpriteBitmap::CreateBitmap(this, (enum DXGI_FORMAT)*((_DWORD *)a3 + 2));
      v4 = Bitmap;
      if ( Bitmap < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, Bitmap, 0x94u, 0LL);
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, 0x8Eu, 0LL);
  }
  result = v4;
  *((_BYTE *)this + 130) = 0;
  return result;
}
