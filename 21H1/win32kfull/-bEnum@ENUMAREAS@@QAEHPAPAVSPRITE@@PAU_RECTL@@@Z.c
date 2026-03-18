/*
 * XREFs of ?bEnum@ENUMAREAS@@QAEHPAPAVSPRITE@@PAU_RECTL@@@Z @ 0xE5C5A
 * Callers:
 *     ?bSpBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0xE52D4 (-bSpBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUS.c)
 *     ?bSpBltScreenToScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x1DD39B (-bSpBltScreenToScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_.c)
 *     ?bSpTearDownSprites@@YGHPAUHDEV__@@PAU_RECTL@@H@Z @ 0x1DE451 (-bSpTearDownSprites@@YGHPAUHDEV__@@PAU_RECTL@@H@Z.c)
 *     ?vSpBigUnderlayCopy@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E015A (-vSpBigUnderlayCopy@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?vSpDeviceControlSprites@@YGXPAUHDEV__@@PAVEWNDOBJ@@K@Z @ 0x1E1301 (-vSpDeviceControlSprites@@YGXPAUHDEV__@@PAVEWNDOBJ@@K@Z.c)
 *     ?vSpRedrawArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@H@Z @ 0x1E1DFF (-vSpRedrawArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YGXPAU_SPRITESTATE@@PAU_RECTL@@@Z @ 0x1E1FC9 (-vSpRedrawAreaExMirror@@YGXPAU_SPRITESTATE@@PAU_RECTL@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_RECTL@@PAU_CLIPOBJ@@H@Z @ 0x1E28CD (-vSpUpdateLockedScreenAreas@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_RECTL@@PAU_CLIPOBJ@@H@Z.c)
 *     _vSpUnTearDownSprites@12 @ 0x1E3F3E (_vSpUnTearDownSprites@12.c)
 * Callees:
 *     <none>
 */

int __thiscall ENUMAREAS::bEnum(ENUMAREAS *this, struct SPRITE **a2, struct _RECTL *a3)
{
  LONG *i; // esi
  LONG v4; // eax
  LONG v5; // eax
  int v6; // ebx
  _DWORD *v7; // esi
  LONG v9; // eax
  int *v10; // esi
  int v11; // eax
  int v12; // edx
  int v13; // eax
  _DWORD *v14; // edx
  int *v15; // edx
  int v16; // eax
  LONG v17; // eax
  int v18; // esi
  int v19; // eax

  i = (LONG *)*((_DWORD *)this + 12);
  *((_DWORD *)this + 13) = *((_DWORD *)this + 11);
  *((_DWORD *)this + 14) = i;
  *a2 = (struct SPRITE *)i[2];
  v4 = *i;
  if ( *i <= *((_DWORD *)this + 1) )
    v4 = *((_DWORD *)this + 1);
  a3->left = v4;
  v5 = i[1];
  if ( v5 >= *((_DWORD *)this + 3) )
    v5 = *((_DWORD *)this + 3);
  a3->right = v5;
  a3->top = *((_DWORD *)this + 9);
  a3->bottom = *((_DWORD *)this + 10);
  v6 = *(_DWORD *)this;
  if ( (*(_DWORD *)this & 1) != 0 )
  {
    if ( *i > *((_DWORD *)this + 1) )
    {
      do
      {
        v17 = *i;
        i -= 3;
      }
      while ( v17 == *i );
    }
    else
    {
      v14 = (_DWORD *)*((_DWORD *)this + 11);
      if ( v6 == 1 )
      {
        if ( v14[1] >= *((_DWORD *)this + 4) )
          return 0;
        v15 = (_DWORD *)((char *)v14 + v14[2]);
        v16 = *((_DWORD *)this + 2);
      }
      else
      {
        v16 = *((_DWORD *)this + 2);
        if ( *v14 <= v16 )
          return 0;
        v15 = (_DWORD *)((char *)v14 - v14[3]);
      }
      *((_DWORD *)this + 11) = v15;
      v18 = *v15;
      if ( *v15 <= v16 )
        v18 = v16;
      *((_DWORD *)this + 9) = v18;
      v19 = v15[1];
      if ( v19 >= *((_DWORD *)this + 4) )
        v19 = *((_DWORD *)this + 4);
      *((_DWORD *)this + 10) = v19;
      for ( i = (int *)((char *)v15 + v15[2] - 12); *i >= *((_DWORD *)this + 3); i -= 3 )
        ;
    }
  }
  else if ( i[1] < *((_DWORD *)this + 3) )
  {
    do
    {
      v9 = *i;
      i += 3;
    }
    while ( v9 == *i );
  }
  else
  {
    v7 = (_DWORD *)*((_DWORD *)this + 11);
    if ( v6 )
    {
      v11 = *((_DWORD *)this + 2);
      if ( *v7 <= v11 )
        return 0;
      v10 = (_DWORD *)((char *)v7 - v7[3]);
    }
    else
    {
      if ( v7[1] >= *((_DWORD *)this + 4) )
        return 0;
      v10 = (_DWORD *)((char *)v7 + v7[2]);
      v11 = *((_DWORD *)this + 2);
    }
    *((_DWORD *)this + 11) = v10;
    v12 = *v10;
    if ( *v10 <= v11 )
      v12 = v11;
    *((_DWORD *)this + 9) = v12;
    v13 = v10[1];
    if ( v13 >= *((_DWORD *)this + 4) )
      v13 = *((_DWORD *)this + 4);
    *((_DWORD *)this + 10) = v13;
    for ( i = v10 + 4; i[1] <= *((_DWORD *)this + 1); i += 3 )
      ;
  }
  *((_DWORD *)this + 12) = i;
  return 1;
}
