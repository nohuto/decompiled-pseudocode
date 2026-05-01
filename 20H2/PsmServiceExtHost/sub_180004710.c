/*
 * XREFs of sub_180004710 @ 0x180004710
 * Callers:
 *     sub_180004F18 @ 0x180004F18 (sub_180004F18.c)
 * Callees:
 *     sub_180009854 @ 0x180009854 (sub_180009854.c)
 */

__int64 __fastcall sub_180004710(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rcx

  sub_180009854();
  v4 = (_QWORD *)(a2 + 40);
  v5 = *(_QWORD **)(a1 + 280);
  if ( *v5 != a1 + 272 )
    __fastfail(3u);
  v4[1] = v5;
  *v4 = a1 + 272;
  *v5 = v4;
  *(_QWORD *)(a1 + 280) = v4;
  ++*(_QWORD *)(a1 + 264);
  return sub_1800097FC(a1);
}
