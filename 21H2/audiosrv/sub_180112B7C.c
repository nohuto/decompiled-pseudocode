/*
 * XREFs of sub_180112B7C @ 0x180112B7C
 * Callers:
 *     sub_18000DF70 @ 0x18000DF70 (sub_18000DF70.c)
 *     sub_180110F88 @ 0x180110F88 (sub_180110F88.c)
 *     sub_180112B7C @ 0x180112B7C (sub_180112B7C.c)
 * Callees:
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 *     sub_1800524BC @ 0x1800524BC (sub_1800524BC.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_180112B7C @ 0x180112B7C (sub_180112B7C.c)
 */

void __fastcall sub_180112B7C(__int64 a1)
{
  _QWORD *v2; // rdi
  bool v3; // zf
  __int64 v4; // rax
  _QWORD *v5; // rcx

  if ( *(_QWORD *)(a1 + 16) )
  {
    do
    {
      v2 = *(_QWORD **)a1;
      if ( !*(_QWORD *)a1 )
        sub_1800B8610(-2147467259);
      *(_QWORD *)a1 = *v2;
      sub_180006A30((volatile signed __int32 *)(v2[2] - 24LL));
      *v2 = *(_QWORD *)(a1 + 32);
      v3 = (*(_QWORD *)(a1 + 16))-- == 1LL;
      v4 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 32) = v2;
      if ( v3 )
      {
        sub_180112B7C(a1);
        v4 = *(_QWORD *)(a1 + 16);
      }
    }
    while ( v4 );
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v5 = *(_QWORD **)(a1 + 24);
  if ( v5 )
  {
    sub_1800524BC(v5);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
