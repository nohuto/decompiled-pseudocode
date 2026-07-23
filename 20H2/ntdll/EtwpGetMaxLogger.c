/*
 * XREFs of EtwpGetMaxLogger @ 0x1800814B8
 * Callers:
 *     EtwGetTraceLoggerHandle @ 0x180081400 (EtwGetTraceLoggerHandle.c)
 *     EtwGetTraceEnableLevel @ 0x180081440 (EtwGetTraceEnableLevel.c)
 *     EtwGetTraceEnableFlags @ 0x180081480 (EtwGetTraceEnableFlags.c)
 * Callees:
 *     NtTraceControl @ 0x1800A0900 (NtTraceControl.c)
 */

__int64 EtwpGetMaxLogger()
{
  __int64 result; // rax
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF

  result = (unsigned int)EtwpMaxLoggers;
  if ( !EtwpMaxLoggers )
  {
    if ( NtTraceControl(EtwMaxLoggers, 0LL, 0, &EtwpMaxLoggers, 4u, &ReturnLength) || ReturnLength != 4 )
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
