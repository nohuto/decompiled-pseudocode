/*
 * XREFs of sub_1C0030CB0 @ 0x1C0030CB0
 * Callers:
 *     sub_1C0009690 @ 0x1C0009690 (sub_1C0009690.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0014E84 @ 0x1C0014E84 (sub_1C0014E84.c)
 *     sub_1C002C2FC @ 0x1C002C2FC (sub_1C002C2FC.c)
 */

__int64 __fastcall sub_1C0030CB0(__int64 a1, ULONG_PTR a2, ULONG_PTR a3)
{
  __int64 v5; // rbx
  int v6; // eax

  v5 = a1;
  sub_1C000F050(a1);
  sub_1C0011220(a2);
  sub_1C000FD80(v5, 8, 1919446590, a3, 0LL);
  v6 = sub_1C002C2FC(v5, a2, *(__m128 **)(a3 + 24), *(_DWORD *)(*(_QWORD *)(a3 + 184) + 8LL), (__int32 *)(a3 + 56));
  *(_DWORD *)(a3 + 48) = v6;
  LODWORD(v5) = v6;
  IofCompleteRequest((PIRP)a3, 0);
  sub_1C0014E84(a2, a3);
  return (unsigned int)v5;
}
