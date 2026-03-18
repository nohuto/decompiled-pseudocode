/*
 * XREFs of sub_1C005890C @ 0x1C005890C
 * Callers:
 *     sub_1C0058A58 @ 0x1C0058A58 (sub_1C0058A58.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0018E80 @ 0x1C0018E80 (sub_1C0018E80.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C0058F24 @ 0x1C0058F24 (sub_1C0058F24.c)
 */

__int64 __fastcall sub_1C005890C(ULONG_PTR a1, __int64 a2, IRP *a3, int a4, int a5, KIRQL NewIrql)
{
  __int64 v10; // r9
  __int64 v11; // rcx
  _DWORD *v12; // r14
  __int64 v13; // r9

  sub_1C000FD80(a1, 0x10000, 1936938851, a2, (__int64)a3);
  v12 = sub_1C0011220(v10);
  switch ( a4 )
  {
    case 1:
      if ( a3 )
      {
        sub_1C0018E80(v11, a2, 1, 2, NewIrql);
        v13 = 2147483665LL;
        return sub_1C0058F24(a1, a2, a3, v13);
      }
      goto LABEL_12;
    case 4:
      if ( a3 )
      {
        if ( a3->Cancel )
        {
          sub_1C0018E80(v11, a2, 4, 0, NewIrql);
          v13 = 3221225760LL;
          return sub_1C0058F24(a1, a2, a3, v13);
        }
        sub_1C0018E80(v11, a2, 4, 4, NewIrql);
        IoCsqInsertIrp((PIO_CSQ)(v12 + 366), a3, 0LL);
        return 259LL;
      }
LABEL_12:
      sub_1C002DC78(a1, a1);
    case 5:
      sub_1C0018E80(v11, a2, 5, 3, NewIrql);
      return 259LL;
  }
  sub_1C0018E80(v11, a2, a4, a5, NewIrql);
  v13 = 3221225473LL;
  return sub_1C0058F24(a1, a2, a3, v13);
}
