/*
 * XREFs of _Init_thread_wait @ 0x18006AF10
 * Callers:
 *     _Init_thread_header @ 0x18006AE48 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( hHandle )
  {
    LeaveCriticalSection(&stru_18019F1C8);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&stru_18019F1C8);
  }
  else
  {
    ((void (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                            qword_18019F200 ^ _security_cookie,
                                                                            _security_cookie & 0x3F))(
      &unk_18019F1F0,
      &stru_18019F1C8,
      dwMilliseconds);
  }
}
