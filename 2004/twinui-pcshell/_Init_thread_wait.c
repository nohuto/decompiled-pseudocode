/*
 * XREFs of _Init_thread_wait @ 0x18008E6B8
 * Callers:
 *     _Init_thread_header @ 0x18008E5F0 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( hHandle )
  {
    LeaveCriticalSection(&stru_1805CC2B8);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&stru_1805CC2B8);
  }
  else
  {
    ((void (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                            qword_1805CC2F0 ^ _security_cookie,
                                                                            _security_cookie & 0x3F))(
      &unk_1805CC2E0,
      &stru_1805CC2B8,
      dwMilliseconds);
  }
}
