/*
 * XREFs of ??_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z @ 0x1C01B9010
 * Callers:
 *     ?DropAllMouseInput@BufferedMouseInputList@CMouseProcessor@@QEAAXXZ @ 0x1C00BD57C (-DropAllMouseInput@BufferedMouseInputList@CMouseProcessor@@QEAAXXZ.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseCursorEvent@@@Z @ 0x1C01BB1D0 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseC.c)
 *     ?ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z @ 0x1C01BC2D8 (-ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 */

CMouseProcessor::MouseInputMessage *__fastcall CMouseProcessor::MouseInputMessage::`scalar deleting destructor'(
        CMouseProcessor::MouseInputMessage *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  CInputDest::SetEmpty((CMouseProcessor::MouseInputMessage *)((char *)this + 24), a2, a3, a4);
  if ( this )
    Win32FreePool((__int64)this);
  return this;
}
