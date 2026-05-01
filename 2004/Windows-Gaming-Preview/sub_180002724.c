/*
 * XREFs of sub_180002724 @ 0x180002724
 * Callers:
 *     sub_1800029F0 @ 0x1800029F0 (sub_1800029F0.c)
 * Callees:
 *     sub_1800023D0 @ 0x1800023D0 (sub_1800023D0.c)
 */

__int64 __fastcall sub_180002724(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  *(_OWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)a1 = off_180048108;
  *(_QWORD *)(a1 + 168) = 0LL;
  v3 = a1 + 24;
  *(_QWORD *)(v3 + 152) = 0LL;
  sub_1800023D0(v3, a2);
  *(_QWORD *)(a1 + 184) = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 192) = 0LL;
  return result;
}
