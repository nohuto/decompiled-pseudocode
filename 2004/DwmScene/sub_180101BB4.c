/*
 * XREFs of sub_180101BB4 @ 0x180101BB4
 * Callers:
 *     sub_180101E70 @ 0x180101E70 (sub_180101E70.c)
 * Callees:
 *     sub_18007C6C0 @ 0x18007C6C0 (sub_18007C6C0.c)
 *     sub_1801014A4 @ 0x1801014A4 (sub_1801014A4.c)
 *     sub_180101710 @ 0x180101710 (sub_180101710.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 *     _alloca_probe @ 0x18011E680 (_alloca_probe.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

unsigned __int8 __fastcall sub_180101BB4(char *a1, char *a2, char a3)
{
  __int64 v6; // rbp
  unsigned __int8 result; // al
  void *v8; // [rsp+30h] [rbp-1028h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-1020h]

  v6 = (a2 - a1) >> 4;
  if ( v6 > 32 )
  {
    sub_18007C6C0(&v8, ((a2 - a1) >> 4) - ((a2 - a1) >> 5));
    result = sub_180101710(a1, a2, v6, v8, v9, a3);
    if ( v9 > 0x100 )
      return j__o_free(v8);
  }
  else if ( v6 > 1 )
  {
    return (unsigned __int8)sub_1801014A4(a1, a2);
  }
  return result;
}
