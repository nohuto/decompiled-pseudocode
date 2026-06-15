/*
 * XREFs of sub_180141778 @ 0x180141778
 * Callers:
 *     sub_180141124 @ 0x180141124 (sub_180141124.c)
 * Callees:
 *     sub_1801417C0 @ 0x1801417C0 (sub_1801417C0.c)
 */

__int64 __fastcall sub_180141778(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  int v4; // eax

  v3 = 0;
  v4 = sub_1801417C0(a1, a2, *(_QWORD *)(a1 + 192), a1 + 200);
  if ( v4 >= 0 )
    *(_DWORD *)(a1 + 216) = 1;
  else
    return (unsigned int)v4;
  return v3;
}
