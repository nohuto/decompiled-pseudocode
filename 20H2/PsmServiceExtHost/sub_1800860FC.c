/*
 * XREFs of sub_1800860FC @ 0x1800860FC
 * Callers:
 *     sub_180085F94 @ 0x180085F94 (sub_180085F94.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800860FC(DWORD dwProcessId, _QWORD *a2, __int64 *a3)
{
  HANDLE v5; // rbx
  ULONG v6; // edi
  __int64 v7; // rax
  int v8; // eax
  _BYTE SystemInformation[40]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v11; // [rsp+48h] [rbp-40h]

  v5 = OpenProcess(0x1000u, 0, dwProcessId);
  if ( !v5 )
    return GetLastError();
  v7 = qword_1800B5068;
  if ( !qword_1800B5068 )
  {
    v8 = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
    if ( v8 < 0 )
    {
      v6 = RtlNtStatusToDosError(v8);
      goto LABEL_8;
    }
    v7 = v11;
    qword_1800B5068 = v11;
  }
  *a3 = v7;
  *a2 = v5;
  v5 = 0LL;
  v6 = 0;
LABEL_8:
  if ( v5 )
    CloseHandle(v5);
  return v6;
}
