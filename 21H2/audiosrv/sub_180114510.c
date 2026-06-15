/*
 * XREFs of sub_180114510 @ 0x180114510
 * Callers:
 *     sub_180114590 @ 0x180114590 (sub_180114590.c)
 * Callees:
 *     sub_18000E660 @ 0x18000E660 (sub_18000E660.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180114510(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  char v6[32]; // [rsp+38h] [rbp-30h] BYREF

  v5 = a3;
  result = sub_18000E660(v6, 13LL, (const char *)L"Level:%x", a2);
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(__int64, char *, __int64, __int64 *, int))(*(_QWORD *)a1 + 128LL))(
             a1,
             v6,
             11LL,
             &v5,
             8);
  return result;
}
