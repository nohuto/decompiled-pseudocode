/*
 * XREFs of sub_1C0048584 @ 0x1C0048584
 * Callers:
 *     sub_1C0041990 @ 0x1C0041990 (sub_1C0041990.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 */

unsigned __int64 __fastcall sub_1C0048584(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // esi
  __int64 v5; // rdi
  __m128 *v6; // rbx
  unsigned __int64 result; // rax

  v4 = a3 << 12;
  v5 = (unsigned int)(a3 << 12);
  v6 = (__m128 *)(sub_1C000F050(a1) + 1320);
  sub_1C001D340(v6, 0, v4);
  *(_DWORD *)a2 = 0;
  *(_QWORD *)(a2 + 8) = v6;
  result = (unsigned __int64)&v6[-2] + (v5 & 0xFFFFFFFFFFFFFFE0uLL);
  *(_DWORD *)(a2 + 4) = (v4 >> 5) - 1;
  *(_QWORD *)(a2 + 16) = result;
  return result;
}
