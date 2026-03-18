/*
 * XREFs of CheckABInfo @ 0x1C02620CC
 * Callers:
 *     HT_HalftoneBitmap @ 0x1C00D5194 (HT_HalftoneBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckABInfo(__int64 a1, int a2, int a3, __int16 *a4, unsigned __int16 *a5)
{
  char *v5; // r10
  unsigned __int16 v8; // dx
  __int16 v9; // cx
  __int16 v10; // ax
  char v11; // r8
  char v12; // al
  __int16 v13; // cx
  __int64 result; // rax

  v5 = *(char **)(a1 + 8);
  if ( !v5 )
    return 4294967256LL;
  switch ( a3 )
  {
    case 1:
      v8 = 2;
      goto LABEL_11;
    case 2:
      goto LABEL_9;
    case 3:
    case 254:
      v8 = 256;
LABEL_11:
      if ( *((_QWORD *)v5 + 1) && *((_WORD *)v5 + 1) <= v8 )
        goto LABEL_13;
      return 4294967256LL;
    case 255:
LABEL_9:
      v8 = 16;
      goto LABEL_11;
  }
  v8 = 0;
LABEL_13:
  v9 = *a4;
  v10 = *a4 | 0x80;
  v11 = *v5;
  *a4 = v10;
  if ( (v11 & 1) != 0 )
  {
    v12 = v5[1];
    if ( !v12 )
      return 0LL;
    if ( v12 == -1 )
    {
      v8 = 0;
      v13 = v9 & 0xFF7F;
    }
    else
    {
      v13 = v9 | 0x180;
    }
    *a4 = v13;
  }
  else
  {
    if ( a2 != 6 )
      return 4294967287LL;
    if ( (v11 & 4) != 0 )
    {
      v10 |= 0x200u;
      *a4 = v10;
    }
    if ( (v11 & 8) != 0 )
    {
      if ( a3 != 6 )
        return 4294967285LL;
      *a4 = v10 | 0x400;
    }
  }
  result = 1LL;
  *a5 = v8;
  return result;
}
