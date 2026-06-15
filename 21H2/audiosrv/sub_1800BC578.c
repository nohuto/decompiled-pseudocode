/*
 * XREFs of sub_1800BC578 @ 0x1800BC578
 * Callers:
 *     sub_1800693BC @ 0x1800693BC (sub_1800693BC.c)
 *     sub_1800BBCBC @ 0x1800BBCBC (sub_1800BBCBC.c)
 *     sub_1800BC7E0 @ 0x1800BC7E0 (sub_1800BC7E0.c)
 *     sub_1800F2394 @ 0x1800F2394 (sub_1800F2394.c)
 *     sub_1800F23D8 @ 0x1800F23D8 (sub_1800F23D8.c)
 *     sub_1800F43B0 @ 0x1800F43B0 (sub_1800F43B0.c)
 *     sub_1800F48E4 @ 0x1800F48E4 (sub_1800F48E4.c)
 *     sub_1801001B8 @ 0x1801001B8 (sub_1801001B8.c)
 *     sub_1801112AC @ 0x1801112AC (sub_1801112AC.c)
 *     sub_180113A88 @ 0x180113A88 (sub_180113A88.c)
 * Callees:
 *     sub_1800524BC @ 0x1800524BC (sub_1800524BC.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800BBCBC @ 0x1800BBCBC (sub_1800BBCBC.c)
 */

__int64 __fastcall sub_1800BC578(__int64 *a1)
{
  __int64 *v2; // rdx
  __int64 result; // rax
  _QWORD *v4; // rcx

  for ( ; a1[2]; result = sub_1800BBCBC((__int64)a1, v2) )
  {
    v2 = (__int64 *)*a1;
    if ( !*a1 )
      sub_1800B8610(-2147467259);
    *a1 = *v2;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[4] = 0LL;
  v4 = (_QWORD *)a1[3];
  if ( v4 )
  {
    result = sub_1800524BC(v4);
    a1[3] = 0LL;
  }
  return result;
}
