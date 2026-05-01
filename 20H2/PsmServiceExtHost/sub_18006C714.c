/*
 * XREFs of sub_18006C714 @ 0x18006C714
 * Callers:
 *     sub_18006BAD0 @ 0x18006BAD0 (sub_18006BAD0.c)
 * Callees:
 *     sub_180070408 @ 0x180070408 (sub_180070408.c)
 */

__int64 __fastcall sub_18006C714(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx
  __int64 result; // rax

  sub_180070408(*a1 + 24LL);
  *(_QWORD *)(a2 + 56) = a1;
  v4 = (_QWORD *)(a2 + 64);
  v5 = (_QWORD *)a1[4];
  v6 = a1 + 3;
  if ( (_QWORD *)*v5 != v6 )
    __fastfail(3u);
  *v4 = v6;
  *(_QWORD *)(a2 + 72) = v5;
  *v5 = v4;
  v6[1] = v4;
  result = _InterlockedIncrement64((volatile signed __int64 *)(a2 + 16));
  if ( result <= 1 )
    __fastfail(0xEu);
  return result;
}
