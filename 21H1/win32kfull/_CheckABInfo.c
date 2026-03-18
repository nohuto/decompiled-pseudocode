/*
 * XREFs of _CheckABInfo @ 0x1B9FE1
 * Callers:
 *     _HT_HalftoneBitmap@24 @ 0x1BAB42 (_HT_HalftoneBitmap@24.c)
 * Callees:
 *     <none>
 */

int __fastcall CheckABInfo(int a1, int a2, int a3, __int16 *a4, unsigned __int16 *a5)
{
  char *v5; // esi
  unsigned __int16 v6; // dx
  __int16 v7; // cx
  __int16 v8; // di
  char v9; // al
  __int16 v10; // cx
  __int16 v12; // ax
  __int16 v13; // di
  __int16 v14; // [esp-4h] [ebp-18h]
  char v17; // [esp+13h] [ebp-1h]

  v5 = *(char **)(a1 + 4);
  if ( !v5 )
    return -40;
  if ( a3 == 1 )
  {
    v14 = 2;
    goto LABEL_11;
  }
  if ( a3 == 2 )
  {
LABEL_9:
    v14 = 16;
LABEL_11:
    v6 = v14;
    goto LABEL_12;
  }
  if ( a3 != 3 && a3 != 254 )
  {
    if ( a3 != 255 )
    {
      v6 = 0;
      goto LABEL_14;
    }
    goto LABEL_9;
  }
  v6 = 256;
LABEL_12:
  if ( !*((_DWORD *)v5 + 1) || *((_WORD *)v5 + 1) > v6 )
    return -40;
LABEL_14:
  v7 = *a4;
  v8 = *a4 | 0x80;
  *a4 = v8;
  v17 = *v5;
  if ( (*v5 & 1) != 0 )
  {
    v9 = v5[1];
    if ( !v9 )
      return 0;
    if ( v9 == -1 )
    {
      v6 = 0;
      v10 = v7 & 0xFF7F;
    }
    else
    {
      v10 = v7 | 0x180;
    }
    *a4 = v10;
    goto LABEL_29;
  }
  if ( a2 == 6 )
  {
    v12 = v8;
    if ( (v17 & 4) != 0 )
    {
      v13 = v8 | 0x200;
      *a4 = v13;
      v12 = v13;
    }
    if ( (v17 & 8) != 0 )
    {
      if ( a3 != 6 )
        return -11;
      *a4 = v12 | 0x400;
    }
LABEL_29:
    *a5 = v6;
    return 1;
  }
  return -9;
}
