/*
 * XREFs of sub_180085EB4 @ 0x180085EB4
 * Callers:
 *     sub_180033028 @ 0x180033028 (sub_180033028.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180085EB4(DWORD dwProcessId, _QWORD *a2)
{
  HANDLE v3; // rax
  ULONG v4; // ebx
  void *v5; // rdi
  int InformationProcess; // eax
  _BYTE ProcessInformation[72]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v9; // [rsp+78h] [rbp-40h]
  __int64 v10; // [rsp+98h] [rbp-20h]

  v3 = OpenProcess(0x1000u, 0, dwProcessId);
  v4 = 0;
  v5 = v3;
  if ( v3 )
  {
    InformationProcess = NtQueryInformationProcess(v3, ProcessVmCounters, ProcessInformation, 0x70u, 0LL);
    if ( InformationProcess >= 0 )
      *a2 = v10 + v9;
    else
      v4 = RtlNtStatusToDosError(InformationProcess);
    CloseHandle(v5);
  }
  else
  {
    return GetLastError();
  }
  return v4;
}
