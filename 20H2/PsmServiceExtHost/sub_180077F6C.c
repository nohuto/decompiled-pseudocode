/*
 * XREFs of sub_180077F6C @ 0x180077F6C
 * Callers:
 *     sub_180075784 @ 0x180075784 (sub_180075784.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_180077F6C(_QWORD *a1)
{
  NTSTATUS result; // eax
  _DWORD v3[2]; // [rsp+20h] [rbp-58h] BYREF
  _OWORD *v4; // [rsp+28h] [rbp-50h]
  int v5; // [rsp+30h] [rbp-48h]
  _OWORD v6[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v7; // [rsp+58h] [rbp-20h]

  v3[0] = 1;
  v3[1] = 22;
  memset(v6, 0, sizeof(v6));
  v7 = 0LL;
  LODWORD(v6[0]) = 3;
  v4 = v6;
  v5 = 40;
  result = NtQuerySystemInformation(SystemVerifierFaultsInformation|SystemLocksInformation, v3, 0x18u, 0LL);
  if ( result >= 0 )
  {
    *a1 = *((_QWORD *)&v6[0] + 1);
    return 0;
  }
  return result;
}
