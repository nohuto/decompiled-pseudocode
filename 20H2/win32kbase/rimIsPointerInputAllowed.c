/*
 * XREFs of rimIsPointerInputAllowed @ 0x1C01537E4
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017435C (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimIsPointerInputAllowed(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( !*(_QWORD *)(a1 + 480) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( !gbTestModeOn
    || (*(_DWORD *)(a1 + 184) & 0x2000) != 0
    || (*(_DWORD *)(*(_QWORD *)(a1 + 480) + 312LL) & 0x4000) != 0 )
  {
    return 1;
  }
  return v4;
}
