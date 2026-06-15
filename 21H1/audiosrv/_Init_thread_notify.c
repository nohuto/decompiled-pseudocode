/*
 * XREFs of _Init_thread_notify @ 0x18006AEB8
 * Callers:
 *     _Init_thread_footer @ 0x18006ADE0 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_18019F208 ^ _security_cookie, _security_cookie & 0x3F))(&unk_18019F1F0);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
