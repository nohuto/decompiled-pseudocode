/*
 * XREFs of sub_180099644 @ 0x180099644
 * Callers:
 *     sub_18009ABB0 @ 0x18009ABB0 (sub_18009ABB0.c)
 * Callees:
 *     sub_180099748 @ 0x180099748 (sub_180099748.c)
 *     sub_180099DA4 @ 0x180099DA4 (sub_180099DA4.c)
 *     sub_18009A010 @ 0x18009A010 (sub_18009A010.c)
 *     sub_18009D9C0 @ 0x18009D9C0 (sub_18009D9C0.c)
 */

__int64 __fastcall sub_180099644(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r10
  __int64 v10; // rdi
  __int64 result; // rax
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 i; // rdi

  v5 = (unsigned __int128)((a3 - a2) * (__int128)0x2E8BA2E8BA2E8BA3LL) >> 64;
  v7 = *a1;
  v8 = ((unsigned __int64)v5 >> 63) + (v5 >> 4);
  v9 = (a1[1] - *a1) / 88;
  if ( v8 <= v9 )
  {
    v12 = v7 + 88 * v8;
    result = sub_180099748(a2, a3);
    v13 = a1[1];
    for ( i = v12; i != v13; i += 88LL )
      result = sub_18009A010(i);
  }
  else
  {
    if ( v8 > (a1[2] - v7) / 88 )
    {
      sub_18009D9C0(a1, v8);
      v9 = 0LL;
    }
    v10 = a2 + 88 * v9;
    result = sub_180099748(a2, v10);
    v12 = a1[1];
    while ( v10 != a3 )
    {
      result = sub_180099DA4(v12, v10);
      v12 += 88LL;
      v10 += 88LL;
    }
  }
  a1[1] = v12;
  return result;
}
