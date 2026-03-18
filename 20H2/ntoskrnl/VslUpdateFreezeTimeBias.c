/*
 * XREFs of VslUpdateFreezeTimeBias @ 0x140892FC0
 * Callers:
 *     PsThawProcess @ 0x14071C6B0 (PsThawProcess.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402E51E8 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 */

NTSTATUS __fastcall VslUpdateFreezeTimeBias(__int64 a1, __int64 a2)
{
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v5, 0, 0x68uLL);
  v5[1] = *(_QWORD *)(a1 + 992);
  v5[2] = a2;
  return VslpEnterIumSecureMode(2u, 62, 0, (__int64)v5);
}
