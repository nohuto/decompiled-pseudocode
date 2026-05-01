/*
 * XREFs of sub_18003818C @ 0x18003818C
 * Callers:
 *     sub_180017F60 @ 0x180017F60 (sub_180017F60.c)
 *     sub_1800286D8 @ 0x1800286D8 (sub_1800286D8.c)
 * Callees:
 *     sub_1800097FC @ 0x1800097FC (sub_1800097FC.c)
 *     sub_180009854 @ 0x180009854 (sub_180009854.c)
 */

__int64 __fastcall sub_18003818C(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rbx
  __int64 result; // rax

  sub_180009854(a1);
  v4 = (_QWORD *)(a2 + 40);
  v5 = *v4;
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  v7 = --*(_QWORD *)(a1 + 264);
  result = sub_1800097FC(a1);
  if ( !v7 )
    return RtlWakeAddressAll(a1 + 264);
  return result;
}
