/*
 * XREFs of sub_1800FC140 @ 0x1800FC140
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800759EC @ 0x1800759EC (sub_1800759EC.c)
 *     sub_18007E6A4 @ 0x18007E6A4 (sub_18007E6A4.c)
 *     sub_18008026C @ 0x18008026C (sub_18008026C.c)
 *     sub_180080408 @ 0x180080408 (sub_180080408.c)
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     sub_1800EB244 @ 0x1800EB244 (sub_1800EB244.c)
 *     sub_1800FC0A0 @ 0x1800FC0A0 (sub_1800FC0A0.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800FC140(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = 134283264LL;
  if ( (*(_DWORD *)(*(_QWORD *)a4 + 440LL) & 0x8010000) == 0x8010000 )
  {
    sub_1800EB244(a1);
    sub_1800759EC();
  }
  return result;
}
