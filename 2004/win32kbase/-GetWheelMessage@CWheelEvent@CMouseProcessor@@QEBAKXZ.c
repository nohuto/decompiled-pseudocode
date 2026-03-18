/*
 * XREFs of ?GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ @ 0x1C01BCD28
 * Callers:
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C0069034 (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     ?DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01BBE78 (-DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputD.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01BDDE8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::CWheelEvent::GetWheelMessage(
        CMouseProcessor::CWheelEvent *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // eax

  v4 = *((_DWORD *)this + 7);
  if ( !v4 )
    return 522LL;
  if ( v4 != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  return 526LL;
}
