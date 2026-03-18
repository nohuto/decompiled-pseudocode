/*
 * XREFs of _HasHidTable@4 @ 0x7498A
 * Callers:
 *     _EditionKeyEventLLHook@48 @ 0x1292C (_EditionKeyEventLLHook@48.c)
 *     _UpdateRawMouseMode@4 @ 0x448A8 (_UpdateRawMouseMode@4.c)
 *     ?TestRawInputModeCaptureMouse@@YG_NPAUtagTHREADINFO@@@Z @ 0x7494E (-TestRawInputModeCaptureMouse@@YG_NPAUtagTHREADINFO@@@Z.c)
 *     _EditionHandleAndPostKeyEvent@68 @ 0xA3150 (_EditionHandleAndPostKeyEvent@68.c)
 *     ?HandleRawInput@@YG?AW4RAW_INPUT_PROCESSING_RESULT@@PAXPAU_KEYBOARD_INPUT_DATA@@PBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0xB1E22 (-HandleRawInput@@YG-AW4RAW_INPUT_PROCESSING_RESULT@@PAXPAU_KEYBOARD_INPUT_DATA@@PBURAW_INPUT_SUP.c)
 *     _HasRawInputForegroundTarget@4 @ 0xB1EA0 (_HasRawInputForegroundTarget@4.c)
 *     ?AdjustLegacyDeviceFlags@@YGXPAUtagPROCESSINFO@@@Z @ 0xC9E3A (-AdjustLegacyDeviceFlags@@YGXPAUtagPROCESSINFO@@@Z.c)
 *     _EditionHandleAltTab@32 @ 0xF3338 (_EditionHandleAltTab@32.c)
 *     _RegisterModernAppThreadForRawKeyboard@4 @ 0x14438A (_RegisterModernAppThreadForRawKeyboard@4.c)
 *     _UnregisterModernAppThreadForRawKeyboard@4 @ 0x14441B (_UnregisterModernAppThreadForRawKeyboard@4.c)
 *     _EditionRawInputRequestedForKeyboard@4 @ 0x16DF85 (_EditionRawInputRequestedForKeyboard@4.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall HasHidTable(int a1)
{
  BOOL result; // eax
  int v2; // ecx

  result = 0;
  if ( a1 )
  {
    v2 = *(_DWORD *)(a1 + 232);
    if ( v2 )
      return *(_DWORD *)(v2 + 472) != 0;
  }
  return result;
}
