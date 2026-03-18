/*
 * XREFs of ?ProcessEnableRendering@CCursorVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CURSORVISUAL_ENABLERENDERING@@@Z @ 0x1801BE12C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800AA3B8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

__int64 __fastcall CCursorVisual::ProcessEnableRendering(
        CCursorVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CURSORVISUAL_ENABLERENDERING *a3)
{
  char v3; // r9

  v3 = *((_BYTE *)a3 + 8);
  if ( *((_BYTE *)this + 624) != (v3 != 0) )
  {
    *((_BYTE *)this + 94) &= ~4u;
    *((_BYTE *)this + 624) = v3;
    *((_BYTE *)this + 94) |= v3 == 0 ? 4 : 0;
    CVisual::PropagateFlags((__int64)this, 5u);
  }
  return 0LL;
}
