/*
 * XREFs of HvlSvmSetDeviceEnabled @ 0x1404F7190
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x140390450 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     HvlpHvToNtStatus @ 0x1404FAC74 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmSetDeviceEnabled(int a1, unsigned __int8 a2)
{
  __int64 v2; // rax
  __int128 v4; // [rsp+40h] [rbp-38h] BYREF
  __int64 v5; // [rsp+50h] [rbp-28h]

  v4 = 0LL;
  *(_QWORD *)((char *)&v4 + 4) = 0x140000000LL;
  LODWORD(v4) = a1;
  v5 = a2;
  v2 = HvcallFastExtended(196779LL, (__int64)&v4, 0x18u, 0, 0);
  return HvlpHvToNtStatus(v2);
}
