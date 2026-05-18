/*
 * XREFs of sub_1800D1310 @ 0x1800D1310
 * Callers:
 *     sub_180065C80 @ 0x180065C80 (sub_180065C80.c)
 * Callees:
 *     sub_18006AB04 @ 0x18006AB04 (sub_18006AB04.c)
 *     sub_1800759EC @ 0x1800759EC (sub_1800759EC.c)
 *     sub_1800A1C7C @ 0x1800A1C7C (sub_1800A1C7C.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     log10f @ 0x18011F78A (log10f.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall sub_1800D1310(__int64 a1, __int64 a2, char a3)
{
  _UNKNOWN **result; // rax
  _UNKNOWN *retaddr; // [rsp+280h] [rbp+178h] BYREF

  result = &retaddr;
  if ( (a3 & 1) != 0 || (a3 & 0x7E) != 0 )
  {
    sub_18006AB04(a2);
    sub_1800759EC();
  }
  return result;
}
