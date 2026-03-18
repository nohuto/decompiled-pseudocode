/*
 * XREFs of ?ProcessSetRoot@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETROOT@@@Z @ 0x18029BE84
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C07E8 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z @ 0x18029C0F8 (-SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CHolographicInteropTexture::ProcessSetRoot(
        CHolographicInteropTexture *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETROOT *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  struct CVisual *Resource; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 )
  {
    Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a2, v5, 0xC3u);
    if ( Resource )
    {
      v9 = CHolographicInteropTexture::SetRootVisual(this, Resource);
      v4 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0xE4u);
    }
    else
    {
      v4 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, -2003303421, 0xE1u);
    }
  }
  return v4;
}
