/*
 * XREFs of rimObsCalculateObserverMessageSize @ 0x1C017C77C
 * Callers:
 *     rimObsCopyMessage @ 0x1C017CA20 (rimObsCopyMessage.c)
 *     rimObsPopInputMessage @ 0x1C017D36C (rimObsPopInputMessage.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsCalculateObserverMessageSize(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  unsigned int v5; // ebx

  v4 = *a1;
  v5 = 48;
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v4, a3, a4);
  }
  else
  {
    return a1[6] + 48;
  }
  return v5;
}
