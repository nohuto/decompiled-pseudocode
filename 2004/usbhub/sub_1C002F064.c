/*
 * XREFs of sub_1C002F064 @ 0x1C002F064
 * Callers:
 *     sub_1C002F27C @ 0x1C002F27C (sub_1C002F27C.c)
 *     sub_1C002F348 @ 0x1C002F348 (sub_1C002F348.c)
 *     sub_1C002F3E0 @ 0x1C002F3E0 (sub_1C002F3E0.c)
 *     sub_1C002F4AC @ 0x1C002F4AC (sub_1C002F4AC.c)
 *     sub_1C002F594 @ 0x1C002F594 (sub_1C002F594.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 */

__int64 __fastcall sub_1C002F064(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rax
  __int64 result; // rax

  sub_1C000F050(*(_QWORD *)(a1 + 8));
  v5 = *(unsigned int *)(a2 + 2828);
  *(_DWORD *)(a2 + 2824) = a3;
  result = 32 * (v5 + 78);
  *(_DWORD *)(result + a2) = a3;
  return result;
}
