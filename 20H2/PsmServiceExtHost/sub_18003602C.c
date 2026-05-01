/*
 * XREFs of sub_18003602C @ 0x18003602C
 * Callers:
 *     sub_18000DF0C @ 0x18000DF0C (sub_18000DF0C.c)
 *     sub_1800739C4 @ 0x1800739C4 (sub_1800739C4.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18003602C(void *a1, __int64 a2)
{
  __int64 result; // rax
  _BYTE ProcessInformation[4]; // [rsp+30h] [rbp-78h] BYREF
  int v5; // [rsp+34h] [rbp-74h]
  __int64 v6; // [rsp+40h] [rbp-68h]
  __int16 v7; // [rsp+68h] [rbp-40h]
  __int16 v8; // [rsp+6Ch] [rbp-3Ch]

  NtQueryInformationProcess(a1, (PROCESSINFOCLASS)64, ProcessInformation, 0x60u, 0LL);
  *(_DWORD *)a2 = v5;
  *(_WORD *)(a2 + 4) = v7;
  *(_WORD *)(a2 + 6) = v8;
  result = v6;
  *(_QWORD *)(a2 + 8) = v6;
  return result;
}
