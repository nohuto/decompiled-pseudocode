/*
 * XREFs of VslApplySecureImageFixups @ 0x1404F6628
 * Callers:
 *     MiWalkEntireImage @ 0x140284670 (MiWalkEntireImage.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14032A7E0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

NTSTATUS __fastcall VslApplySecureImageFixups(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rdi
  _QWORD v7[14]; // [rsp+20h] [rbp-88h] BYREF

  v3 = a2;
  memset(v7, 0, 0x68uLL);
  v7[1] = a1;
  v7[2] = v3;
  v7[3] = a3;
  return VslpEnterIumSecureMode(2u, 43, 0, (__int64)v7);
}
