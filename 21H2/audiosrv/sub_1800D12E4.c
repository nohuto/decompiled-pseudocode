/*
 * XREFs of sub_1800D12E4 @ 0x1800D12E4
 * Callers:
 *     sub_1800D0B50 @ 0x1800D0B50 (sub_1800D0B50.c)
 *     sub_1800D0D94 @ 0x1800D0D94 (sub_1800D0D94.c)
 *     sub_1800D0F78 @ 0x1800D0F78 (sub_1800D0F78.c)
 *     sub_18011102C @ 0x18011102C (sub_18011102C.c)
 *     sub_18013DF30 @ 0x18013DF30 (sub_18013DF30.c)
 * Callees:
 *     sub_1800524BC @ 0x1800524BC (sub_1800524BC.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800D0F78 @ 0x1800D0F78 (sub_1800D0F78.c)
 */

void __fastcall sub_1800D12E4(_QWORD *a1)
{
  _QWORD *v2; // rdx
  _QWORD *v3; // rcx

  while ( a1[2] )
  {
    v2 = (_QWORD *)*a1;
    if ( !*a1 )
      sub_1800B8610(-2147467259);
    *a1 = *v2;
    sub_1800D0F78(a1, v2);
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[4] = 0LL;
  v3 = (_QWORD *)a1[3];
  if ( v3 )
  {
    sub_1800524BC(v3);
    a1[3] = 0LL;
  }
}
