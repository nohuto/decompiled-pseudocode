/*
 * XREFs of VslCreateSecureProcess @ 0x14088ACA0
 * Callers:
 *     KeInitializeProcess @ 0x1406F70A0 (KeInitializeProcess.c)
 *     VslCreateEnclave @ 0x14088AB40 (VslCreateEnclave.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14032A7E0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

NTSTATUS __fastcall VslCreateSecureProcess(__int64 a1, __int64 a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  _QWORD v7[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v7, 0, 0x68uLL);
  v7[1] = a1;
  v7[2] = a2;
  result = VslpEnterIumSecureMode(2u, 6, 0, (__int64)v7);
  if ( result >= 0 )
    *a3 = v7[2];
  return result;
}
