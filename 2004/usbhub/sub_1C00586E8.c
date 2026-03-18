/*
 * XREFs of sub_1C00586E8 @ 0x1C00586E8
 * Callers:
 *     sub_1C0058A58 @ 0x1C0058A58 (sub_1C0058A58.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0018E80 @ 0x1C0018E80 (sub_1C0018E80.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C0058F24 @ 0x1C0058F24 (sub_1C0058F24.c)
 */

__int64 __fastcall sub_1C00586E8(ULONG_PTR a1, __int64 a2, __int64 a3, int a4, int a5, KIRQL NewIrql)
{
  _DWORD *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r9

  sub_1C000FD80(a1, 0x10000, 1936938851, a2, a3);
  v10 = sub_1C0011220(a2);
  v11 = (unsigned int)(a4 - 1);
  if ( a4 == 1 )
  {
    if ( a3 )
    {
      sub_1C0018E80(v11, a2, 1, a5, NewIrql);
      v12 = 2147483665LL;
      return sub_1C0058F24(a1, a2, a3, v12);
    }
    goto LABEL_7;
  }
  if ( a4 == 4 )
  {
    if ( a3 )
    {
      sub_1C0018E80(v11, a2, 4, 0, NewIrql);
      v12 = (unsigned int)v10[360];
      return sub_1C0058F24(a1, a2, a3, v12);
    }
LABEL_7:
    sub_1C002DC78(a1, a1);
  }
  sub_1C0018E80(v11, a2, a4, a5, NewIrql);
  v12 = 3221225473LL;
  return sub_1C0058F24(a1, a2, a3, v12);
}
