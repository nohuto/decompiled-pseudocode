/*
 * XREFs of sub_1C0049FA0 @ 0x1C0049FA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 */

__int64 __fastcall sub_1C0049FA0(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5)
{
  __int64 v6; // r11
  unsigned int v7; // r10d
  __int64 result; // rax
  __int64 v9; // rax

  sub_1C000FD80(a1, 64, 1299474532, 1LL, a5);
  *a4 = 0;
  if ( v7 < 0x18 )
    return 3221225507LL;
  v9 = sub_1C0016CA0(v6, *(_WORD *)(a5 + 4));
  if ( !v9 )
    return 3221225485LL;
  *(_DWORD *)(a5 + 8) = *(_DWORD *)(v9 + 436);
  result = 0LL;
  *a4 = 24;
  return result;
}
