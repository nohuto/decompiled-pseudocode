/*
 * XREFs of sub_180114D3C @ 0x180114D3C
 * Callers:
 *     unknown_libname_8 @ 0x180114DB0 (unknown_libname_8.c)
 * Callees:
 *     _o___std_exception_copy @ 0x18011DFC3 (_o___std_exception_copy.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180114D3C(__int64 a1, __int64 a2)
{
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  char v5; // [rsp+28h] [rbp-20h]

  *(_QWORD *)a1 = &std::exception::`vftable';
  v4 = a2;
  v5 = 1;
  *(_OWORD *)(a1 + 8) = 0LL;
  o___std_exception_copy(&v4);
  *(_QWORD *)a1 = &std::logic_error::`vftable';
  return a1;
}
