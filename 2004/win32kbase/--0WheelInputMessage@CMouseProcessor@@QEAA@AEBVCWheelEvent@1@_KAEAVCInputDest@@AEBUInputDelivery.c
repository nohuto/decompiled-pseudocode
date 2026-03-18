/*
 * XREFs of ??0WheelInputMessage@CMouseProcessor@@QEAA@AEBVCWheelEvent@1@_KAEAVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01BB2F0
 * Callers:
 *     ?CreateInputMessage@CWheelEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@AEBUInputDeliveryContext@2@@Z @ 0x1C01BBE10 (-CreateInputMessage@CWheelEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@A.c)
 * Callees:
 *     ??0MouseInputMessage@CMouseProcessor@@QEAA@_KAEBVCMouseEvent@1@AEAVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01BB12C (--0MouseInputMessage@CMouseProcessor@@QEAA@_KAEBVCMouseEvent@1@AEAVCInputDest@@AEBUInputDelivery.c)
 */

CMouseProcessor::WheelInputMessage *__fastcall CMouseProcessor::WheelInputMessage::WheelInputMessage(
        CMouseProcessor::WheelInputMessage *this,
        const struct CMouseProcessor::CWheelEvent *a2,
        __int64 a3,
        struct CInputDest *a4,
        const struct CMouseProcessor::InputDeliveryContext *a5)
{
  CMouseProcessor::MouseInputMessage::MouseInputMessage(this, a3, a2, a4, a5);
  *((_QWORD *)this + 44) = &CMouseProcessor::CMouseEvent::`vftable';
  *((_QWORD *)this + 45) = *((_QWORD *)a2 + 1);
  *((_DWORD *)this + 92) = *((_DWORD *)a2 + 4);
  *((_QWORD *)this + 44) = &CMouseProcessor::CWheelEvent::`vftable';
  *((_DWORD *)this + 94) = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 95) = *((_DWORD *)a2 + 7);
  *((_QWORD *)this + 45) = (char *)this + 184;
  return this;
}
