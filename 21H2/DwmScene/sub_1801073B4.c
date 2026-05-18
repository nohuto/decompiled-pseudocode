/*
 * XREFs of sub_1801073B4 @ 0x1801073B4
 * Callers:
 *     sub_180107740 @ 0x180107740 (sub_180107740.c)
 * Callees:
 *     sub_180081F90 @ 0x180081F90 (sub_180081F90.c)
 *     sub_180106CD8 @ 0x180106CD8 (sub_180106CD8.c)
 *     sub_180106F00 @ 0x180106F00 (sub_180106F00.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 *     _alloca_probe @ 0x180123F50 (_alloca_probe.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int8 __fastcall sub_1801073B4(char *a1, char *a2, char a3)
{
  __int64 v6; // rbp
  unsigned __int8 result; // al
  void *v8; // [rsp+30h] [rbp-1028h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-1020h]

  v6 = (a2 - a1) >> 4;
  if ( v6 > 32 )
  {
    sub_180081F90(&v8, ((a2 - a1) >> 4) - ((a2 - a1) >> 5));
    result = sub_180106F00(a1, a2, v6, v8, v9, a3);
    if ( v9 > 0x100 )
      return j__o_free(v8);
  }
  else if ( v6 > 1 )
  {
    return (unsigned __int8)sub_180106CD8(a1, a2);
  }
  return result;
}
