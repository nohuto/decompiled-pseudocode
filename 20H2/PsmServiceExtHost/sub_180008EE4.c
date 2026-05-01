/*
 * XREFs of sub_180008EE4 @ 0x180008EE4
 * Callers:
 *     sub_180022B60 @ 0x180022B60 (sub_180022B60.c)
 * Callees:
 *     sub_180008D30 @ 0x180008D30 (sub_180008D30.c)
 *     sub_18000B9A8 @ 0x18000B9A8 (sub_18000B9A8.c)
 *     sub_18000EE4C @ 0x18000EE4C (sub_18000EE4C.c)
 */

__int64 __fastcall sub_180008EE4(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, _QWORD *a6)
{
  int v7; // edi
  int v9; // esi
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v9 = a1;
  if ( (int)sub_180008D30(a1, *(_QWORD *)(a2 + 544), &v13) >= 0 )
  {
    v11 = v13;
  }
  else
  {
    result = sub_18000B9A8(v9, a4, v7, 2 * (a5 & 1u) + 1, (__int64)&v13);
    if ( (int)result < 0 )
      return result;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(a3 + 24)) <= 1 )
      __fastfail(0xEu);
    v11 = v13;
    *(_QWORD *)(v13 + 840) = a3;
  }
  sub_18000EE4C(v11 + 64);
  result = 0LL;
  *a6 = v12;
  return result;
}
