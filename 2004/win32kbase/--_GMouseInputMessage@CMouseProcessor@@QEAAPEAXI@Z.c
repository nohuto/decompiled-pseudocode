/*
 * XREFs of ??_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z @ 0x1C01BB380
 * Callers:
 *     ?DropAllMouseInput@BufferedMouseInputList@CMouseProcessor@@QEAAXXZ @ 0x1C005CFAC (-DropAllMouseInput@BufferedMouseInputList@CMouseProcessor@@QEAAXXZ.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseCursorEvent@@@Z @ 0x1C01BD540 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseC.c)
 *     ?ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z @ 0x1C01BE650 (-ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

CMouseProcessor::MouseInputMessage *__fastcall CMouseProcessor::MouseInputMessage::`scalar deleting destructor'(
        CMouseProcessor::MouseInputMessage *this)
{
  CInputDest::SetEmpty((CMouseProcessor::MouseInputMessage *)((char *)this + 24));
  if ( this )
    Win32FreePool((__int64)this);
  return this;
}
