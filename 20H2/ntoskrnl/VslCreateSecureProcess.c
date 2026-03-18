/*
 * XREFs of VslCreateSecureProcess @ 0x140891B10
 * Callers:
 *     KeInitializeProcess @ 0x1406A71A0 (KeInitializeProcess.c)
 *     VslCreateEnclave @ 0x1408919B0 (VslCreateEnclave.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402E51E8 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
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
