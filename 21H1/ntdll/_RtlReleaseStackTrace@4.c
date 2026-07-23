/*
 * XREFs of _RtlReleaseStackTrace@4 @ 0x4B368E50
 * Callers:
 *     <none>
 * Callees:
 *     _RtlStdReleaseStackTrace@8 @ 0x4B369090 (_RtlStdReleaseStackTrace@8.c)
 */

PRTL_SRWLOCK __stdcall RtlReleaseStackTrace(int a1)
{
  PRTL_SRWLOCK result; // eax

  result = RtlpStackTraceDatabase;
  if ( RtlpStackTraceDatabase )
    return (PRTL_SRWLOCK)RtlStdReleaseStackTrace(RtlpStackTraceDatabase, a1);
  return result;
}
