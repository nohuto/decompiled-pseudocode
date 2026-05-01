/*
 * XREFs of sub_18006D5A8 @ 0x18006D5A8
 * Callers:
 *     sub_1800635C4 @ 0x1800635C4 (sub_1800635C4.c)
 *     sub_180068764 @ 0x180068764 (sub_180068764.c)
 * Callees:
 *     sub_180008938 @ 0x180008938 (sub_180008938.c)
 *     sub_180040E64 @ 0x180040E64 (sub_180040E64.c)
 *     sub_18006D504 @ 0x18006D504 (sub_18006D504.c)
 *     sub_18006D660 @ 0x18006D660 (sub_18006D660.c)
 */

BOOLEAN __fastcall sub_18006D5A8(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  _QWORD *i; // rdi
  _QWORD *j; // rdi
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rax

  v4 = *a1;
  for ( i = a1 + 3; (_QWORD *)*i != i; sub_18006D504((_QWORD *)(*i - 64LL), a2, a3, a4) )
    ;
  sub_180040E64(v4);
  for ( j = a1 + 5; (_QWORD *)*j != j; sub_18006D660(v4, *j - 72LL, 0LL) )
    ;
  if ( !(unsigned int)sub_180008938(a1 + 1) )
  {
    v9 = *v8;
    if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v10 = (_QWORD *)v8[1], (_QWORD *)*v10 != v8) )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    *(_OWORD *)v8 = 0LL;
  }
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
