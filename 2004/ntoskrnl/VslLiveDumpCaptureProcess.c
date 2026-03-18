/*
 * XREFs of VslLiveDumpCaptureProcess @ 0x14088CC2C
 * Callers:
 *     NtQueryInformationProcess @ 0x140661E20 (NtQueryInformationProcess.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402E56B0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

NTSTATUS __fastcall VslLiveDumpCaptureProcess(__int64 a1)
{
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  v3[1] = *(_QWORD *)(a1 + 992);
  return VslpEnterIumSecureMode(2u, 59, 0, (__int64)v3);
}
