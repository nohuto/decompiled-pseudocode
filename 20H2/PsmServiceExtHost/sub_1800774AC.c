/*
 * XREFs of sub_1800774AC @ 0x1800774AC
 * Callers:
 *     sub_18007DC40 @ 0x18007DC40 (sub_18007DC40.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800774AC(__int64 a1, _DWORD *a2)
{
  int IsAppAllowedToRun; // eax
  unsigned int v4; // ecx
  int v6; // [rsp+20h] [rbp-128h] BYREF
  _DWORD v7[3]; // [rsp+24h] [rbp-124h] BYREF
  _BYTE v8[256]; // [rsp+30h] [rbp-118h] BYREF

  v6 = 256;
  PsmGetPackageFullNameFromKey(a1 + 24, v8, &v6);
  IsAppAllowedToRun = CdplIsAppAllowedToRun(v8, v7);
  v4 = 0;
  if ( IsAppAllowedToRun < 0 )
    return IsAppAllowedToRun | 0xC0000000;
  else
    *a2 = v7[0] != 0;
  return v4;
}
