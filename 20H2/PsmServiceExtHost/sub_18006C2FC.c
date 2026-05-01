/*
 * XREFs of sub_18006C2FC @ 0x18006C2FC
 * Callers:
 *     sub_1800688D8 @ 0x1800688D8 (sub_1800688D8.c)
 *     sub_180068B10 @ 0x180068B10 (sub_180068B10.c)
 * Callees:
 *     sub_1800076D4 @ 0x1800076D4 (sub_1800076D4.c)
 */

__int64 __fastcall sub_18006C2FC(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v2 = sub_1800076D4(a1 + 24, (__int64)&v6, (__int64)&v5);
  v3 = v5;
  if ( v2 < 0 )
    return 0LL;
  return v3;
}
