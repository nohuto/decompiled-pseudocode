/*
 * XREFs of SleepStall @ 0x1C00214E0
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C0009B90 (ValidateArgTypes.c)
 *     LogError @ 0x1C002A08C (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B5B0 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C2E0 (PrintDebugMessage.c)
 *     SleepQueueRequest @ 0x1C0067410 (SleepQueueRequest.c)
 */

__int64 __fastcall SleepStall(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdx
  int v7; // ecx

  v4 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "I");
  if ( !v4 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL);
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 56) + 8LL) != 8795 )
    {
      if ( v5 <= 0xFF )
      {
        KeStallExecutionProcessor(v5);
        return v4;
      }
      v4 = -1072431089;
      LogError(3222536207LL);
      AcpiDiagTraceAmlError(a1, 3222536207LL);
      v7 = 178;
LABEL_12:
      PrintDebugMessage(v7, *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL), 0, 0, 0LL);
      return v4;
    }
    if ( v5 > 0xFFFF )
    {
      v4 = -1072431089;
      LogError(3222536207LL);
      AcpiDiagTraceAmlError(a1, 3222536207LL);
      v7 = 177;
      goto LABEL_12;
    }
    if ( v5 )
    {
      v4 = SleepQueueRequest(a1);
      if ( !v4 )
        return 32772;
    }
  }
  return v4;
}
