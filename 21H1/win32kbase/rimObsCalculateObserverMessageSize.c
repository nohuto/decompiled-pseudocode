/*
 * XREFs of rimObsCalculateObserverMessageSize @ 0x1C01848AC
 * Callers:
 *     rimObsCopyMessage @ 0x1C0184B50 (rimObsCopyMessage.c)
 *     rimObsPopInputMessage @ 0x1C018549C (rimObsPopInputMessage.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsCalculateObserverMessageSize(_DWORD *a1)
{
  unsigned int v1; // ebx

  v1 = 48;
  if ( *a1 )
  {
    if ( *a1 != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  }
  else
  {
    return (unsigned int)(a1[6] + 48);
  }
  return v1;
}
