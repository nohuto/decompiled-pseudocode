/*
 * XREFs of ?GetInputMessageSource@QHelper@@YAPEAUtagINPUT_MESSAGE_SOURCE@@AEBVCInputDest@@@Z @ 0x1C0032BE0
 * Callers:
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@PEAU_mouseCursorEvent@@@Z @ 0x1C0032A74 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 * Callees:
 *     QHelper::_anonymous_namespace_::GetQ @ 0x1C0033CBC (QHelper--_anonymous_namespace_--GetQ.c)
 */

struct tagINPUT_MESSAGE_SOURCE *__fastcall QHelper::GetInputMessageSource(QHelper *this, const struct CInputDest *a2)
{
  __int64 v2; // rcx
  struct tagINPUT_MESSAGE_SOURCE *result; // rax

  v2 = QHelper::_anonymous_namespace_::GetQ(this, a2);
  result = 0LL;
  if ( v2 )
    return (struct tagINPUT_MESSAGE_SOURCE *)(v2 + 420);
  return result;
}
