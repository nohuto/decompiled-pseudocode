/*
 * XREFs of RtlReleaseStackTrace @ 0x180101120
 * Callers:
 *     <none>
 * Callees:
 *     RtlStdReleaseStackTrace @ 0x180101420 (RtlStdReleaseStackTrace.c)
 */

__int64 __fastcall RtlReleaseStackTrace(__int64 a1)
{
  __int64 result; // rax

  if ( RtlpStackTraceDatabase )
    return RtlStdReleaseStackTrace(RtlpStackTraceDatabase, a1);
  return result;
}
