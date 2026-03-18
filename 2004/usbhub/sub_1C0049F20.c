/*
 * XREFs of sub_1C0049F20 @ 0x1C0049F20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 */

__int64 __fastcall sub_1C0049F20(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5)
{
  __int64 v6; // r11
  int v7; // r9d
  unsigned int v8; // r10d
  __int64 result; // rax
  __int64 v10; // rax

  sub_1C000FD80(a1, 64, 1299474532, 0LL, a5);
  *a4 &= v7;
  if ( v8 < 0x18 )
    return 3221225507LL;
  v10 = sub_1C0016CA0(v6, *(_WORD *)(a5 + 4));
  if ( !v10 )
    return 3221225485LL;
  *(_DWORD *)(a5 + 12) = *(_DWORD *)(v10 + 424);
  result = 0LL;
  *a4 = 24;
  return result;
}
