/*
 * XREFs of RIMFixUpAutoRepeatCompleteFrameTimeStamps @ 0x1C017341C
 * Callers:
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C0175A38 (rimDispatchAutoRepeatCompleteFrame.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

LARGE_INTEGER __fastcall RIMFixUpAutoRepeatCompleteFrameTimeStamps(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  LARGE_INTEGER result; // rax
  __int64 v8; // r8
  unsigned __int64 i; // r9
  __int64 v10; // rdx

  if ( (*(_DWORD *)(a2 + 200) & 0x80u) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( (*(_DWORD *)(a2 + 184) & 0x200) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( *(_QWORD *)(a1 + 344) == -1LL )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  result = KeQueryPerformanceCounter(0LL);
  v8 = 0LL;
  for ( i = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        (unsigned int)v8 < *(_DWORD *)(a3 + 24);
        *(LARGE_INTEGER *)(*(_QWORD *)(a3 + 120) + v10 + 96) = result )
  {
    v10 = 192 * v8;
    v8 = (unsigned int)(v8 + 1);
    *(_DWORD *)(*(_QWORD *)(a3 + 120) + v10 + 80) = i;
  }
  return result;
}
