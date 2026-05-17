/*
 * XREFs of EtwpGetMaxLogger @ 0x180081DD8
 * Callers:
 *     EtwGetTraceLoggerHandle @ 0x180081D20 (EtwGetTraceLoggerHandle.c)
 *     EtwGetTraceEnableLevel @ 0x180081D60 (EtwGetTraceEnableLevel.c)
 *     EtwGetTraceEnableFlags @ 0x180081DA0 (EtwGetTraceEnableFlags.c)
 * Callees:
 *     NtTraceControl @ 0x1800A0ED0 (NtTraceControl.c)
 */

__int64 EtwpGetMaxLogger()
{
  __int64 result; // rax
  int v1; // [rsp+40h] [rbp+8h] BYREF

  result = (unsigned int)EtwpMaxLoggers;
  if ( !EtwpMaxLoggers )
  {
    if ( (unsigned int)NtTraceControl(42LL, 0LL, 0LL, &EtwpMaxLoggers, 4, &v1) || v1 != 4 )
    {
      result = 64LL;
      EtwpMaxLoggers = 64;
    }
    else
    {
      return (unsigned int)EtwpMaxLoggers;
    }
  }
  return result;
}
