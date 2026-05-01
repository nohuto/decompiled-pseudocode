/*
 * XREFs of sub_18000895C @ 0x18000895C
 * Callers:
 *     sub_180008894 @ 0x180008894 (sub_180008894.c)
 * Callees:
 *     sub_180009854 @ 0x180009854 (sub_180009854.c)
 */

__int64 __fastcall sub_18000895C(_QWORD *a1)
{
  _OWORD *v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rdx

  sub_180009854(*a1);
  v2 = a1 + 1;
  v3 = a1[1];
  if ( *(_QWORD **)(v3 + 8) != a1 + 1 || (v4 = (_QWORD *)a1[2], (_OWORD *)*v4 != v2) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  *v2 = 0LL;
  return sub_1800097FC(*a1);
}
