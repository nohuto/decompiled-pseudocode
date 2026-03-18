/*
 * XREFs of sub_1C001CE0C @ 0x1C001CE0C
 * Callers:
 *     sub_1C000CA20 @ 0x1C000CA20 (sub_1C000CA20.c)
 *     sub_1C000DC30 @ 0x1C000DC30 (sub_1C000DC30.c)
 *     sub_1C000E9B0 @ 0x1C000E9B0 (sub_1C000E9B0.c)
 *     sub_1C00101B0 @ 0x1C00101B0 (sub_1C00101B0.c)
 *     sub_1C003BC30 @ 0x1C003BC30 (sub_1C003BC30.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 */

_DWORD *__fastcall sub_1C001CE0C(__int64 a1, int a2, int a3, int a4)
{
  _DWORD *result; // rax
  __int64 v8; // r10
  int v9; // ecx

  result = sub_1C000F050(a1);
  v8 = ((unsigned __int8)result[207] + 1) & 7;
  result[207] = v8;
  v8 *= 32LL;
  *(_DWORD *)((char *)result + v8 + 284) = a4;
  v9 = result[1043];
  *(_DWORD *)((char *)result + v8 + 292) = a3;
  *(_DWORD *)((char *)result + v8 + 288) = v9;
  *(_DWORD *)((char *)result + v8 + 296) = a2;
  result[1043] = a3;
  return result;
}
