/*
 * XREFs of HasHidTable @ 0x1C00D5400
 * Callers:
 *     EditionKeyEventLLHook @ 0x1C0074DE0 (EditionKeyEventLLHook.c)
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C00BDB18 (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 *     HasRawInputForegroundTarget @ 0x1C00BDC54 (HasRawInputForegroundTarget.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C00BDD10 (EditionHandleAndPostKeyEvent.c)
 *     UpdateRawMouseMode @ 0x1C00D5378 (UpdateRawMouseMode.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00FF340 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     EditionHandleAltTab @ 0x1C01285A0 (EditionHandleAltTab.c)
 *     ?TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1C01D3914 (-TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z.c)
 *     RegisterModernAppThreadForRawKeyboard @ 0x1C01D5020 (RegisterModernAppThreadForRawKeyboard.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x1C01D50CC (UnregisterModernAppThreadForRawKeyboard.c)
 *     EditionRawInputRequestedForKeyboard @ 0x1C0207190 (EditionRawInputRequestedForKeyboard.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HasHidTable(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = 0LL;
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 424);
    if ( v2 )
    {
      if ( *(_QWORD *)(v2 + 832) )
        return 1LL;
    }
  }
  return result;
}
