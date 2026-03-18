/*
 * XREFs of VslVerifyPage @ 0x1404F8120
 * Callers:
 *     CcBcbProfiler @ 0x1403D7550 (CcBcbProfiler.c)
 *     sub_1405C6010 @ 0x1405C6010 (sub_1405C6010.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14032A7E0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

NTSTATUS __fastcall VslVerifyPage(__int64 a1, int a2)
{
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v5, 0, 0x68uLL);
  v5[1] = a1;
  LODWORD(v5[2]) = (a2 & 1) != 0;
  if ( a2 >= 0 )
    return VslpEnterIumSecureMode(2u, 258, 0, (__int64)v5);
  LODWORD(v5[2]) = ((a2 & 1) != 0) | 2;
  if ( a1 )
    return VslpEnterIumSecureMode(2u, 258, 0, (__int64)v5);
  else
    return 0;
}
