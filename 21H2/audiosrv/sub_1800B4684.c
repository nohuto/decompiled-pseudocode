/*
 * XREFs of sub_1800B4684 @ 0x1800B4684
 * Callers:
 *     sub_1800B5788 @ 0x1800B5788 (sub_1800B5788.c)
 *     sub_1800B58DC @ 0x1800B58DC (sub_1800B58DC.c)
 * Callees:
 *     sub_1800B5704 @ 0x1800B5704 (sub_1800B5704.c)
 *     sub_1800B619C @ 0x1800B619C (sub_1800B619C.c)
 */

__int64 __fastcall sub_1800B4684(__int64 a1, __int64 a2, _WORD *a3, _QWORD *a4)
{
  unsigned __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r10
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rsi

  if ( a1 != a2 && a3 && *a3 && (v6 = sub_1800B5704(a3), v9 = v8 - a1, v10 = v6, v9 >= v6) )
  {
    sub_1800B619C(a1, v9, v7, v6);
    if ( a4 )
      *a4 = a1;
    return v10 + a1;
  }
  else
  {
    if ( a4 )
      *a4 = 0LL;
    return a1;
  }
}
