/*
 * XREFs of sub_180017FBC @ 0x180017FBC
 * Callers:
 *     sub_18001058C @ 0x18001058C (sub_18001058C.c)
 *     sub_18001DA44 @ 0x18001DA44 (sub_18001DA44.c)
 *     sub_18001E024 @ 0x18001E024 (sub_18001E024.c)
 *     sub_180028784 @ 0x180028784 (sub_180028784.c)
 *     sub_180029028 @ 0x180029028 (sub_180029028.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_180017F24 @ 0x180017F24 (sub_180017F24.c)
 */

void __fastcall sub_180017FBC(__int64 **a1, __int64 *a2)
{
  __int64 *v2; // r8
  __int64 *v3; // r8
  bool v4; // zf

  if ( !a2 )
    sub_18000A174(-2147467259);
  v2 = (__int64 *)*a2;
  if ( a2 == *a1 )
    *a1 = v2;
  else
    *(_QWORD *)a2[1] = v2;
  v3 = (__int64 *)a2[1];
  if ( a2 == a1[1] )
    a1[1] = v3;
  else
    *(_QWORD *)(*a2 + 8) = v3;
  *a2 = (__int64)a1[4];
  v4 = a1[2] == (__int64 *)1;
  a1[2] = (__int64 *)((char *)a1[2] - 1);
  a1[4] = a2;
  if ( v4 )
    sub_180017F24((__int64)a1);
}
