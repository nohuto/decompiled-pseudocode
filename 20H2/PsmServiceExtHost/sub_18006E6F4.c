/*
 * XREFs of sub_18006E6F4 @ 0x18006E6F4
 * Callers:
 *     sub_18006EF94 @ 0x18006EF94 (sub_18006EF94.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006E6F4(volatile signed __int64 *a1, volatile signed __int64 *a2, __int64 a3)
{
  __int64 result; // rax

  *(_QWORD *)(a3 + 48) = 0LL;
  *(_QWORD *)(a3 + 56) = 0LL;
  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_QWORD *)(a3 + 16) = -1LL;
  *(_OWORD *)(a3 + 24) = 0LL;
  *(_QWORD *)(a3 + 40) = -1LL;
  if ( _InterlockedIncrement64(a1) <= 1 )
    __fastfail(0xEu);
  *(_QWORD *)(a3 + 48) = a1;
  result = _InterlockedIncrement64(a2);
  if ( result <= 1 )
    __fastfail(0xEu);
  *(_QWORD *)(a3 + 56) = a2;
  return result;
}
