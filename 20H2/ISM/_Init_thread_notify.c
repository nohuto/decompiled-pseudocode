/*
 * XREFs of _Init_thread_notify @ 0x18003CA20
 * Callers:
 *     _Init_thread_abort @ 0x18003C910 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x18003C948 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_180208138 ^ _security_cookie, _security_cookie & 0x3F))(&unk_180208120);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
