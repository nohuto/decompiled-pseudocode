/*
 * XREFs of ??_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z @ 0x1C01C10E0
 * Callers:
 *     ?DropAllMouseInput@BufferedMouseInputList@CMouseProcessor@@QEAAXXZ @ 0x1C004F43C (-DropAllMouseInput@BufferedMouseInputList@CMouseProcessor@@QEAAXXZ.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseCursorEvent@@@Z @ 0x1C01C32A0 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseC.c)
 *     ?ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z @ 0x1C01C43CC (-ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

CMouseProcessor::MouseInputMessage *__fastcall CMouseProcessor::MouseInputMessage::`scalar deleting destructor'(
        CMouseProcessor::MouseInputMessage *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  CInputDest::SetEmpty((CMouseProcessor::MouseInputMessage *)((char *)this + 24));
  if ( this )
    Win32FreePool((__int64)this, v2, v3);
  return this;
}
