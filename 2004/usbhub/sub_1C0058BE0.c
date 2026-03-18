/*
 * XREFs of sub_1C0058BE0 @ 0x1C0058BE0
 * Callers:
 *     sub_1C0058A58 @ 0x1C0058A58 (sub_1C0058A58.c)
 * Callees:
 *     sub_1C000BEB0 @ 0x1C000BEB0 (sub_1C000BEB0.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0012EFC @ 0x1C0012EFC (sub_1C0012EFC.c)
 *     sub_1C0013F80 @ 0x1C0013F80 (sub_1C0013F80.c)
 *     sub_1C0016B5C @ 0x1C0016B5C (sub_1C0016B5C.c)
 *     sub_1C0018E80 @ 0x1C0018E80 (sub_1C0018E80.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C0058F24 @ 0x1C0058F24 (sub_1C0058F24.c)
 */

__int64 __fastcall sub_1C0058BE0(ULONG_PTR a1, __int64 a2, IRP *a3, int a4, int a5, KIRQL NewIrql)
{
  __int64 v7; // rbx
  _DWORD *v10; // r14
  _DWORD *v11; // r15
  __int64 v12; // rcx
  int v13; // r9d
  __int64 v14; // r9
  int v15; // r8d
  __int64 v17; // rcx
  __int64 v18; // rcx

  v7 = a4;
  v10 = sub_1C0011220(a2);
  v11 = sub_1C000F050(a1);
  sub_1C000FD80(a1, 0x10000, 1936936521, a2, (__int64)a3);
  sub_1C000FD80(a1, 0x10000, 1936936498, 0LL, v7);
  if ( (_DWORD)v7 == 1 )
  {
    sub_1C0013F80((__int64)v10, (__int64)a3, &stru_1C0062BF8, v13);
    if ( (v10[355] & 2) != 0 || v11[820] == 6 )
    {
      sub_1C0018E80(v17, a2, 1, 1, NewIrql);
      v15 = 1768180017;
      goto LABEL_23;
    }
    if ( sub_1C0016B5C(a1, *((_WORD *)v10 + 714), (__int64)v10, 0x656C6449u) == a2 )
    {
      sub_1C0018E80(v18, a2, 1, 1, NewIrql);
      v10[360] = 0;
      a3->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      sub_1C000FD80(*((_QWORD *)v10 + 148), 16, 1768180018, 0LL, (__int64)a3);
      IoCsqInsertIrp((PIO_CSQ)(v10 + 366), a3, 0LL);
      sub_1C000BEB0(a1, (__int64)(v10 + 386), (int)sub_1C0059210, 0, a2, 0, 1766871891);
      return 259;
    }
    if ( a3 )
    {
      sub_1C0018E80(v18, a2, 1, 0, NewIrql);
      sub_1C000FD80(a1, 0x10000, 1768180019, a2, (__int64)a3);
      v14 = 3221225486LL;
      return (unsigned int)sub_1C0058F24(a1, a2, a3, v14);
    }
LABEL_19:
    sub_1C002DC78(a1, a1);
  }
  if ( (_DWORD)v7 != 3 )
  {
    switch ( (_DWORD)v7 )
    {
      case 5:
        if ( a3 )
        {
          sub_1C0018E80(v12, a2, 5, v13, NewIrql);
          v14 = (unsigned int)v10[360];
          return (unsigned int)sub_1C0058F24(a1, a2, a3, v14);
        }
        break;
      case 6:
        if ( a3 )
        {
          sub_1C0018E80(v12, a2, 6, v13, NewIrql);
          v14 = 3221225760LL;
          return (unsigned int)sub_1C0058F24(a1, a2, a3, v14);
        }
        break;
      case 7:
        if ( a3 )
        {
          sub_1C0018E80(v12, a2, 7, 5, NewIrql);
          sub_1C0012EFC(a1, a2, (__int64)a3);
          v15 = 1768180020;
LABEL_23:
          a3->Tail.Overlay.CurrentStackLocation->Control |= 1u;
          sub_1C000FD80(*((_QWORD *)v10 + 148), 16, v15, 0LL, (__int64)a3);
          IoCsqInsertIrp((PIO_CSQ)(v10 + 366), a3, 0LL);
          return 259;
        }
        break;
      default:
        sub_1C0018E80(v12, a2, v7, a5, NewIrql);
        v14 = 3221225473LL;
        return (unsigned int)sub_1C0058F24(a1, a2, a3, v14);
    }
    goto LABEL_19;
  }
  sub_1C0018E80(v12, a2, 3, v13, NewIrql);
  return 0;
}
