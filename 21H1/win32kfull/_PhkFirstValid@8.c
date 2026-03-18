/*
 * XREFs of _PhkFirstValid@8 @ 0x12974
 * Callers:
 *     ?CheckWHFBits@@YGXPAUtagTHREADINFO@@H@Z @ 0x12872 (-CheckWHFBits@@YGXPAUtagTHREADINFO@@H@Z.c)
 *     _EditionKeyEventLLHook@48 @ 0x1292C (_EditionKeyEventLLHook@48.c)
 *     ?xxxMoveEventAbsolute@@YG?AW4_CommitMousePosAndMoveResult@@JJKPAXPAU_MOUSE_INPUT_DATA@@_K2HHHPAU_MousePacketPerf@@@Z @ 0xF0598 (-xxxMoveEventAbsolute@@YG-AW4_CommitMousePosAndMoveResult@@JJKPAXPAU_MOUSE_INPUT_DATA@@_K2HHHPAU.c)
 *     _EditionLLMouseButtonHook@28 @ 0x1479C6 (_EditionLLMouseButtonHook@28.c)
 *     _EditionLLMouseWheelHook@24 @ 0x147BBA (_EditionLLMouseWheelHook@24.c)
 *     _xxxCallMouseHook@12 @ 0x152C40 (_xxxCallMouseHook@12.c)
 *     _zzzUnhookWindowsHook@8 @ 0x152D39 (_zzzUnhookWindowsHook@8.c)
 *     _xxxPointerCallHook@20 @ 0x15A676 (_xxxPointerCallHook@20.c)
 * Callees:
 *     <none>
 */

int __fastcall PhkFirstValid(int a1, int a2)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 4 * a2 + 516);
  if ( (result || (result = *(_DWORD *)(*(_DWORD *)(a1 + 252) + 4 * a2 + 24)) != 0) && *(char *)(result + 32) < 0 )
    return PhkNextValid(result);
  return result;
}
