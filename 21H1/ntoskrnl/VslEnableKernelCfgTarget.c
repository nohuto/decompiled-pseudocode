/*
 * XREFs of VslEnableKernelCfgTarget @ 0x14088B2F4
 * Callers:
 *     MiMarkKernelCfgTarget @ 0x14033B430 (MiMarkKernelCfgTarget.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14032A7E0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

NTSTATUS __fastcall VslEnableKernelCfgTarget(__int64 a1)
{
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  v3[1] = a1;
  return VslpEnterIumSecureMode(2u, 218, 0, (__int64)v3);
}
