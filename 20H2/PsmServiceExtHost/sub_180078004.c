/*
 * XREFs of sub_180078004 @ 0x180078004
 * Callers:
 *     sub_18006F640 @ 0x18006F640 (sub_18006F640.c)
 *     sub_18006FDC0 @ 0x18006FDC0 (sub_18006FDC0.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180076AA8 @ 0x180076AA8 (sub_180076AA8.c)
 */

__int64 __fastcall sub_180078004(HANDLE Process, char a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v7[6]; // [rsp+40h] [rbp-18h] BYREF
  char ProcessInformation; // [rsp+68h] [rbp+10h] BYREF
  char v9; // [rsp+70h] [rbp+18h] BYREF
  DWORD ProcessId; // [rsp+78h] [rbp+20h] BYREF

  ProcessInformation = a2;
  v3 = NtSetInformationProcess(Process, (PROCESSINFOCLASS)80, &ProcessInformation, 1u);
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
  {
    ProcessId = GetProcessId(Process);
    v9 = ProcessInformation;
    v7[0] = v3;
    sub_180076AA8((__int64)&dword_1800B31E0, byte_18009ED6D, v4, v5, (__int64)v7, (__int64)&ProcessId, (__int64)&v9);
  }
  return v3;
}
