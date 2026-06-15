/*
 * XREFs of sub_18006E470 @ 0x18006E470
 * Callers:
 *     sub_1800DE2A0 @ 0x1800DE2A0 (sub_1800DE2A0.c)
 * Callees:
 *     sub_18006E50C @ 0x18006E50C (sub_18006E50C.c)
 */

__int64 __fastcall sub_18006E470(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rdi
  __int64 result; // rax

  for ( i = a2; i != a3; i += 8LL )
    sub_18006E50C(a4, i);
  result = a1;
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a4 + 16);
  return result;
}
