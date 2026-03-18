/*
 * XREFs of sub_1C0049D20 @ 0x1C0049D20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 */

__int64 __fastcall sub_1C0049D20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _DWORD *v6; // r10
  unsigned int v7; // r11d

  sub_1C000FD80(a1, 64, 1299474532, 0xFFFFFFFFLL, a5);
  *v6 = 0;
  if ( v7 >= 0x18 )
    return sub_1C0016CA0(a1, *(_WORD *)(a5 + 4)) == 0 ? 0xC000000D : 0;
  else
    return 3221225507LL;
}
