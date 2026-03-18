/*
 * XREFs of ?GetVKey@CButtonEvent@CMouseProcessor@@QEBAEXZ @ 0x1C002C9A8
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C00302C4 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

unsigned __int8 __fastcall CMouseProcessor::CButtonEvent::GetVKey(
        CMouseProcessor::CButtonEvent *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax

  v4 = *((_QWORD *)this + 5);
  if ( !v4 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
    v4 = *((_QWORD *)this + 5);
  }
  return *(_BYTE *)(v4 + 12);
}
