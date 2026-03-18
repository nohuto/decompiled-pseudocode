/*
 * XREFs of ??0MoveInputMessage@CMouseProcessor@@QEAA@AEBVCMoveEvent@1@_KAEAVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01C0FC8
 * Callers:
 *     ?CreateInputMessage@CMoveEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@AEBUInputDeliveryContext@2@@Z @ 0x1C01C1B00 (-CreateInputMessage@CMoveEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@AE.c)
 * Callees:
 *     ??0MouseInputMessage@CMouseProcessor@@QEAA@_KAEBVCMouseEvent@1@AEAVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01C0E8C (--0MouseInputMessage@CMouseProcessor@@QEAA@_KAEBVCMouseEvent@1@AEAVCInputDest@@AEBUInputDelivery.c)
 */

CMouseProcessor::MoveInputMessage *__fastcall CMouseProcessor::MoveInputMessage::MoveInputMessage(
        CMouseProcessor::MoveInputMessage *this,
        const struct CMouseProcessor::CMoveEvent *a2,
        __int64 a3,
        struct CInputDest *a4,
        const struct CMouseProcessor::InputDeliveryContext *a5)
{
  __int64 v7; // rax

  CMouseProcessor::MouseInputMessage::MouseInputMessage(this, a3, a2, a4, a5);
  *((_QWORD *)this + 44) = &CMouseProcessor::CMouseEvent::`vftable';
  *((_QWORD *)this + 45) = *((_QWORD *)a2 + 1);
  *((_DWORD *)this + 92) = *((_DWORD *)a2 + 4);
  v7 = 2LL;
  do
  {
    *((_QWORD *)this + 44) = &CMouseProcessor::CMoveEvent::`vftable';
    --v7;
  }
  while ( v7 );
  *((_QWORD *)this + 45) = (char *)this + 184;
  return this;
}
