/*
 * XREFs of RIMHidValidExclusive @ 0x1C004F8B0
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x1C00A13D0 (RIMDirectStartStopDeviceRead.c)
 *     RIMHidTLCActive @ 0x1C00A307C (RIMHidTLCActive.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMHidValidExclusive(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // rcx

  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL);
  v2 = *(_DWORD *)(a1 + 36);
  v3 = *(unsigned int *)(a1 + 40);
  if ( v2 < (unsigned int)v3 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3);
    v2 = *(_DWORD *)(a1 + 36);
    LODWORD(v3) = *(_DWORD *)(a1 + 40);
  }
  return v2 - (unsigned int)v3;
}
