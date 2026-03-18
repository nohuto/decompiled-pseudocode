/*
 * XREFs of ?pSpConvertSpriteFromMeta@@YGPAVSPRITE@@PAUHDEV__@@0PAU_METASPRITE@@@Z @ 0x1DF031
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

struct SPRITE *__userpurge pSpConvertSpriteFromMeta@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        HDEV a3,
        HDEV a4,
        struct _METASPRITE *a5)
{
  HDEV v5; // esi
  int *v6; // edi
  HDEV v7; // eax
  int v8; // ecx
  int v9; // ebx
  unsigned int v10; // edi
  HDEV v11; // esi
  int v12; // edx
  int *Sprite; // eax
  int *v14; // eax
  int v15; // eax
  int v16; // eax
  _BYTE **v17; // ebx
  _BYTE *v18; // ecx
  HDEV v19; // ecx
  HDEV v21; // [esp+0h] [ebp-2Ch]
  struct _POINTL *v22; // [esp+4h] [ebp-28h]
  int v24; // [esp+14h] [ebp-18h] BYREF
  int v25; // [esp+18h] [ebp-14h]
  HDEV v26; // [esp+1Ch] [ebp-10h]
  int *v27; // [esp+20h] [ebp-Ch]
  unsigned int v28; // [esp+24h] [ebp-8h]
  HDEV v29; // [esp+34h] [ebp+8h]

  v5 = a3;
  v6 = 0;
  v25 = a2;
  v7 = *(HDEV *)a3;
  v27 = 0;
  v26 = v7;
  if ( v7 )
  {
    v8 = *((_DWORD *)a3 + 3);
    v9 = 0;
    v28 = 0;
    if ( v8 )
    {
      v10 = v28;
      v11 = a3 + 4;
      do
      {
        v12 = *(_DWORD *)v11;
        if ( *(_DWORD *)v11 && v10 < *(_DWORD *)(**(_DWORD **)(v12 + 12) + 1404) )
        {
          v9 = *(_DWORD *)v11;
          v10 = *(_DWORD *)(**(_DWORD **)(v12 + 12) + 1404);
        }
        ++v11;
        --v8;
      }
      while ( v8 );
      v5 = a3;
      v6 = v27;
      if ( v9 )
      {
        Sprite = (int *)pSpCreateSprite(0, v25, v26, 0, (HWND)v21, v22);
        v6 = Sprite;
        if ( Sprite )
        {
          bSpTransferShape(Sprite, v9);
          v6[34] = *(_DWORD *)(v9 + 136);
          v14 = *(int **)(v9 + 12);
          *(_DWORD *)(v9 + 136) = 0;
          v15 = *v14;
          v24 = *(_DWORD *)(v9 + 76) + *(_DWORD *)(v15 + 1836);
          v25 = *(_DWORD *)(v9 + 80) + *(_DWORD *)(v15 + 1840);
          if ( !bSpUpdatePosition((struct _SURFOBJ *)&v24, v6, 0, 0, (int)v21, (int)v22) )
          {
            vSpDeleteSprite(v6);
            v6 = 0;
          }
          if ( v6 )
          {
            v16 = *(_DWORD *)v9;
            if ( (*(_DWORD *)v9 & 0x40) != 0 )
            {
              pSpHintSpriteShape(*(HSURF *)(v9 + 176), v6, 0, (HBITMAP)v21, (int)v22);
              v16 = *(_DWORD *)v9;
            }
            if ( (v16 & 0x100) != 0 )
            {
              *v6 |= 0x100u;
              vSpCreateExMirror(v21);
            }
          }
        }
      }
    }
  }
  v29 = 0;
  if ( *((_DWORD *)v5 + 3) )
  {
    v17 = (_BYTE **)(v5 + 4);
    do
    {
      v18 = *v17;
      if ( (**v17 & 0x40) != 0 )
      {
        pSpHintSpriteShape(0, v18, 0, (HBITMAP)v21, (int)v22);
        v18 = *v17;
      }
      vSpDeleteSprite(v18);
      ++v17;
      v29 = (HDEV)((char *)v29 + 1);
    }
    while ( (unsigned int)v29 < *((_DWORD *)v5 + 3) );
  }
  v19 = *(HDEV *)(a1 + 112);
  if ( v19 == v5 )
  {
    *(_DWORD *)(struct HDEV__ *)(a1 + 112) = v5[1];
  }
  else
  {
    while ( *((HDEV *)v19 + 1) != v5 )
      v19 = (HDEV)*((_DWORD *)v19 + 1);
    v19[1] = v5[1];
  }
  Win32FreePool(v5);
  return (struct SPRITE *)v6;
}
