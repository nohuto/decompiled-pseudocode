/*
 * XREFs of PsRundownVsmEnclave @ 0x140909B1C
 * Callers:
 *     MiCanDeleteEnclave @ 0x140543B48 (MiCanDeleteEnclave.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14032A7E0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

NTSTATUS __fastcall PsRundownVsmEnclave(__int64 a1)
{
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  v3[1] = *(_QWORD *)(a1 + 24);
  return VslpEnterIumSecureMode(2u, 50, 0, (__int64)v3);
}
