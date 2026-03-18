/*
 * XREFs of rimObsIsRegisteredObserverAllowed @ 0x1C017BE08
 * Callers:
 *     rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C017D8BC (rimObsRouteInputAndCheckForExclusiveObservers.c)
 * Callees:
 *     ?rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C017BB98 (-rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     RIMIsTestSigningOn @ 0x1C017F844 (RIMIsTestSigningOn.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsIsRegisteredObserverAllowed(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  v1 = 1;
  if ( !(unsigned int)rimIsProcessLocalSystem(*(struct _EPROCESS **)(a1 + 32))
    && !(unsigned int)RIMIsTestSigningOn(v3, v2) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6, v7);
    return 0;
  }
  return v1;
}
