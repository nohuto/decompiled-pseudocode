/*
 * XREFs of _Init_thread_wait @ 0x180044ED0
 * Callers:
 *     _Init_thread_header @ 0x180044E08 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( hObject )
  {
    LeaveCriticalSection(&stru_18005AA88);
    WaitForSingleObjectEx(hObject, dwMilliseconds, 0);
    EnterCriticalSection(&stru_18005AA88);
  }
  else
  {
    ((void (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                            qword_18005AAC0 ^ _security_cookie,
                                                                            _security_cookie & 0x3F))(
      &unk_18005AAB0,
      &stru_18005AA88,
      dwMilliseconds);
  }
}
