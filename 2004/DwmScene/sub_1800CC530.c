/*
 * XREFs of sub_1800CC530 @ 0x1800CC530
 * Callers:
 *     sub_1800CCA38 @ 0x1800CCA38 (sub_1800CCA38.c)
 *     sub_1800CCAB0 @ 0x1800CCAB0 (sub_1800CCAB0.c)
 *     sub_1800F3710 @ 0x1800F3710 (sub_1800F3710.c)
 * Callees:
 *     sub_1800CCED4 @ 0x1800CCED4 (sub_1800CCED4.c)
 */

__int64 __fastcall sub_1800CC530(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // r14

  v2 = (_QWORD *)(a2 + 16);
  *(_DWORD *)a1 = *(_DWORD *)a2;
  v3 = (_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  if ( a1 + 16 != a2 + 16 )
  {
    sub_1800CCED4(a1 + 16);
    *v3 = *v2;
    v3[1] = v2[1];
    v3[2] = v2[2];
    *v2 = 0LL;
    v2[1] = 0LL;
    v2[2] = 0LL;
  }
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  return a1;
}
