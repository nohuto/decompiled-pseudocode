/*
 * XREFs of sub_1C0059038 @ 0x1C0059038
 * Callers:
 *     sub_1C0058A58 @ 0x1C0058A58 (sub_1C0058A58.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0018E80 @ 0x1C0018E80 (sub_1C0018E80.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C0058F24 @ 0x1C0058F24 (sub_1C0058F24.c)
 */

__int64 __fastcall sub_1C0059038(ULONG_PTR a1, ULONG_PTR a2, IRP *a3, int a4, int a5, KIRQL NewIrql)
{
  __int64 v10; // r9
  __int64 v11; // rcx
  _DWORD *v12; // r14
  int v13; // r9d

  sub_1C000FD80(a1, 0x10000, 1936938871, a2, (__int64)a3);
  v12 = sub_1C0011220(v10);
  switch ( a4 )
  {
    case 1:
      if ( a3 )
      {
        sub_1C0018E80(v11, a2, 1, 1, NewIrql);
        v13 = -2147483631;
        return sub_1C0058F24(a1, a2, a3, v13);
      }
      goto LABEL_15;
    case 2:
      sub_1C0018E80(v11, a2, 2, 2, NewIrql);
      return 259LL;
    case 3:
      sub_1C0018E80(v11, a2, 3, 0, NewIrql);
      return 0LL;
    case 5:
      if ( a3 )
      {
        sub_1C0018E80(v11, a2, 5, 0, NewIrql);
        v13 = v12[360];
        return sub_1C0058F24(a1, a2, a3, v13);
      }
      goto LABEL_15;
    case 6:
      if ( a3 )
      {
        sub_1C0018E80(v11, a2, 6, 0, NewIrql);
        v13 = -1073741536;
        return sub_1C0058F24(a1, a2, a3, v13);
      }
LABEL_15:
      sub_1C002DC78(a1, a1);
  }
  if ( !a3 )
    goto LABEL_15;
  sub_1C0018E80(v11, a2, a4, a5, NewIrql);
  v13 = -1073741823;
  return sub_1C0058F24(a1, a2, a3, v13);
}
