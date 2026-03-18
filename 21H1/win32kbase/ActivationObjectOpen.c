/*
 * XREFs of ActivationObjectOpen @ 0x1C0132FB8
 * Callers:
 *     ActivationObjectCallout @ 0x1C005C714 (ActivationObjectCallout.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ActivationObjectOpen(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // ebx
  __int64 v4; // rcx
  int ProcessSessionId; // eax

  v1 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  if ( ObGetObjectType(v1) != ExActivationObjectType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
  if ( !*(_QWORD *)(v1 + 48) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
  if ( *(_WORD *)(a1 + 24) )
  {
    if ( !(unsigned __int8)PsIsSystemProcess(*(_QWORD *)(a1 + 8)) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx(*(_QWORD *)(a1 + 8));
      if ( ProcessSessionId == -1 || ProcessSessionId != *(_DWORD *)v1 )
        return (unsigned int)-1073741790;
    }
  }
  return v3;
}
