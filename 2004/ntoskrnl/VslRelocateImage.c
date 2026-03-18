/*
 * XREFs of VslRelocateImage @ 0x1404F96D0
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402E56B0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

NTSTATUS __fastcall VslRelocateImage(__int64 a1, __int64 a2)
{
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v5, 0, 0x68uLL);
  v5[1] = a1;
  v5[2] = a2;
  return VslpEnterIumSecureMode(2u, 29, 0, (__int64)v5);
}
