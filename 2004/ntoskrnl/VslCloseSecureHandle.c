/*
 * XREFs of VslCloseSecureHandle @ 0x1404F8E90
 * Callers:
 *     VslCreateEnclave @ 0x14088BE60 (VslCreateEnclave.c)
 *     PsDereferenceVsmEnclave @ 0x14090AAB4 (PsDereferenceVsmEnclave.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402E56B0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

NTSTATUS __fastcall VslCloseSecureHandle(__int64 a1)
{
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  v3[1] = a1;
  return VslpEnterIumSecureMode(2u, 30, 0, (__int64)v3);
}
