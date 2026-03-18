/*
 * XREFs of sub_1C004C954 @ 0x1C004C954
 * Callers:
 *     sub_1C0008BD0 @ 0x1C0008BD0 (sub_1C0008BD0.c)
 *     sub_1C000ABD0 @ 0x1C000ABD0 (sub_1C000ABD0.c)
 *     sub_1C001BDDC @ 0x1C001BDDC (sub_1C001BDDC.c)
 *     sub_1C001C7A8 @ 0x1C001C7A8 (sub_1C001C7A8.c)
 *     sub_1C004C428 @ 0x1C004C428 (sub_1C004C428.c)
 * Callees:
 *     sub_1C00023E0 @ 0x1C00023E0 (sub_1C00023E0.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 *     sub_1C004E878 @ 0x1C004E878 (sub_1C004E878.c)
 */

__int64 __fastcall sub_1C004C954(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  _DWORD *v8; // rax
  __int64 v9; // r8
  char *v10; // r9

  v8 = sub_1C000F050(a1);
  if ( (*(_WORD *)(a4 + 420) & 0x100) == 0 || (v8[640] & 0x10000000) != 0 )
  {
    ++*(_DWORD *)(a4 + 2404);
    if ( a5 && sub_1C0011220(a5)[280] == 101 )
    {
      sub_1C004E878(a1, a4, 0LL);
      sub_1C004A608(a1, *(_WORD *)(a4 + 4), 0x73u, (char *)a4, 0xB70u, 0, 0, aBusfuncC, 2868, 0);
      a2 = 4;
      _InterlockedExchange((volatile __int32 *)(a4 + 428), 4);
    }
    else
    {
      sub_1C00023E0(a1, a2, a4, a5);
      if ( *(_DWORD *)(a4 + 2404) >= 3u )
      {
        sub_1C000FD80(a1, 1024, 1884247634, a4, 0LL);
        sub_1C004A608(a1, *(_WORD *)(a4 + 4), 0x6Bu, v10, 0xB70u, 0, 0, aBusfuncC, 2907, 0);
        a2 = 4;
        _InterlockedExchange((volatile __int32 *)(a4 + 428), 4);
        sub_1C004E878(a1, a4, 0LL);
        sub_1C004A608(a1, *(_WORD *)(a4 + 4), 6u, (char *)a4, 0xB70u, 0, 0, aBusfuncC, 2918, 0);
      }
      else
      {
        LOBYTE(v9) = 1;
        sub_1C004E878(a1, a4, v9);
        sub_1C004A608(a1, *(_WORD *)(a4 + 4), 0x6Cu, (char *)a4, 0xB70u, 0, 0, aBusfuncC, 2893, 0);
        return 4;
      }
    }
  }
  else
  {
    sub_1C004A608(
      a1,
      *(_WORD *)(a4 + 4),
      ((*(_WORD *)(a4 + 420) & 8) != 0) + 105,
      (char *)a4,
      0xB70u,
      0,
      0,
      aBusfuncC,
      (*(_WORD *)(a4 + 420) & 8) != 0 ? 2843 : 2831,
      0);
  }
  return a2;
}
