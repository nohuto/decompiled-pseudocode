/*
 * XREFs of ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x1C00B39E0
 * Callers:
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C00293D8 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C002E988 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0032EB4 (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0198060 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     EditionPostInputEvent @ 0x1C00B3A24 (EditionPostInputEvent.c)
 */

__int64 __fastcall CBaseProcessor::PostQEventWork(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 8);
  if ( dword_1C0208D90[2 * a3 + 1] == (_DWORD)result )
    return EditionPostInputEvent(dword_1C0208D90[2 * a3], a2, 0, a4, a5, a6);
  return result;
}
