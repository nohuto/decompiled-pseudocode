/*
 * XREFs of ?ProcessUpdate@CGdiSpriteBitmap@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_GDISPRITEBITMAP@@@Z @ 0x18003FF24
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x18003FFB8 (-EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@PEAPEAV1@@Z @ 0x1800CD494 (-Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@.c)
 */

__int64 __fastcall CGdiSpriteBitmap::ProcessUpdate(
        CGdiSpriteBitmap *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_GDISPRITEBITMAP *a3)
{
  CGdiSpriteBitmap *v4; // rbx
  struct CComposition *v5; // rax
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // edi
  bool v9; // zf

  v4 = this;
  if ( *((_QWORD *)this + 10) || (this = (CGdiSpriteBitmap *)*((_QWORD *)a3 + 1)) == 0LL )
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, &dword_1802D8FC0, 4u, -2003303421, 0x71u, 0LL);
  }
  else
  {
    v5 = g_pComposition;
    *((_QWORD *)v4 + 10) = this;
    v6 = CRedirectedGDISurface::Create(
           (HLSURF)this,
           v4,
           (struct CLegacySurfaceManager *)(*((_QWORD *)v5 + 12) + 96LL),
           (struct CRedirectedGDISurface **)v4 + 11);
    v8 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802D8FC0, 4u, v6, 0x78u, 0LL);
    }
    else
    {
      v9 = *((_BYTE *)a3 + 16) == 0;
      *((_BYTE *)v4 + 130) = 1;
      *((_BYTE *)v4 + 129) = !v9;
      CGdiSpriteBitmap::EnsureBitmapRealization(v4);
      *((_BYTE *)v4 + 130) = 0;
    }
  }
  return v8;
}
