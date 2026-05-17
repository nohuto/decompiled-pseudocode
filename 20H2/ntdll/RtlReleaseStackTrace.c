/*
 * XREFs of RtlReleaseStackTrace @ 0x1801012C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStdReleaseStackTrace @ 0x1801015C0 (RtlStdReleaseStackTrace.c)
 */

__int64 __fastcall RtlReleaseStackTrace(__int64 a1)
{
  __int64 result; // rax

  if ( RtlpStackTraceDatabase )
    return RtlStdReleaseStackTrace(RtlpStackTraceDatabase, a1);
  return result;
}
