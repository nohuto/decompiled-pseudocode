/*
 * XREFs of sub_1C0058574 @ 0x1C0058574
 * Callers:
 *     sub_1C0058A58 @ 0x1C0058A58 (sub_1C0058A58.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0018E80 @ 0x1C0018E80 (sub_1C0018E80.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C0058F24 @ 0x1C0058F24 (sub_1C0058F24.c)
 */

__int64 __fastcall sub_1C0058574(ULONG_PTR a1, __int64 a2, __int64 a3, int a4, int a5, KIRQL NewIrql)
{
  __int64 v10; // rcx
  _DWORD *v11; // r14
  unsigned int v12; // eax

  sub_1C000FD80(a1, 0x10000, 1936938851, a2, a3);
  v11 = sub_1C0011220(a2);
  switch ( a4 )
  {
    case 1:
      goto LABEL_10;
    case 5:
      sub_1C0018E80(v10, a2, 5, 0, NewIrql);
      v12 = v11[360];
      return sub_1C0058F24(a1, a2, a3, v12);
    case 6:
      sub_1C0018E80(v10, a2, 6, 0, NewIrql);
      v12 = -1073741536;
      return sub_1C0058F24(a1, a2, a3, v12);
    case 7:
LABEL_10:
      if ( !a3 )
        sub_1C002DC78(a1, a1);
      sub_1C0018E80(v10, a2, a4, 5, NewIrql);
      v12 = -2147483631;
      break;
    case 8:
      sub_1C0018E80(v10, a2, 8, 0, NewIrql);
      v12 = 0;
      break;
    default:
      sub_1C0018E80(v10, a2, a4, a5, NewIrql);
      v12 = -1073741823;
      break;
  }
  return sub_1C0058F24(a1, a2, a3, v12);
}
