/*
 * XREFs of _RtlLogStackTrace@4 @ 0x4B368E30
 * Callers:
 *     <none>
 * Callees:
 *     _RtlStdLogStackTrace@8 @ 0x4B369040 (_RtlStdLogStackTrace@8.c)
 */

PRTL_SRWLOCK __stdcall RtlLogStackTrace(int a1)
{
  PRTL_SRWLOCK result; // eax

  result = RtlpStackTraceDatabase;
  if ( RtlpStackTraceDatabase )
    return (PRTL_SRWLOCK)RtlStdLogStackTrace(RtlpStackTraceDatabase, a1);
  return result;
}
