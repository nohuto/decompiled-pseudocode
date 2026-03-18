/*
 * XREFs of VslpSetupLiveDumpBuffer @ 0x1404F8BBC
 * Callers:
 *     VslSetupLiveDumpBufferInSk @ 0x1404F83A8 (VslSetupLiveDumpBufferInSk.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402E56B0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

NTSTATUS __fastcall VslpSetupLiveDumpBuffer(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  NTSTATUS result; // eax
  _QWORD v10[14]; // [rsp+20h] [rbp-A8h] BYREF

  memset(v10, 0, 0x68uLL);
  result = VslpEnterIumSecureMode(2u, 56, 0, (__int64)v10);
  if ( result >= 0 )
  {
    *a1 = v10[2];
    *a2 = v10[3];
    *a3 = v10[4];
    *a4 = v10[5];
    *a5 = v10[6];
  }
  return result;
}
