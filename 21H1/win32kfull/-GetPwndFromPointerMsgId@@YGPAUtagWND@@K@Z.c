/*
 * XREFs of ?GetPwndFromPointerMsgId@@YGPAUtagWND@@K@Z @ 0x159F20
 * Callers:
 *     ?DelegateDiscardMessages@@YGXPAUtagQ@@HPAUtagDELEGATEPOINTERMAP@@@Z @ 0x159CFC (-DelegateDiscardMessages@@YGXPAUtagQ@@HPAUtagDELEGATEPOINTERMAP@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagWND *__thiscall GetPwndFromPointerMsgId(void *this)
{
  struct tagWND *result; // eax
  HWND v2; // [esp+0h] [ebp-4h] BYREF

  v2 = 0;
  result = (struct tagWND *)CTouchProcessor::GetPointerMessageInfo(
                              _gpTouchProcessor,
                              (unsigned int)this,
                              0,
                              &v2,
                              0,
                              0,
                              0,
                              0);
  if ( result )
    return (struct tagWND *)ValidateHwnd(v2);
  return result;
}
