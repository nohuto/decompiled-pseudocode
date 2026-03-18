/*
 * XREFs of rimAbRemoveGlobalPenDeadzone @ 0x1C0162484
 * Callers:
 *     rimAbRemoveGlobalPenDeadzoneIfExpired @ 0x1C01624C0 (rimAbRemoveGlobalPenDeadzoneIfExpired.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C0162D74 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbRemoveGlobalPenDeadzone(__int64 a1)
{
  __int64 result; // rax

  if ( !gDeviceArbitrationType )
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  *(_DWORD *)(a1 + 492) = 0;
  *(_DWORD *)(a1 + 504) = 0;
  *(_QWORD *)(a1 + 496) = 0LL;
  return result;
}
