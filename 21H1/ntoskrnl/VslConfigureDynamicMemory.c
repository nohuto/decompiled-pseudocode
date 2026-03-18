/*
 * XREFs of VslConfigureDynamicMemory @ 0x1404F66B4
 * Callers:
 *     KeConfigureDynamicMemory @ 0x14050D288 (KeConfigureDynamicMemory.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14032A7E0 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14032BC48 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

NTSTATUS __fastcall VslConfigureDynamicMemory(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  _QWORD v7[14]; // [rsp+20h] [rbp-88h] BYREF

  v4 = a3;
  memset(v7, 0, 0x68uLL);
  if ( !HvlQueryVsmConnection(0LL) )
    return 0;
  v7[1] = a1;
  v7[2] = a2;
  v7[3] = v4;
  return VslpEnterIumSecureMode(2u, 37, 0, (__int64)v7);
}
