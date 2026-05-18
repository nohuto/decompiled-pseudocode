/*
 * XREFs of sub_1800DD7D4 @ 0x1800DD7D4
 * Callers:
 *     sub_1800DD87C @ 0x1800DD87C (sub_1800DD87C.c)
 * Callees:
 *     sub_1800898F8 @ 0x1800898F8 (sub_1800898F8.c)
 *     memmove @ 0x18011E0B2 (memmove.c)
 */

__int64 __fastcall sub_1800DD7D4(__int64 a1, __int64 a2)
{
  __int64 *v4; // rdi
  const void *v5; // r15
  void *v6; // rsi
  signed __int64 v7; // rbp
  __int64 result; // rax

  *(_OWORD *)a1 = *(_OWORD *)a2;
  v4 = (__int64 *)(a1 + 56);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  _InterlockedExchange((volatile __int32 *)(a1 + 48), 0);
  if ( a1 + 56 != a2 + 56 )
  {
    v5 = *(const void **)(a2 + 56);
    v6 = (void *)*v4;
    v7 = *(_QWORD *)(a2 + 64) - (_QWORD)v5;
    if ( v7 >> 3 > (unsigned __int64)((__int64)(*(_QWORD *)(a1 + 72) - *(_QWORD *)(a1 + 56)) >> 3) )
    {
      sub_1800898F8(v4, v7 >> 3);
      v6 = (void *)*v4;
    }
    memmove(v6, v5, v7);
    v4[1] = (__int64)v6 + v7;
  }
  result = a1;
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 80);
  return result;
}
