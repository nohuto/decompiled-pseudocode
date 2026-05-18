/*
 * XREFs of _Init_thread_notify @ 0x1801246E0
 * Callers:
 *     _Init_thread_abort @ 0x1801245E8 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x180124618 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_180222068 ^ _security_cookie, _security_cookie & 0x3F))(&unk_180222050);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
