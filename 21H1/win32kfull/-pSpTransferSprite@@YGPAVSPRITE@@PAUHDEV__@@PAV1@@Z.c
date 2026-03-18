/*
 * XREFs of ?pSpTransferSprite@@YGPAVSPRITE@@PAUHDEV__@@PAV1@@Z @ 0x1DF909
 * Callers:
 *     _vSpDynamicModeChange@8 @ 0x9EE36 (_vSpDynamicModeChange@8.c)
 * Callees:
 *     ?vSpDeleteSprite@@YGXPAVSPRITE@@@Z @ 0x9ECB4 (-vSpDeleteSprite@@YGXPAVSPRITE@@@Z.c)
 *     ?pSpCreateSprite@@YGPAVSPRITE@@PAUHDEV__@@PAU_RECTL@@PAUHWND__@@PAU_POINTL@@@Z @ 0x9F136 (-pSpCreateSprite@@YGPAVSPRITE@@PAUHDEV__@@PAU_RECTL@@PAUHWND__@@PAU_POINTL@@@Z.c)
 *     ?pSpHintSpriteShape@@YGHPAVSPRITE@@PAUHBITMAP__@@H@Z @ 0x9F37A (-pSpHintSpriteShape@@YGHPAVSPRITE@@PAUHBITMAP__@@H@Z.c)
 *     ?bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z @ 0xA0A28 (-bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z.c)
 *     ?bSpTransferShape@@YGHPAVSPRITE@@0@Z @ 0x1DE52B (-bSpTransferShape@@YGHPAVSPRITE@@0@Z.c)
 *     ?vSpCreateExMirror@@YGXPAUHDEV__@@@Z @ 0x1E11AC (-vSpCreateExMirror@@YGXPAUHDEV__@@@Z.c)
 */

struct SPRITE *__fastcall pSpTransferSprite(int a1, int a2)
{
  int v2; // ebx
  HDEV v3; // eax
  int *Sprite; // edi
  int *v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // ecx
  _DWORD *v9; // eax
  unsigned int v10; // edx
  _DWORD *v11; // ecx
  int v13; // eax
  unsigned int v14; // edx
  int **v15; // ecx
  HDEV v16; // [esp+0h] [ebp-20h]
  struct _POINTL *v17; // [esp+4h] [ebp-1Ch]
  int v18; // [esp+10h] [ebp-10h] BYREF
  int v19; // [esp+14h] [ebp-Ch]
  int v20; // [esp+18h] [ebp-8h]
  int v21; // [esp+1Ch] [ebp-4h]

  v2 = a2;
  v21 = a1;
  v20 = a2;
  v3 = *(HDEV *)(a2 + 40);
  Sprite = 0;
  if ( !v3 || (Sprite = (int *)pSpCreateSprite(0, a1, v3, 0, (HWND)v16, v17)) == 0 )
  {
LABEL_5:
    v9 = *(_DWORD **)(v2 + 8);
    if ( v9 )
    {
      v9[2] |= 4u;
      v10 = 0;
      if ( v9[3] )
      {
        v11 = v9 + 4;
        do
        {
          if ( *v11 == v2 )
            *v11 = 0;
          ++v10;
          ++v11;
        }
        while ( v10 < v9[3] );
      }
    }
    goto LABEL_11;
  }
  v5 = *(int **)(v2 + 12);
  v6 = *(_DWORD *)(v2 + 80);
  v18 = *(_DWORD *)(v2 + 76);
  v19 = v6;
  v7 = *v5;
  v8 = *(_DWORD *)(v7 + 1840);
  v2 = v20;
  v18 += *(_DWORD *)(v7 + 1836) - *(_DWORD *)(v21 + 1836);
  v19 = v8 - *(_DWORD *)(v21 + 1840) + v6;
  bSpTransferShape(Sprite, v20);
  Sprite[34] = *(_DWORD *)(v20 + 136);
  *(_DWORD *)(v2 + 136) = 0;
  if ( !bSpUpdatePosition((struct _SURFOBJ *)&v18, Sprite, 0, 0, (int)v16, (int)v17) )
  {
    vSpDeleteSprite(Sprite);
    Sprite = 0;
    goto LABEL_5;
  }
  v13 = *(_DWORD *)(v2 + 8);
  if ( v13 )
  {
    v14 = 0;
    if ( *(_DWORD *)(v13 + 12) )
    {
      v15 = (int **)(v13 + 16);
      do
      {
        if ( *v15 == (int *)v2 )
        {
          *v15 = Sprite;
          Sprite[2] = v13;
        }
        ++v14;
        ++v15;
      }
      while ( v14 < *(_DWORD *)(v13 + 12) );
    }
  }
LABEL_11:
  if ( (*(_BYTE *)v2 & 0x40) != 0 )
  {
    if ( Sprite )
      pSpHintSpriteShape(*(HSURF *)(v2 + 176), Sprite, 0, (HBITMAP)v16, (int)v17);
    pSpHintSpriteShape(0, (_BYTE *)v2, 0, (HBITMAP)v16, (int)v17);
  }
  if ( (*(_DWORD *)v2 & 0x100) != 0 && Sprite )
  {
    *Sprite |= 0x100u;
    vSpCreateExMirror(v16);
  }
  vSpDeleteSprite((_DWORD *)v2);
  return (struct SPRITE *)Sprite;
}
