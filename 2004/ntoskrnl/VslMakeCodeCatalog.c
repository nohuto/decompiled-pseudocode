/*
 * XREFs of VslMakeCodeCatalog @ 0x1404F9420
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402E56B0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

NTSTATUS __fastcall VslMakeCodeCatalog(_QWORD *a1, __int64 a2)
{
  NTSTATUS result; // eax
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v5, 0, 0x68uLL);
  v5[1] = *a1;
  v5[2] = a2;
  result = VslpEnterIumSecureMode(2u, 24, 0, (__int64)v5);
  if ( result >= 0 )
    *a1 = v5[2];
  return result;
}
