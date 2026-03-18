/*
 * XREFs of ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C0282314
 * Callers:
 *     vSpDynamicModeChange @ 0x1C004C970 (vSpDynamicModeChange.c)
 * Callees:
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C004C7B8 (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C004DDE8 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00503BC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00506C4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x1C0281D84 (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C02839A8 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 */

struct SPRITE *__fastcall pSpConvertSpriteFromMeta(HDEV a1, _QWORD *a2, struct _METASPRITE *a3)
{
  HWND v3; // r11
  unsigned int v4; // ebx
  struct SPRITE *v7; // rsi
  unsigned int v8; // eax
  int *v9; // r14
  unsigned int v10; // r8d
  char *v11; // r9
  __int64 v12; // r10
  struct SPRITE *Sprite; // rax
  __int64 *v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  struct SPRITE *v17; // rcx
  __int64 v18; // rcx
  __int64 i; // rax
  struct _POINTL v21; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(HWND *)a3;
  v4 = 0;
  v7 = 0LL;
  if ( *(_QWORD *)a3 )
  {
    v8 = *((_DWORD *)a3 + 5);
    v9 = 0LL;
    v10 = 0;
    if ( v8 )
    {
      v11 = (char *)a3 + 24;
      v12 = v8;
      do
      {
        if ( *(_QWORD *)v11 && v10 < *(_DWORD *)(**(_QWORD **)(*(_QWORD *)v11 + 16LL) + 2108LL) )
        {
          v9 = *(int **)v11;
          v10 = *(_DWORD *)(**(_QWORD **)(*(_QWORD *)v11 + 16LL) + 2108LL);
        }
        v11 += 8;
        --v12;
      }
      while ( v12 );
      if ( v9 )
      {
        Sprite = pSpCreateSprite(a1, 0LL, v3, 0LL);
        v7 = Sprite;
        if ( Sprite )
        {
          bSpTransferShape(Sprite, (struct SPRITE *)v9);
          *((_QWORD *)v7 + 24) = *((_QWORD *)v9 + 24);
          v14 = (__int64 *)*((_QWORD *)v9 + 2);
          *((_QWORD *)v9 + 24) = 0LL;
          v15 = *v14;
          v21.x = v9[28] + *(_DWORD *)(v15 + 2584);
          v21.y = v9[29] + *(_DWORD *)(v15 + 2588);
          if ( !(unsigned int)bSpUpdatePosition(v7, &v21, 0, 0) )
          {
            vSpDeleteSprite(v7);
            v7 = 0LL;
          }
          if ( v7 )
          {
            v16 = *v9;
            if ( (*v9 & 0x40) != 0 )
            {
              pSpHintSpriteShape(v7, *((HSURF *)v9 + 30), 0);
              v16 = *v9;
            }
            if ( (v16 & 0x100) != 0 )
            {
              *(_DWORD *)v7 |= 0x100u;
              vSpCreateExMirror(**((HDEV **)v7 + 2));
            }
          }
        }
      }
    }
  }
  if ( *((_DWORD *)a3 + 5) )
  {
    do
    {
      v17 = (struct SPRITE *)*((_QWORD *)a3 + v4 + 3);
      if ( (*(_DWORD *)v17 & 0x40) != 0 )
      {
        pSpHintSpriteShape(v17, 0LL, 0);
        v17 = (struct SPRITE *)*((_QWORD *)a3 + v4 + 3);
      }
      vSpDeleteSprite(v17);
      ++v4;
    }
    while ( v4 < *((_DWORD *)a3 + 5) );
  }
  v18 = a2[20];
  if ( (struct _METASPRITE *)v18 == a3 )
  {
    a2[20] = *((_QWORD *)a3 + 1);
  }
  else
  {
    for ( i = *(_QWORD *)(v18 + 8); (struct _METASPRITE *)i != a3; i = *(_QWORD *)(i + 8) )
      v18 = i;
    *(_QWORD *)(v18 + 8) = *((_QWORD *)a3 + 1);
  }
  Win32FreePool(a3);
  return v7;
}
