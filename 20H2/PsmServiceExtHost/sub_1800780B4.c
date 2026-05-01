/*
 * XREFs of sub_1800780B4 @ 0x1800780B4
 * Callers:
 *     sub_180075784 @ 0x180075784 (sub_180075784.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180063424 @ 0x180063424 (sub_180063424.c)
 */

__int64 __fastcall sub_1800780B4(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v7; // [rsp+30h] [rbp-40h] BYREF
  __int64 v8; // [rsp+38h] [rbp-38h] BYREF
  _DWORD SystemInformation[2]; // [rsp+40h] [rbp-30h] BYREF
  _DWORD *v10; // [rsp+48h] [rbp-28h]
  int v11; // [rsp+50h] [rbp-20h]
  _DWORD v12[2]; // [rsp+58h] [rbp-18h] BYREF
  unsigned __int64 v13; // [rsp+60h] [rbp-10h]

  v12[1] = 0;
  v13 = (unsigned __int64)(a1 + 4095) >> 12;
  v12[0] = 1;
  v10 = v12;
  SystemInformation[0] = 1;
  SystemInformation[1] = 21;
  v11 = 16;
  v2 = NtSetSystemInformation(SystemVerifierFaultsInformation|SystemLocksInformation, SystemInformation, 0x18u);
  if ( (unsigned int)dword_1800B31E0 > 5 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
  {
    v8 = a1;
    v7 = v2;
    sub_180063424(v3, byte_18009EAFD, v4, v5, (__int64)&v7, (__int64)&v8);
  }
  return v2;
}
