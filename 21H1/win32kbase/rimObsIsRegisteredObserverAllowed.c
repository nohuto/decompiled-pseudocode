/*
 * XREFs of rimObsIsRegisteredObserverAllowed @ 0x1C0183F38
 * Callers:
 *     rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C01859EC (rimObsRouteInputAndCheckForExclusiveObservers.c)
 * Callees:
 *     ?rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0183CC8 (-rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     RIMIsTestSigningOn @ 0x1C0187974 (RIMIsTestSigningOn.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsIsRegisteredObserverAllowed(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx

  v1 = 1;
  if ( !(unsigned int)rimIsProcessLocalSystem(*(struct _EPROCESS **)(a1 + 32))
    && !(unsigned int)RIMIsTestSigningOn(v3, v2) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
    return 0;
  }
  return v1;
}
