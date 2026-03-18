/*
 * XREFs of VslSetPlaceholderPages @ 0x140391898
 * Callers:
 *     MiUpdateSlabPagePlaceholderState @ 0x140372248 (MiUpdateSlabPagePlaceholderState.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14032A7E0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

NTSTATUS __fastcall VslSetPlaceholderPages(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  _QWORD v9[14]; // [rsp+20h] [rbp-88h] BYREF

  v5 = a3;
  v6 = a4;
  memset(v9, 0, 0x68uLL);
  v9[1] = a1;
  v9[2] = a2;
  v9[3] = v5;
  v9[4] = v6;
  return VslpEnterIumSecureMode(2u, 255, 0, (__int64)v9);
}
