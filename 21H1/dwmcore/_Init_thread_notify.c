/*
 * XREFs of _Init_thread_notify @ 0x1800E1DE8
 * Callers:
 *     _Init_thread_footer @ 0x1800E1D10 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_180348E98 ^ _security_cookie, _security_cookie & 0x3F))(&unk_180348E80);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
