/*
 * XREFs of ?pSpConvertSpriteToMeta@@YGPAU_METASPRITE@@PAUHDEV__@@0PAVSPRITE@@@Z @ 0x1DF19D
 * Callers:
 *     _vSpDynamicModeChange@8 @ 0x9EE36 (_vSpDynamicModeChange@8.c)
 * Callees:
 *     ??0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z @ 0x304FA (--0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QAE@XZ @ 0x305EC (--1SPRITEDDIACCESS@@QAE@XZ.c)
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?vSpDeleteSprite@@YGXPAVSPRITE@@@Z @ 0x9ECB4 (-vSpDeleteSprite@@YGXPAVSPRITE@@@Z.c)
 *     ?pSpCreateSprite@@YGPAVSPRITE@@PAUHDEV__@@PAU_RECTL@@PAUHWND__@@PAU_POINTL@@@Z @ 0x9F136 (-pSpCreateSprite@@YGPAVSPRITE@@PAUHDEV__@@PAU_RECTL@@PAUHWND__@@PAU_POINTL@@@Z.c)
 *     ?pSpHintSpriteShape@@YGHPAVSPRITE@@PAUHBITMAP__@@H@Z @ 0x9F37A (-pSpHintSpriteShape@@YGHPAVSPRITE@@PAUHBITMAP__@@H@Z.c)
 *     ?bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z @ 0xA0A28 (-bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z.c)
 *     ?bSpTransferShape@@YGHPAVSPRITE@@0@Z @ 0x1DE52B (-bSpTransferShape@@YGHPAVSPRITE@@0@Z.c)
 *     ?vSpCreateExMirror@@YGXPAUHDEV__@@@Z @ 0x1E11AC (-vSpCreateExMirror@@YGXPAUHDEV__@@@Z.c)
 */

struct HDEV__ *__userpurge pSpConvertSpriteToMeta@<eax>(
        _BYTE **a1@<edx>,
        _DWORD *a2@<ecx>,
        HDEV a3,
        HDEV a4,
        struct SPRITE *a5)
{
  HDEV v5; // ebx
  struct HDEV__ *v6; // esi
  int v8; // ecx
  int v9; // ebx
  int *Sprite; // eax
  int *v11; // eax
  int v12; // eax
  _BYTE **v13; // eax
  unsigned int v14; // esi
  struct HDEV__ *v15; // ebx
  struct HDEV__ *v17; // edi
  HDEV v18; // [esp+0h] [ebp-94h]
  struct _POINTL *v19; // [esp+4h] [ebp-90h]
  _BYTE v20[112]; // [esp+Ch] [ebp-88h] BYREF
  _DWORD v21[2]; // [esp+7Ch] [ebp-18h] BYREF
  struct HDEV__ *v22; // [esp+84h] [ebp-10h]
  int *v23; // [esp+88h] [ebp-Ch]
  _BYTE **v24; // [esp+8Ch] [ebp-8h]
  unsigned int v25; // [esp+90h] [ebp-4h] BYREF

  v5 = a3;
  v6 = 0;
  v24 = a1;
  if ( *((_DWORD *)a3 + 10) )
  {
    v8 = a2[26];
    if ( v8 )
    {
      v6 = (struct HDEV__ *)PALLOCMEM2(4 * v8 + 20, 1836086087, 0);
      v22 = v6;
      if ( v6 )
      {
        v9 = 0;
        if ( a2[26] )
        {
          while ( 1 )
          {
            v25 = *(_DWORD *)(a2[27] + 4 * v9);
            SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v20, (struct PDEVOBJ *)&v25);
            Sprite = (int *)pSpCreateSprite(0, v25, *((HDEV *)a3 + 10), 0, (HWND)v18, v19);
            v23 = Sprite;
            if ( !Sprite )
              break;
            bSpTransferShape(Sprite, (int)a3);
            v23[34] = *((_DWORD *)a3 + 34);
            *((_DWORD *)a3 + 34) = 0;
            v21[0] = &v24[459][*((_DWORD *)a3 + 19) - *(_DWORD *)(v25 + 1836)];
            v21[1] = &v24[460][*((_DWORD *)a3 + 20) - *(_DWORD *)(v25 + 1840)];
            if ( !bSpUpdatePosition((struct _SURFOBJ *)v21, v23, 0, 0, (int)v18, (int)v19) )
            {
              vSpDeleteSprite(v23);
              break;
            }
            v11 = v23;
            *((_DWORD *)v6 + v9 + 4) = v23;
            v11[2] = (int)v6;
            SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v20);
            if ( (unsigned int)++v9 >= a2[26] )
              goto LABEL_8;
          }
          SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v20);
          if ( v9 )
          {
            v17 = v6 + v9 + 3;
            do
            {
              vSpDeleteSprite(*(_DWORD **)v17--);
              --v9;
            }
            while ( v9 );
          }
          Win32FreePool(v6);
          v5 = a3;
          v6 = 0;
        }
        else
        {
LABEL_8:
          v5 = a3;
          *(_DWORD *)v6 = a3[10];
          v12 = a2[26];
          *((_DWORD *)v6 + 2) = 0;
          *((_DWORD *)v6 + 3) = v12;
          v6[1] = (struct HDEV__)a2[28];
          a2[28] = v6;
          if ( (*(_BYTE *)a3 & 0x40) != 0 )
          {
            v25 = 0;
            if ( a2[26] )
            {
              v13 = (_BYTE **)(v6 + 4);
              v14 = v25;
              v24 = v13;
              do
              {
                pSpHintSpriteShape(*((HSURF *)a3 + 44), *v13, 0, (HBITMAP)v18, (int)v19);
                ++v14;
                v13 = ++v24;
              }
              while ( v14 < a2[26] );
              v6 = v22;
            }
            *((_DWORD *)v6 + 2) |= 0x40u;
          }
          if ( (*(_DWORD *)a3 & 0x100) != 0 )
          {
            v22 = 0;
            if ( a2[26] )
            {
              v15 = v22;
              do
              {
                **((_DWORD **)v6 + (_DWORD)v15 + 4) |= 0x100u;
                vSpCreateExMirror(v18);
                v15 = (struct HDEV__ *)((char *)v15 + 1);
              }
              while ( (unsigned int)v15 < a2[26] );
              v5 = a3;
            }
            *((_DWORD *)v6 + 2) |= 0x100u;
          }
        }
      }
    }
  }
  if ( (*(_BYTE *)v5 & 0x40) != 0 )
    pSpHintSpriteShape(0, v5, 0, (HBITMAP)v18, (int)v19);
  vSpDeleteSprite(v5);
  return v6;
}
