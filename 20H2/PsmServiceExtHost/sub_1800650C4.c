/*
 * XREFs of sub_1800650C4 @ 0x1800650C4
 * Callers:
 *     sub_180065224 @ 0x180065224 (sub_180065224.c)
 * Callees:
 *     sub_1800644CC @ 0x1800644CC (sub_1800644CC.c)
 */

__int64 __fastcall sub_1800650C4(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  v1 = qword_1800B3FA8;
  if ( !*(_QWORD *)(qword_1800B3FA8 + 8) )
  {
    v2 = *(_QWORD *)qword_1800B3FA8;
    v4 = 0LL;
    if ( (int)sub_1800644CC(v2, &v4) >= 0 && !*(_QWORD *)(v1 + 8) )
      *(_QWORD *)(v1 + 8) = v4;
  }
  return (*(_QWORD *)(v1 + 8) + 32LL) & -(__int64)(*(_QWORD *)(v1 + 8) != 0LL);
}
