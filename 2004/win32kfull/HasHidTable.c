/*
 * XREFs of HasHidTable @ 0x1C0090220
 * Callers:
 *     EditionKeyEventLLHook @ 0x1C0045F20 (EditionKeyEventLLHook.c)
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C0055358 (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 *     HasRawInputForegroundTarget @ 0x1C0055494 (HasRawInputForegroundTarget.c)
 *     UpdateRawMouseMode @ 0x1C0090198 (UpdateRawMouseMode.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00F8170 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C00F9270 (EditionHandleAndPostKeyEvent.c)
 *     EditionHandleAltTab @ 0x1C0126BE0 (EditionHandleAltTab.c)
 *     ?TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1C01D4724 (-TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z.c)
 *     RegisterModernAppThreadForRawKeyboard @ 0x1C01D5CE0 (RegisterModernAppThreadForRawKeyboard.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x1C01D5D8C (UnregisterModernAppThreadForRawKeyboard.c)
 *     EditionRawInputRequestedForKeyboard @ 0x1C0208000 (EditionRawInputRequestedForKeyboard.c)
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
    v2 = *(_QWORD *)(a1 + 416);
    if ( v2 )
    {
      if ( *(_QWORD *)(v2 + 832) )
        return 1LL;
    }
  }
  return result;
}
