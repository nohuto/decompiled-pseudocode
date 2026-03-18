/*
 * XREFs of ?vBoundBox@@YAXPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x1C0094848
 * Callers:
 *     ?bInit@BEZIER32@@QEAAHPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x1C0094580 (-bInit@BEZIER32@@QEAAHPEAU_POINTFIX@@PEAU_RECTFX@@@Z.c)
 *     ?bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z @ 0x1C01423A0 (-bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vBoundBox(struct _POINTFIX *a1, struct _RECTFX *a2)
{
  FIX x; // r10d
  FIX v4; // eax
  FIX v5; // edx
  FIX v6; // r9d
  FIX v7; // eax
  FIX v8; // edx
  FIX *p_xRight; // r11
  FIX y; // edx
  FIX v11; // eax
  FIX v12; // r9d
  FIX v13; // r10d
  FIX v14; // edx
  FIX v15; // eax

  x = a1->x;
  v4 = a1[1].x;
  v5 = a1[2].x;
  v6 = a1[3].x;
  if ( a1->x < v4 )
  {
    p_xRight = &a2->xRight;
    if ( v5 > v6 )
    {
      if ( x >= v6 )
        x = a1[3].x;
      a2->xLeft = x;
      v7 = a1[2].x;
    }
    else
    {
      if ( x >= v5 )
        x = a1[2].x;
      a2->xLeft = x;
      v7 = a1[3].x;
    }
    v8 = a1[1].x;
  }
  else
  {
    if ( v5 < v6 )
    {
      if ( v4 >= v5 )
        v4 = a1[2].x;
      a2->xLeft = v4;
      v7 = a1[3].x;
    }
    else
    {
      if ( v4 >= v6 )
        v4 = a1[3].x;
      a2->xLeft = v4;
      v7 = a1[2].x;
    }
    v8 = a1->x;
    p_xRight = &a2->xRight;
  }
  if ( v8 <= v7 )
    v8 = v7;
  *p_xRight = v8;
  y = a1->y;
  v11 = a1[1].y;
  v12 = a1[2].y;
  v13 = a1[3].y;
  if ( y < v11 )
  {
    if ( v12 > v13 )
    {
      if ( y >= v13 )
        y = a1[3].y;
      a2->yTop = y;
      v14 = a1[1].y;
      goto LABEL_14;
    }
    if ( y >= v12 )
      y = a1[2].y;
    a2->yTop = y;
    v14 = a1[1].y;
  }
  else
  {
    if ( v12 >= v13 )
    {
      if ( v11 >= v13 )
        v11 = a1[3].y;
      a2->yTop = v11;
      v14 = a1->y;
LABEL_14:
      v15 = a1[2].y;
      goto LABEL_15;
    }
    if ( v11 >= v12 )
      v11 = a1[2].y;
    a2->yTop = v11;
    v14 = a1->y;
  }
  v15 = a1[3].y;
LABEL_15:
  if ( v14 <= v15 )
    v14 = v15;
  a2->yBottom = v14;
}
