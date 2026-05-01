/*
 * XREFs of sub_18008177C @ 0x18008177C
 * Callers:
 *     sub_180079C30 @ 0x180079C30 (sub_180079C30.c)
 * Callees:
 *     sub_18002698C @ 0x18002698C (sub_18002698C.c)
 *     sub_180026A54 @ 0x180026A54 (sub_180026A54.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 */

__int64 __fastcall sub_18008177C(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rdi

  v4 = sub_180026A54(a1, a2);
  v5 = 0LL;
  v6 = (_QWORD *)v4;
  if ( v4 )
  {
    v5 = sub_18002698C(v4, a3);
    sub_1800274E0(v6);
  }
  return v5;
}
