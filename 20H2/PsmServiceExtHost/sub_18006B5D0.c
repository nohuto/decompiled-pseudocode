/*
 * XREFs of sub_18006B5D0 @ 0x18006B5D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18006B5D0(__int64 a1, void *a2, __int64 a3, _QWORD *a4)
{
  __int128 ProcessInformation; // [rsp+30h] [rbp-38h] BYREF
  __int128 v7; // [rsp+40h] [rbp-28h]

  ProcessInformation = 0LL;
  LODWORD(ProcessInformation) = 3;
  v7 = 0LL;
  NtQueryInformationProcess(a2, (PROCESSINFOCLASS)65, &ProcessInformation, 0x20u, 0LL);
  *a4 += v7;
  return 0LL;
}
