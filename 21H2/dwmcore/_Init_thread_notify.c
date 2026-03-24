/*
 * XREFs of _Init_thread_notify @ 0x1800E79E8
 * Callers:
 *     _Init_thread_footer @ 0x1800E7910 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_180346E98 ^ _security_cookie, _security_cookie & 0x3F))(&unk_180346E80);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
