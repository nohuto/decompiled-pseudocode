/*
 * XREFs of ?CitpBitmapUpdateBits@@YAXPEAU_CIT_BITMAP@@II@Z @ 0x1C0028844
 * Callers:
 *     ?CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z @ 0x1C00287E8 (-CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CitpBitmapUpdateBits(struct _CIT_BITMAP *a1, unsigned int a2, int a3)
{
  int v3; // r8d
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rdx

  v3 = a3 - a2;
  v4 = a2 & 7;
  v5 = (unsigned __int64)a2 >> 3;
  v6 = (unsigned int)(v3 + 1);
  if ( v3 != -1 )
  {
    while ( 1 )
    {
      if ( v5 >= *((_QWORD *)a1 + 1) )
        return;
      if ( v4 )
        goto LABEL_10;
      if ( v6 < 8 )
        break;
      v6 -= 8LL;
      *(_BYTE *)(v5 + *(_QWORD *)a1) = -1;
LABEL_6:
      ++v5;
      if ( !v6 )
        return;
    }
    while ( 1 )
    {
      *(_BYTE *)(*(_QWORD *)a1 + v5) |= 1 << v4;
      if ( !--v6 )
        return;
      ++v4;
LABEL_10:
      if ( v4 >= 8 )
      {
        v4 = 0LL;
        goto LABEL_6;
      }
    }
  }
}
