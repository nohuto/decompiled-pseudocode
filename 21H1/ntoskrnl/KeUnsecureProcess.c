/*
 * XREFs of KeUnsecureProcess @ 0x14050E048
 * Callers:
 *     PspProcessDelete @ 0x14065FD30 (PspProcessDelete.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14032A7E0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

NTSTATUS __fastcall KeUnsecureProcess(__int64 a1)
{
  __int64 v1; // rbx
  NTSTATUS result; // eax
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  v1 = *(_QWORD *)(a1 + 992);
  *(_QWORD *)(a1 + 992) = 0LL;
  if ( v1 )
  {
    memset(v3, 0, 0x68uLL);
    v3[1] = v1;
    return VslpEnterIumSecureMode(2u, 30, 0, (__int64)v3);
  }
  return result;
}
