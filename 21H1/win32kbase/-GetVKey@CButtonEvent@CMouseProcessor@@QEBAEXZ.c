/*
 * XREFs of ?GetVKey@CButtonEvent@CMouseProcessor@@QEBAEXZ @ 0x1C005FAB4
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C005FFC0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

unsigned __int8 __fastcall CMouseProcessor::CButtonEvent::GetVKey(CMouseProcessor::CButtonEvent *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 5);
  if ( !v1 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
    v1 = *((_QWORD *)this + 5);
  }
  return *(_BYTE *)(v1 + 12);
}
