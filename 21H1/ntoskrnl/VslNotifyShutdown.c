/*
 * XREFs of VslNotifyShutdown @ 0x1404F74E4
 * Callers:
 *     PopSaveHiberContext @ 0x14098F9E0 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x1409AE954 (PopShutdownSystem.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14032A7E0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

NTSTATUS __fastcall VslNotifyShutdown(unsigned __int8 a1)
{
  __int64 v1; // rbx
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  v1 = a1;
  memset(v3, 0, 0x68uLL);
  v3[1] = v1;
  return VslpEnterIumSecureMode(2u, 262, 0, (__int64)v3);
}
