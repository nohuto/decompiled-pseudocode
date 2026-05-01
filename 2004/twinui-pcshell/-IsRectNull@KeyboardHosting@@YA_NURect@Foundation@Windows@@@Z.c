/*
 * XREFs of ?IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z @ 0x18035E54C
 * Callers:
 *     ?GetCurrentTextSelectionRect@TabTipAdapter@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z @ 0x18035DA84 (-GetCurrentTextSelectionRect@TabTipAdapter@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z.c)
 *     ?OnEditControlSelectionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlSelectionChangedEventArgs@45678@@Z @ 0x18035EDE0 (-OnEditControlSelectionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core.c)
 *     ?IsCursorPositionValid@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ @ 0x18036925C (-IsCursorPositionValid@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ.c)
 *     ?IsViewOccludingCaret@ViewRectProvider@KeyboardHosting@@AEAA_NAEAURect@Foundation@Windows@@0@Z @ 0x18036B938 (-IsViewOccludingCaret@ViewRectProvider@KeyboardHosting@@AEAA_NAEAURect@Foundation@Windows@@0@Z.c)
 *     ?GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@URect@Foundation@Windows@@0@Z @ 0x18036D2F8 (-GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@URect@Foundation@Windows@@0@Z.c)
 *     ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x18036D5E8 (-GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Cor.c)
 *     ?ValidateRect@ViewRectHelper@KeyboardHosting@@CAXPEAURect@Foundation@Windows@@@Z @ 0x18036DA64 (-ValidateRect@ViewRectHelper@KeyboardHosting@@CAXPEAURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeyboardHosting::IsRectNull(float *a1)
{
  return *a1 == 0.0 && a1[1] == 0.0 && a1[2] == 0.0 && a1[3] == 0.0;
}
