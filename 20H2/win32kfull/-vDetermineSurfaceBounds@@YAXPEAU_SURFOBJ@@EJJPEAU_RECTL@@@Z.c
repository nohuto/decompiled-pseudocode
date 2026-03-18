/*
 * XREFs of ?vDetermineSurfaceBounds@@YAXPEAU_SURFOBJ@@EJJPEAU_RECTL@@@Z @ 0x1C0087430
 * Callers:
 *     ?vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z @ 0x1C0087364 (-vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vDetermineSurfaceBounds(struct _SURFOBJ *a1, char a2, LONG a3, LONG a4, struct _RECTL *a5)
{
  __int64 iBitmapFormat; // rax
  __int64 lDelta; // r11
  int v8; // r14d
  int v11; // r12d
  LONG cx; // ecx
  char *pvScan0; // r9
  unsigned int v15; // r10d
  int v16; // ecx
  char *v17; // rcx
  char *v18; // rax
  unsigned int v19; // edx
  int v20; // r8d
  LONG *p_right; // rax
  char *v22; // rdx
  char *v23; // rax
  unsigned int v24; // r8d
  char *j; // r8
  char *v26; // r9
  int v27; // ebx
  char *v28; // r8
  char *v29; // rcx
  int v30; // r9d
  char v31; // r8
  int v32; // eax
  char *v33; // rcx
  char i; // r8

  iBitmapFormat = a1->iBitmapFormat;
  lDelta = a1->lDelta;
  v8 = 0;
  v11 = *((_DWORD *)&galBitsPerPixel + iBitmapFormat);
  cx = a1->sizlBitmap.cx;
  pvScan0 = (char *)a1->pvScan0;
  v15 = (cx * v11 + 7) >> 3;
  if ( (_DWORD)iBitmapFormat == 1 )
  {
    v16 = cx & 7;
    if ( v16 )
    {
      v31 = (256 >> v16) - 1;
      v32 = a4 - a3;
      v33 = &pvScan0[a3 * (int)lDelta - 1 + v15];
      if ( a2 )
      {
        for ( ; v32; --v32 )
        {
          *v33 |= v31;
          v33 += lDelta;
        }
      }
      else
      {
        for ( i = ~v31; v32; --v32 )
        {
          *v33 &= i;
          v33 += lDelta;
        }
      }
    }
  }
  v17 = &pvScan0[a3 * (int)lDelta];
  while ( 1 )
  {
    v18 = v17;
    v19 = v15;
    if ( v15 )
      break;
LABEL_7:
    v17 += lDelta;
    if ( ++a3 >= a4 )
    {
      v20 = 0x80000000;
      a5->left = 0x7FFFFFFF;
      a5->top = 0x7FFFFFFF;
      a5->bottom = 0x80000000;
      p_right = &a5->right;
      goto LABEL_26;
    }
  }
  while ( *v18 == a2 )
  {
    ++v18;
    if ( !--v19 )
      goto LABEL_7;
  }
  v22 = &pvScan0[(int)lDelta * (a4 - 1)];
LABEL_10:
  v23 = v22;
  v24 = v15;
  while ( *v23 == a2 )
  {
    ++v23;
    if ( !--v24 )
    {
      v22 -= lDelta;
      --a4;
      goto LABEL_10;
    }
  }
  for ( j = v17; ; ++j )
  {
    v26 = j;
    v27 = a4 - a3;
    if ( a4 != a3 )
      break;
LABEL_18:
    ++v8;
  }
  while ( *v26 == a2 )
  {
    v26 += lDelta;
    if ( !--v27 )
      goto LABEL_18;
  }
  v28 = &v17[v15 - 1];
LABEL_20:
  v29 = v28;
  v30 = a4 - a3;
  while ( *v29 == a2 )
  {
    v29 += lDelta;
    if ( !--v30 )
    {
      --v28;
      --v15;
      goto LABEL_20;
    }
  }
  a5->top = a3;
  a5->left = 8 * v8 / v11;
  a5->bottom = a4;
  v20 = (int)(v11 - 1 + 8 * v15) / v11;
  p_right = &a5->right;
  a5->right = v20;
  if ( v20 >= a1->sizlBitmap.cx )
    v20 = a1->sizlBitmap.cx;
LABEL_26:
  *p_right = v20;
}
