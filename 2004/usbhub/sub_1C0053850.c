/*
 * XREFs of sub_1C0053850 @ 0x1C0053850
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

char __fastcall sub_1C0053850(__int64 a1, int *a2, __int64 a3)
{
  int v3; // r9d
  int v4; // r8d
  __int64 v6; // rax

  v3 = *a2;
  if ( (*a2 & 0x100) != 0 )
  {
    v4 = 1447905584;
LABEL_3:
    sub_1C000FD80(a1, 256, v4, 0LL, 0LL);
    return 0;
  }
  if ( *(_WORD *)a3 != 20 )
  {
    v4 = 1447905585;
    goto LABEL_3;
  }
  v6 = *(_QWORD *)(a3 + 4);
  if ( !v6 )
    v6 = *(_QWORD *)(a3 + 12);
  if ( !v6 )
  {
    v4 = 1447905586;
    goto LABEL_3;
  }
  *((_QWORD *)a2 + 5) = a3;
  *a2 = v3 | 0x100;
  return 1;
}
