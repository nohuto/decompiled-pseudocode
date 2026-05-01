/*
 * XREFs of sub_18006AFB0 @ 0x18006AFB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180062720 @ 0x180062720 (sub_180062720.c)
 */

__int64 __fastcall sub_18006AFB0(__int64 a1, void *a2, int a3, __int64 a4)
{
  int v6; // eax
  NTSTATUS v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  int v12; // [rsp+40h] [rbp-40h] BYREF
  NTSTATUS v13; // [rsp+44h] [rbp-3Ch] BYREF
  __int64 v14; // [rsp+48h] [rbp-38h] BYREF
  _OWORD ProcessInformation[2]; // [rsp+50h] [rbp-30h] BYREF

  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  LODWORD(ProcessInformation[0]) = 3;
  if ( (*(_BYTE *)(a4 + 16) & 2) != 0 )
    v6 = 3;
  else
    v6 = 5;
  DWORD1(ProcessInformation[0]) = v6;
  v7 = NtSetInformationProcess(a2, (PROCESSINFOCLASS)65, ProcessInformation, 0x20u);
  if ( v7 >= 0 )
    v7 = 0;
  if ( (unsigned int)dword_1800B31E0 > 5 && sub_180010470((__int64)&dword_1800B31E0, 17LL) )
  {
    v10 = *(_QWORD *)(a1 + 32);
    v12 = a3;
    v14 = v10;
    v13 = v7;
    sub_180062720(v10, byte_18009BEE2, v8, v9, (__int64)&v13, (__int64)&v14, (__int64)&v12);
  }
  return (unsigned int)v7;
}
