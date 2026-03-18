/*
 * XREFs of RIMHidValidExclusive @ 0x1C00BD9F0
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x1C00271E0 (RIMDirectStartStopDeviceRead.c)
 *     RIMHidTLCActive @ 0x1C0028A94 (RIMHidTLCActive.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMHidValidExclusive(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // eax
  __int64 v6; // rcx

  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2, a3, a4);
  v5 = *(_DWORD *)(a1 + 36);
  v6 = *(unsigned int *)(a1 + 40);
  if ( v5 < (unsigned int)v6 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, a2, a3, a4);
    v5 = *(_DWORD *)(a1 + 36);
    LODWORD(v6) = *(_DWORD *)(a1 + 40);
  }
  return v5 - (unsigned int)v6;
}
