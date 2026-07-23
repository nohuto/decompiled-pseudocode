/*
 * XREFs of HvpIsFreeNeighbor @ 0x140720AC0
 * Callers:
 *     HvFreeCell @ 0x140720914 (HvFreeCell.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x14071F800 (HvpMarkCellDirty.c)
 *     HvpDelistFreeCell @ 0x140720B84 (HvpDelistFreeCell.c)
 */

char __fastcall HvpIsFreeNeighbor(ULONG_PTR BugCheckParameter2, _DWORD *a2, int *a3, int **a4, int a5)
{
  int *v6; // rbx
  __int64 v8; // rax
  int *v10; // rax
  int v11; // edi

  v6 = (int *)((char *)a3 + *a3);
  *a4 = 0LL;
  if ( (unsigned int)((_DWORD)v6 - (_DWORD)a2) < a2[2] && *v6 > 0 )
  {
    v11 = a5;
    *a4 = v6;
    goto LABEL_11;
  }
  v6 = a2 + 8;
  if ( a2 + 8 >= a3 )
    return 0;
  while ( 1 )
  {
    v8 = *v6;
    if ( (int)v8 > 0 )
      break;
    v6 = (int *)((char *)v6 - v8);
LABEL_6:
    if ( v6 >= a3 )
      return 0;
  }
  v10 = (int *)((char *)v6 + v8);
  if ( v10 != a3 )
  {
    v6 = v10;
    goto LABEL_6;
  }
  v11 = a5;
  *a4 = v6;
  if ( a5 != 1 && !HvpMarkCellDirty(BugCheckParameter2, (unsigned int)((_DWORD)v6 + a2[1] - (_DWORD)a2), 1) )
    return 0;
LABEL_11:
  HvpDelistFreeCell(BugCheckParameter2, (unsigned int)((_DWORD)v6 + (v11 << 31) + a2[1] - (_DWORD)a2));
  return 1;
}
