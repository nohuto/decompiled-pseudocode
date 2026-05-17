/*
 * XREFs of WerpCreateCompletionEvent @ 0x1800DDC70
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DCDC0 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DD290 (RtlReportExceptionHelper.c)
 * Callees:
 *     ZwCreateEvent @ 0x18009D9B0 (ZwCreateEvent.c)
 */

__int64 __fastcall WerpCreateCompletionEvent(_QWORD *a1)
{
  if ( !a1 )
    return 3221225711LL;
  *a1 = 0LL;
  return ZwCreateEvent();
}
