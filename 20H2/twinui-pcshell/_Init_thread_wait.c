/*
 * XREFs of _Init_thread_wait @ 0x18008E218
 * Callers:
 *     _Init_thread_header @ 0x18008E150 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( hHandle )
  {
    LeaveCriticalSection(&stru_1805CB2F8);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&stru_1805CB2F8);
  }
  else
  {
    ((void (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                            qword_1805CB330 ^ _security_cookie,
                                                                            _security_cookie & 0x3F))(
      &unk_1805CB320,
      &stru_1805CB2F8,
      dwMilliseconds);
  }
}
