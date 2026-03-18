/*
 * XREFs of ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x1C0030260
 * Callers:
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C002EBFC (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C00302C4 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C00AF7D8 (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::CButtonEvent::GetButtonMessage(
        CMouseProcessor::CButtonEvent *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int *v4; // rdx
  __int64 v6; // rcx

  v4 = (unsigned int *)*((_QWORD *)this + 5);
  if ( !v4 )
    return 0LL;
  v6 = *((unsigned int *)this + 8);
  if ( (*((_BYTE *)this + 36) & 1) != 0 )
  {
    if ( (_DWORD)v6 != 1 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v4, a3, a4);
      v4 = (unsigned int *)*((_QWORD *)this + 5);
    }
    return v4[2];
  }
  else if ( (_DWORD)v6 == 1 )
  {
    return *v4;
  }
  else
  {
    return v4[1];
  }
}
