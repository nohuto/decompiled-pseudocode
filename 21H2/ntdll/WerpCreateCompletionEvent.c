/*
 * XREFs of WerpCreateCompletionEvent @ 0x1800DDA20
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DCB70 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DD040 (RtlReportExceptionHelper.c)
 * Callees:
 *     ZwCreateEvent @ 0x18009DF40 (ZwCreateEvent.c)
 */

__int64 __fastcall WerpCreateCompletionEvent(_QWORD *a1)
{
  if ( !a1 )
    return 3221225711LL;
  *a1 = 0LL;
  return ZwCreateEvent();
}
