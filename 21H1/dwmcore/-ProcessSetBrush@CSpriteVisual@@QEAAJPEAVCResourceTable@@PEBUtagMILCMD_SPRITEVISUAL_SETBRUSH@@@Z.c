/*
 * XREFs of ?ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETBRUSH@@@Z @ 0x1800C2E28
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18007B660 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800809A4 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CSpriteVisual::ProcessSetBrush(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SPRITEVISUAL_SETBRUSH *a3)
{
  struct CContent *Resource; // rax
  unsigned int v5; // edx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 && (Resource = (struct CContent *)CResourceTable::GetResource((__int64)a2, v5, 0xEu)) == 0LL )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2003303421, 0x3Du, 0LL);
  }
  else
  {
    v8 = CVisual::SetContent(this, Resource);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x41u, 0LL);
  }
  return v10;
}
