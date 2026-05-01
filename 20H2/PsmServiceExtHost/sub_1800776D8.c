/*
 * XREFs of sub_1800776D8 @ 0x1800776D8
 * Callers:
 *     sub_18007DC40 @ 0x18007DC40 (sub_18007DC40.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800776D8(__int64 a1)
{
  unsigned int LastError; // ebx
  HANDLE hToken; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned int)QueryUserToken(
                       *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 776) + 88LL) + 88LL)
                                                   + 160LL)
                                       + 88LL),
                       &hToken)
    && ImpersonateLoggedOnUser(hToken) )
  {
    LastError = 0;
  }
  else if ( (int)GetLastError() > 0 )
  {
    LastError = (unsigned __int16)GetLastError() | 0xC0070000;
  }
  else
  {
    LastError = GetLastError();
  }
  if ( hToken )
    NtClose(hToken);
  return LastError;
}
