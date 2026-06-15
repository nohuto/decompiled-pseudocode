/*
 * XREFs of sub_180132204 @ 0x180132204
 * Callers:
 *     sub_180131F94 @ 0x180131F94 (sub_180131F94.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180132378 @ 0x180132378 (sub_180132378.c)
 */

__int64 __fastcall sub_180132204(__int64 a1)
{
  HANDLE CurrentProcess; // rax
  int InformationProcess; // eax
  signed int LastError; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  unsigned int v8; // ebx
  HANDLE v9; // rax
  unsigned __int64 v10; // rdx
  HANDLE v11; // rax
  ULONG_PTR MaximumWorkingSetSize; // [rsp+60h] [rbp-98h] BYREF
  ULONG_PTR MinimumWorkingSetSize; // [rsp+68h] [rbp-90h] BYREF
  DWORD Flags[4]; // [rsp+70h] [rbp-88h] BYREF
  _BYTE ProcessInformation[32]; // [rsp+80h] [rbp-78h] BYREF
  __int64 v17; // [rsp+A0h] [rbp-58h]

  CurrentProcess = GetCurrentProcess();
  InformationProcess = NtQueryInformationProcess(CurrentProcess, ProcessVmCounters, ProcessInformation, 0x60u, 0LL);
  if ( InformationProcess >= 0 )
  {
    v9 = GetCurrentProcess();
    if ( GetProcessWorkingSetSizeEx(v9, &MinimumWorkingSetSize, &MaximumWorkingSetSize, Flags) )
    {
      v10 = (a1 + 0x4000) & 0xFFFFFFFFFFFFE000uLL;
      MaximumWorkingSetSize += v10 + v17 - MinimumWorkingSetSize;
      MinimumWorkingSetSize = v17 + v10;
      v11 = GetCurrentProcess();
      if ( SetProcessWorkingSetSizeEx(v11, MinimumWorkingSetSize, MaximumWorkingSetSize, 0) )
      {
        v8 = 0;
        goto LABEL_9;
      }
    }
    LastError = GetLastError();
  }
  else
  {
    LastError = RtlNtStatusToDosError(InformationProcess);
  }
  v8 = LastError;
  if ( LastError > 0 )
    v8 = (unsigned __int16)LastError | 0x80070000;
LABEL_9:
  if ( (byte_18019F981 & 4) != 0 )
    sub_180132378(v6, v5, v7, 14, 0, 0, 0, 0);
  return v8;
}
