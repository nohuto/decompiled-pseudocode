/*
 * XREFs of HalpIumSetTime @ 0x1404D4E00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpIumSetTime(__int128 *a1)
{
  __int128 v2; // [rsp+30h] [rbp-38h] BYREF

  if ( !qword_140C4A330 )
    return 0x8000000000000003uLL;
  v2 = *a1;
  return qword_140C4A330(1LL, 0LL, 0LL, &v2);
}
