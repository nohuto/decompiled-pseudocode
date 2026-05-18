/*
 * XREFs of sub_180103354 @ 0x180103354
 * Callers:
 *     sub_180103418 @ 0x180103418 (sub_180103418.c)
 * Callees:
 *     sub_1800DB9B0 @ 0x1800DB9B0 (sub_1800DB9B0.c)
 *     sub_1800DBA24 @ 0x1800DBA24 (sub_1800DBA24.c)
 *     sub_1800DBB38 @ 0x1800DBB38 (sub_1800DBB38.c)
 *     sub_1800DBC74 @ 0x1800DBC74 (sub_1800DBC74.c)
 *     sub_1800DBEC8 @ 0x1800DBEC8 (sub_1800DBEC8.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_180103354(__int64 a1, __int64 a2, _QWORD *a3)
{
  char result; // al
  __int64 v6[22]; // [rsp+20h] [rbp-D8h] BYREF
  int v7; // [rsp+D0h] [rbp-28h] BYREF
  __int64 v8; // [rsp+D8h] [rbp-20h]

  result = sub_1800DBC74();
  if ( result )
  {
    result = sub_1800DBEC8(a2, (__int64)&v7);
    if ( v7 == 2 )
    {
      *a3 = v8;
      sub_1800DB9B0((__int64)v6);
      sub_1800DBB38(a2, v6);
    }
    else
    {
      if ( v7 != 5 )
        return result;
      sub_1800DB9B0((__int64)v6);
      sub_1800DBB38(a2, v6);
    }
    return sub_1800DBA24(v6);
  }
  return result;
}
