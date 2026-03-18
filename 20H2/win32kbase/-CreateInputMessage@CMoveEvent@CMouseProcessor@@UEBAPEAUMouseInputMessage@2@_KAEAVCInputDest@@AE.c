/*
 * XREFs of ?CreateInputMessage@CMoveEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@AEBUInputDeliveryContext@2@@Z @ 0x1C01B9A30
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     ??0MoveInputMessage@CMouseProcessor@@QEAA@AEBVCMoveEvent@1@_KAEAVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01B8EF8 (--0MoveInputMessage@CMouseProcessor@@QEAA@AEBVCMoveEvent@1@_KAEAVCInputDest@@AEBUInputDeliveryCo.c)
 */

struct CMouseProcessor::MouseInputMessage *__fastcall CMouseProcessor::CMoveEvent::CreateInputMessage(
        CMouseProcessor::CMoveEvent *this,
        __int64 a2,
        struct CInputDest *a3,
        const struct CMouseProcessor::InputDeliveryContext *a4)
{
  CMouseProcessor::MoveInputMessage *v8; // rcx
  struct CMouseProcessor::MouseInputMessage *result; // rax

  v8 = (CMouseProcessor::MoveInputMessage *)Win32AllocPool(376LL, 0x70724D50u);
  result = 0LL;
  if ( v8 )
    return CMouseProcessor::MoveInputMessage::MoveInputMessage(v8, this, a2, a3, a4);
  return result;
}
