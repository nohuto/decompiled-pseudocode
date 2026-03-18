/*
 * XREFs of ?Initialize@CInputThread@@SAJXZ @ 0x1C00512E8
 * Callers:
 *     InitializeInputComponents @ 0x1C0023A2C (InitializeInputComponents.c)
 * Callees:
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CInputThread::Initialize(__int64 a1)
{
  __int64 v1; // rax

  if ( gpInputThread )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v1 = Win32AllocPool(48LL, 1884571981LL);
  if ( v1 )
  {
    *(_DWORD *)(v1 + 16) = 0;
    *(_QWORD *)(v1 + 24) = 0LL;
    *(_QWORD *)(v1 + 32) = 0LL;
    *(_DWORD *)(v1 + 40) = 0;
    *(_QWORD *)v1 = 0LL;
    *(_QWORD *)(v1 + 8) = 0LL;
  }
  gpInputThread = (CInputThread *)v1;
  return v1 == 0 ? 0xC0000017 : 0;
}
