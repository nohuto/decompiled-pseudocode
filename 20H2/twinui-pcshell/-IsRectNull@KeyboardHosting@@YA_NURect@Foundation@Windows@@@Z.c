/*
 * XREFs of ?IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z @ 0x18035DBFC
 * Callers:
 *     ?GetCurrentTextSelectionRect@TabTipAdapter@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z @ 0x18035D134 (-GetCurrentTextSelectionRect@TabTipAdapter@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z.c)
 *     ?OnEditControlSelectionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlSelectionChangedEventArgs@45678@@Z @ 0x18035E490 (-OnEditControlSelectionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core.c)
 *     ?IsCursorPositionValid@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ @ 0x18036899C (-IsCursorPositionValid@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ.c)
 *     ?IsViewOccludingCaret@ViewRectProvider@KeyboardHosting@@AEAA_NAEAURect@Foundation@Windows@@0@Z @ 0x18036B078 (-IsViewOccludingCaret@ViewRectProvider@KeyboardHosting@@AEAA_NAEAURect@Foundation@Windows@@0@Z.c)
 *     ?GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@URect@Foundation@Windows@@0@Z @ 0x18036CA38 (-GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@URect@Foundation@Windows@@0@Z.c)
 *     ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x18036CD28 (-GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Cor.c)
 *     ?ValidateRect@ViewRectHelper@KeyboardHosting@@CAXPEAURect@Foundation@Windows@@@Z @ 0x18036D1A4 (-ValidateRect@ViewRectHelper@KeyboardHosting@@CAXPEAURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeyboardHosting::IsRectNull(float *a1)
{
  return *a1 == 0.0 && a1[1] == 0.0 && a1[2] == 0.0 && a1[3] == 0.0;
}
