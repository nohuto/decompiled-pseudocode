/*
 * XREFs of _GreSetTextColor@8 @ 0x90E92
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     ?DrawGrip@@YGHPAUHDC__@@PAUtagRECT@@I@Z @ 0x8FDEE (-DrawGrip@@YGHPAUHDC__@@PAUtagRECT@@I@Z.c)
 *     ?DrawMenuMark@@YGHPAUHDC__@@PAUtagRECT@@II@Z @ 0x8FEF0 (-DrawMenuMark@@YGHPAUHDC__@@PAUtagRECT@@II@Z.c)
 *     _DrawPushButton@16 @ 0x904D2 (_DrawPushButton@16.c)
 *     ?DrawBox@@YGHPAUHDC__@@PAUtagRECT@@I@Z @ 0x907DA (-DrawBox@@YGHPAUHDC__@@PAUtagRECT@@I@Z.c)
 *     ?DrawIt@@YGHPAUHDC__@@PAUtagRECT@@IG@Z @ 0x90C70 (-DrawIt@@YGHPAUHDC__@@PAUtagRECT@@IG@Z.c)
 *     _BltIcon@36 @ 0x90D6C (_BltIcon@36.c)
 *     _RecolorDeskPattern@0 @ 0xAEE98 (_RecolorDeskPattern@0.c)
 *     _xxxDrawMenuItem@24 @ 0xB61DA (_xxxDrawMenuItem@24.c)
 *     _xxxDrawCaptionTemp@28 @ 0xBC4CE (_xxxDrawCaptionTemp@28.c)
 *     ?xxxDrawSB2@@YGXPAUtagWND@@PAUtagSBCALC@@PAUHDC__@@HI@Z @ 0xC1B60 (-xxxDrawSB2@@YGXPAUtagWND@@PAUtagSBCALC@@PAUHDC__@@HI@Z.c)
 *     _xxxDrawMenuBarUnderlines@8 @ 0xCC2CA (_xxxDrawMenuBarUnderlines@8.c)
 *     _FinalUserInit@0 @ 0xD6A7A (_FinalUserInit@0.c)
 *     ?DrawSwitchWndHilite@@YGXPAUtagSwitchWndInfo@@PAUHDC__@@HHH@Z @ 0x15C04A (-DrawSwitchWndHilite@@YGXPAUtagSwitchWndInfo@@PAUHDC__@@HHH@Z.c)
 *     ?PaintWatermark@@YGXPAUHDC__@@PBUtagRECT@@@Z @ 0x18512F (-PaintWatermark@@YGXPAUHDC__@@PBUtagRECT@@@Z.c)
 *     _SfnINLPKDRAWSWITCHWND@32 @ 0x18D98D (_SfnINLPKDRAWSWITCHWND@32.c)
 *     ?xxxTooltipRender@@YGXPAUtagTOOLTIPWND@@PAUHDC__@@@Z @ 0x1A0FFC (-xxxTooltipRender@@YGXPAUtagTOOLTIPWND@@PAUHDC__@@@Z.c)
 *     ?DrawMenuItemCheckMark@@YGHPAUHDC__@@PAUtagITEM@@H@Z @ 0x1A8C6A (-DrawMenuItemCheckMark@@YGHPAUHDC__@@PAUtagITEM@@H@Z.c)
 *     _BltColor@40 @ 0x1ACFB1 (_BltColor@40.c)
 *     _xxxDrawState@32 @ 0x1AD06D (_xxxDrawState@32.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 */

int __fastcall GreSetTextColor(HDC a1, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // esi
  struct _DC_ATTR *UserAttr; // eax
  int v7; // esi
  DC *v9; // [esp+Ch] [ebp-10h] BYREF
  int v10; // [esp+10h] [ebp-Ch]
  int v11; // [esp+14h] [ebp-8h]
  int v12; // [esp+18h] [ebp-4h] BYREF

  v10 = 0;
  v3 = -1;
  v11 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v9, a1);
  if ( v9 )
  {
    v4 = *((_DWORD *)v9 + 255);
    v3 = *(_DWORD *)(v4 + 208);
    *(_DWORD *)(v4 + 208) = a2;
    v5 = a2 & 0x13FFFFFF;
    if ( v5 != v3 )
    {
      *(_DWORD *)(*((_DWORD *)v9 + 255) + 204) = v5;
      *(_DWORD *)(*((_DWORD *)v9 + 255) + 184) |= 7u;
    }
    if ( v10 && (*((_BYTE *)v9 + 32) & 2) != 0 )
    {
      if ( !v11 )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v9);
        if ( UserAttr )
          DC::RestoreAttributes(v9, UserAttr);
      }
      *((_DWORD *)v9 + 8) &= ~2u;
      v10 = 0;
    }
    v12 = 0;
    v7 = *(_DWORD *)v9;
    HmgDecrementExclusiveReferenceCountEx(v9, v11, &v12);
    if ( v12 )
      bDeleteDCInternalEx(v7, 0);
  }
  return v3;
}
