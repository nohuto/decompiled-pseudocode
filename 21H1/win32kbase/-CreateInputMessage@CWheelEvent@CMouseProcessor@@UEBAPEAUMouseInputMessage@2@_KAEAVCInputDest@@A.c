/*
 * XREFs of ?CreateInputMessage@CWheelEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@AEBUInputDeliveryContext@2@@Z @ 0x1C01C1B70
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     ??0WheelInputMessage@CMouseProcessor@@QEAA@AEBVCWheelEvent@1@_KAEAVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01C1050 (--0WheelInputMessage@CMouseProcessor@@QEAA@AEBVCWheelEvent@1@_KAEAVCInputDest@@AEBUInputDelivery.c)
 */

struct CMouseProcessor::MouseInputMessage *__fastcall CMouseProcessor::CWheelEvent::CreateInputMessage(
        CMouseProcessor::CWheelEvent *this,
        __int64 a2,
        struct CInputDest *a3,
        const struct CMouseProcessor::InputDeliveryContext *a4)
{
  CMouseProcessor::WheelInputMessage *v8; // rcx
  struct CMouseProcessor::MouseInputMessage *result; // rax

  v8 = (CMouseProcessor::WheelInputMessage *)Win32AllocPool(384LL, 0x70724D50u);
  result = 0LL;
  if ( v8 )
    return CMouseProcessor::WheelInputMessage::WheelInputMessage(v8, this, a2, a3, a4);
  return result;
}
