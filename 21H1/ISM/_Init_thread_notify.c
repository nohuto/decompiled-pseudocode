/*
 * XREFs of _Init_thread_notify @ 0x18003C940
 * Callers:
 *     _Init_thread_abort @ 0x18003C830 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x18003C868 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_180209138 ^ _security_cookie, _security_cookie & 0x3F))(&unk_180209120);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
