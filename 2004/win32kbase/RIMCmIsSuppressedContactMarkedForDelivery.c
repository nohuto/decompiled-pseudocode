/*
 * XREFs of RIMCmIsSuppressedContactMarkedForDelivery @ 0x1C0180E98
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C015CA24 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimFinalizePointerFlags @ 0x1C017C584 (rimFinalizePointerFlags.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCmIsSuppressedContactMarkedForDelivery(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (*(_DWORD *)(a1 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  return (*(_DWORD *)(a1 + 2420) >> 25) & 1;
}
