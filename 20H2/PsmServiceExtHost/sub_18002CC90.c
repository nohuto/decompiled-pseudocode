/*
 * XREFs of sub_18002CC90 @ 0x18002CC90
 * Callers:
 *     sub_18002CAD4 @ 0x18002CAD4 (sub_18002CAD4.c)
 * Callees:
 *     sub_18002D52C @ 0x18002D52C (sub_18002D52C.c)
 */

__int64 __fastcall sub_18002CC90(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v5; // r8
  __int64 result; // rax

  v5 = a1[171];
  if ( a2 == v5 && (a3 & 1) == 0 )
    return 0LL;
  result = sub_18002D52C(*(_QWORD *)(a1[6] + 2720LL), (int)a1 + 88, v5, a2, a1[116]);
  if ( (int)result >= 0 )
    a1[171] = a2;
  return result;
}
