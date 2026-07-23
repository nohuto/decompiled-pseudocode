/*
 * XREFs of HsaDismissPageFault @ 0x1404E2C80
 * Callers:
 *     HsaGetPageFault @ 0x1404E3A20 (HsaGetPageFault.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     HsaIommuSendCommand @ 0x1404E3F48 (HsaIommuSendCommand.c)
 */

__int64 __fastcall HsaDismissPageFault(__int64 a1, unsigned __int16 *a2, int a3)
{
  __int64 v3; // r9
  __int64 v4; // r9
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-20h]

  v3 = *(_QWORD *)a2;
  v6 = *a2 | ((*(_QWORD *)a2 & 0xFFFF0000LL | 0x700000000000LL) << 16);
  v4 = v3 & 0x1FF00000000LL;
  v7 = v4;
  if ( a3 < 0 )
    v7 = v4 & 0xFFFF0FFFFFFFFFFFuLL | 0x100000000000LL;
  return HsaIommuSendCommand(a1, &v6, 0LL);
}
