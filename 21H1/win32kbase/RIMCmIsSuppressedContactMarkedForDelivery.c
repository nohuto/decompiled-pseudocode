/*
 * XREFs of RIMCmIsSuppressedContactMarkedForDelivery @ 0x1C0186B98
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C0162D74 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimFinalizePointerFlags @ 0x1C0182284 (rimFinalizePointerFlags.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCmIsSuppressedContactMarkedForDelivery(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  return (*(_DWORD *)(a1 + 2420) >> 25) & 1;
}
