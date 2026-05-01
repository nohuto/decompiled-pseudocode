/*
 * XREFs of sub_1800097A8 @ 0x1800097A8
 * Callers:
 *     sub_1800096AC @ 0x1800096AC (sub_1800096AC.c)
 * Callees:
 *     sub_180009854 @ 0x180009854 (sub_180009854.c)
 */

__int64 __fastcall sub_1800097A8(_QWORD *a1)
{
  __int64 *v2; // rdx
  __int64 v3; // rax
  __int64 **v4; // rcx

  sub_180009854(*a1);
  v2 = a1 + 1;
  v3 = *a1 + 16 * (*((int *)a1 + 34) + 1LL);
  v4 = *(__int64 ***)(v3 + 8);
  if ( *v4 != (__int64 *)v3 )
    __fastfail(3u);
  *v2 = v3;
  a1[2] = v4;
  *v4 = v2;
  *(_QWORD *)(v3 + 8) = v2;
  return sub_1800097FC(*a1);
}
