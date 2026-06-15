/*
 * XREFs of _Init_thread_wait @ 0x14001E9A0
 * Callers:
 *     _Init_thread_header @ 0x14001E8D8 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( hEvent )
  {
    LeaveCriticalSection(&stru_14008FD78);
    WaitForSingleObjectEx(hEvent, dwMilliseconds, 0);
    EnterCriticalSection(&stru_14008FD78);
  }
  else
  {
    ((void (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                            qword_14008FDB0 ^ _security_cookie,
                                                                            _security_cookie & 0x3F))(
      &unk_14008FDA0,
      &stru_14008FD78,
      dwMilliseconds);
  }
}
