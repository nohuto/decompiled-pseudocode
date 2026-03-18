/*
 * XREFs of VslMakeProtectedPageWritable @ 0x1404F7454
 * Callers:
 *     KeSetPagePrivilege @ 0x14050D3B8 (KeSetPagePrivilege.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14032A7E0 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14032BC48 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

NTSTATUS __fastcall VslMakeProtectedPageWritable(__int64 a1, __int128 *a2)
{
  __int128 v5; // xmm0
  _OWORD v6[7]; // [rsp+20h] [rbp-88h] BYREF

  memset(v6, 0, 0x68uLL);
  if ( !HvlQueryVsmConnection(0LL) )
    return 0;
  v5 = *a2;
  *((_QWORD *)&v6[0] + 1) = a1;
  v6[1] = v5;
  return VslpEnterIumSecureMode(2u, 247, 0, (__int64)v6);
}
