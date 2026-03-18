/*
 * XREFs of RawInputManagerObjectOpen @ 0x1C002C69C
 * Callers:
 *     RIMObjectManagerCallout @ 0x1C002A3B8 (RIMObjectManagerCallout.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RawInputManagerObjectOpen(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // ebx
  __int64 ObjectType; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int ProcessSessionId; // eax

  v1 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  ObjectType = ObGetObjectType(v1);
  if ( ObjectType != ExRawInputManagerObjectType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, ObjectType, v6, v7);
  if ( !*(_QWORD *)(v1 + 32) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, ObjectType, v6, v7);
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
