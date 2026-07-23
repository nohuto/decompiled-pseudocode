/*
 * XREFs of HalpIumResetSystem @ 0x1404D69A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpIumResetSystem(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v5[4]; // [rsp+30h] [rbp-38h] BYREF

  if ( !qword_140C4A290 || a3 || a4 )
    return 0x8000000000000003uLL;
  v5[1] = a2;
  v5[0] = a1;
  return qword_140C4A290(2LL, 0LL, 0LL, v5);
}
