/*
 * XREFs of VslGetSetSecureContext @ 0x140892524
 * Callers:
 *     PspGetSetContextInternal @ 0x140687060 (PspGetSetContextInternal.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402E51E8 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 */

NTSTATUS __fastcall VslGetSetSecureContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v9[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v9, 0, 0x68uLL);
  v9[1] = a2;
  v9[2] = a3;
  v9[3] = a4;
  return VslpEnterIumSecureMode(2u, (a1 != 0) + 14, 0, (__int64)v9);
}
