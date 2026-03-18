/*
 * XREFs of ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x1C005FF5C
 * Callers:
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C005F524 (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C005FCCC (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C005FFC0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::CButtonEvent::GetButtonMessage(CMouseProcessor::CButtonEvent *this)
{
  unsigned int *v1; // rdx
  __int64 v3; // rcx

  v1 = (unsigned int *)*((_QWORD *)this + 5);
  if ( !v1 )
    return 0LL;
  v3 = *((unsigned int *)this + 8);
  if ( (*((_BYTE *)this + 36) & 1) != 0 )
  {
    if ( (_DWORD)v3 != 1 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3);
      v1 = (unsigned int *)*((_QWORD *)this + 5);
    }
    return v1[2];
  }
  else if ( (_DWORD)v3 == 1 )
  {
    return *v1;
  }
  else
  {
    return v1[1];
  }
}
