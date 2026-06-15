/*
 * XREFs of sub_1801379B4 @ 0x1801379B4
 * Callers:
 *     sub_180133C14 @ 0x180133C14 (sub_180133C14.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 */

__int64 __fastcall sub_1801379B4(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
    sub_1800472E0(v6, (a1[2] - v6) & 0xFFFFFFFFFFFFFFFCuLL);
  *a1 = a2;
  a1[1] = a2 + 4 * a3;
  result = a2 + 4 * a4;
  a1[2] = result;
  return result;
}
