/*
 * XREFs of ?ProcessSetSpriteBitmap@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSPRITEBITMAP@@@Z @ 0x1800620F4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetSpriteBitmap@CWindowNode@@AEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x180062144 (-SetSpriteBitmap@CWindowNode@@AEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C07E8 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetSpriteBitmap(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_WINDOWNODE_SETSPRITEBITMAP *a3)
{
  struct CGdiSpriteBitmap *Resource; // rax
  __int64 v5; // rdx
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx

  Resource = 0LL;
  v5 = *((unsigned int *)a3 + 2);
  if ( (_DWORD)v5 && (Resource = (struct CGdiSpriteBitmap *)CResourceTable::GetResource(a2, v5, 63LL)) == 0LL )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2003303421, 0x175u, 0LL);
  }
  else
  {
    v8 = CWindowNode::SetSpriteBitmap(this, Resource);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x179u, 0LL);
  }
  return v10;
}
