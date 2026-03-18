/*
 * XREFs of ?pSpTransferMetaSprite@@YGPAU_METASPRITE@@PAUHDEV__@@0PAU1@@Z @ 0x1DF57A
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

struct HDEV__ *__userpurge pSpTransferMetaSprite@<eax>(
        DHPDEV a1@<edx>,
        int a2@<ecx>,
        HDEV a3,
        HDEV a4,
        struct _METASPRITE *a5)
{
  HDEV v5; // edi
  LONG *cx; // ebx
  struct HDEV__ *v7; // esi
  size_t v8; // ecx
  int v9; // ecx
  ULONG iUniq; // edx
  _DWORD *v11; // ecx
  int *v12; // eax
  HDEV v13; // edx
  _DWORD *v14; // edx
  LONG *v15; // ecx
  LONG v16; // eax
  ULONG v17; // ecx
  LONG v18; // ecx
  bool v19; // cf
  int v20; // eax
  bool v21; // zf
  ULONG iBitmapFormat; // eax
  _DWORD *v23; // ecx
  HDEV hdev; // edx
  int v25; // edx
  int v26; // ebx
  ULONG v27; // eax
  int v28; // edx
  LONG updated; // eax
  int *v30; // ecx
  unsigned int lDelta; // eax
  HSURF cy; // edi
  _BYTE **v33; // ebx
  char *pvScan0; // ecx
  _DWORD **v35; // ebx
  HDEV v36; // eax
  _BYTE **v37; // ebx
  _BYTE *v38; // ecx
  HDEV v39; // ecx
  HDEV v40; // eax
  _BYTE **v41; // ebx
  _BYTE *v42; // ecx
  HDEV v44; // [esp+0h] [ebp-12Ch]
  struct _POINTL *v45; // [esp+4h] [ebp-128h]
  _BYTE v46[112]; // [esp+Ch] [ebp-120h] BYREF
  _BYTE v47[112]; // [esp+7Ch] [ebp-B0h] BYREF
  struct _SURFOBJ v48; // [esp+ECh] [ebp-40h] BYREF
  _DWORD *v49; // [esp+120h] [ebp-Ch] BYREF
  HDEV v50; // [esp+124h] [ebp-8h]
  int *Sprite; // [esp+128h] [ebp-4h]
  HDEV v52; // [esp+134h] [ebp+8h]
  HDEV v53; // [esp+134h] [ebp+8h]

  v5 = a3;
  cx = (LONG *)(a2 + 64);
  v7 = 0;
  v48.dhpdev = a1;
  v48.pvBits = 0;
  v48.sizlBitmap.cx = a2 + 64;
  if ( *(_DWORD *)a3 )
  {
    v8 = 4 * *(_DWORD *)(a2 + 104) + 20;
    if ( ((_BYTE)a3[2] & 4) == 0 )
    {
      v7 = (struct HDEV__ *)PALLOCMEM2(v8, 1836086087, 1);
      if ( v7 )
      {
        v9 = *((_DWORD *)a3 + 2);
        iUniq = 0;
        memset(&v48.lDelta, 0, 16);
        v48.cjBits = v9 & 0x40;
        v48.pvScan0 = (PVOID)(v9 & 0x100);
        v48.sizlBitmap.cy = 0;
        if ( cx[10] )
        {
          v11 = v7 + 4;
          v49 = v7 + 4;
          do
          {
            v12 = 0;
            Sprite = 0;
            if ( *((_DWORD *)a3 + 3) )
            {
              v13 = a3 + 4;
              v50 = a3 + 4;
              do
              {
                v14 = *(_DWORD **)v13;
                if ( v14 )
                {
                  if ( v48.cjBits && !v48.sizlBitmap.cy )
                    v48.sizlBitmap.cy = v14[44];
                  v15 = (LONG *)v14[3];
                  v16 = *v15;
                  if ( cx == v15 )
                  {
                    *v49 = v14;
                    *(_DWORD *)v50 = 0;
                    v14[2] = v7;
                  }
                  v17 = *(_DWORD *)(v16 + 1404);
                  if ( v48.iBitmapFormat < v17 )
                  {
                    *(_DWORD *)&v48.iType = v14;
                    v48.lDelta = v16;
                    v48.iBitmapFormat = v17;
                  }
                  v12 = Sprite;
                }
                v12 = (int *)((char *)v12 + 1);
                v13 = v50 + 1;
                Sprite = v12;
                ++v50;
              }
              while ( (unsigned int)v12 < *((_DWORD *)a3 + 3) );
              v11 = v49;
              iUniq = v48.iUniq;
            }
            ++iUniq;
            ++v11;
            v48.iUniq = iUniq;
            v49 = v11;
          }
          while ( iUniq < cx[10] );
        }
        *(_DWORD *)v7 = *(_DWORD *)a3;
        v18 = cx[10];
        v19 = v48.cjBits != 0;
        *((_DWORD *)v7 + 3) = v18;
        v20 = v19 ? 0x40 : 0;
        v21 = v48.pvScan0 == 0;
        *((_DWORD *)v7 + 2) = v20;
        if ( !v21 )
          *((_DWORD *)v7 + 2) = v20 | 0x100;
        iBitmapFormat = 0;
        v48.iBitmapFormat = 0;
        if ( v18 )
        {
          v23 = v7 + 4;
          hdev = (HDEV)(-16 - (_DWORD)v7);
          v50 = v7 + 4;
          v48.hdev = (HDEV)(-16 - (_DWORD)v7);
          do
          {
            if ( !*v23 )
            {
              v49 = *(_DWORD **)((char *)v23 + (_DWORD)hdev + cx[11]);
              SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v46, (struct PDEVOBJ *)&v49);
              Sprite = (int *)pSpCreateSprite(0, (int)v49, *(HDEV *)a3, 0, (HWND)v44, v45);
              if ( Sprite )
              {
                v48.iUniq = v48.lDelta;
                SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v47, (struct PDEVOBJ *)&v48.iUniq);
                bSpTransferShape(Sprite, *(int *)&v48.iType);
                v25 = *(_DWORD *)&v48.iType;
                v26 = *(_DWORD *)&v48.iType;
                Sprite[34] = *(_DWORD *)(*(_DWORD *)&v48.iType + 136);
                v27 = v48.iUniq;
                *(_DWORD *)(v25 + 136) = 0;
                v28 = *(_DWORD *)(v27 + 1840);
                v48.dhsurf = (DHSURF)(*(_DWORD *)(v26 + 76) + *(_DWORD *)(v27 + 1836) - v49[459]);
                v48.hsurf = (HSURF)(v28 + *(_DWORD *)(v26 + 80) - v49[460]);
                updated = bSpUpdatePosition(&v48, Sprite, 0, 0, (int)v44, (int)v45);
                cx = (LONG *)v48.sizlBitmap.cx;
                v30 = Sprite;
                if ( updated )
                {
                  *(_DWORD *)v50 = Sprite;
                  v30[2] = (int)v7;
                }
                else
                {
                  vSpDeleteSprite(Sprite);
                  v48.pvBits = (PVOID)1;
                }
                SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v47);
              }
              else
              {
                v48.pvBits = (PVOID)1;
              }
              SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v46);
              if ( v48.pvBits )
                goto LABEL_48;
              v23 = v50;
              iBitmapFormat = v48.iBitmapFormat;
              hdev = v48.hdev;
            }
            ++iBitmapFormat;
            ++v23;
            v48.iBitmapFormat = iBitmapFormat;
            v50 = (HDEV)v23;
          }
          while ( iBitmapFormat < *((_DWORD *)v7 + 3) );
        }
        v21 = v48.cjBits == 0;
        *((_DWORD *)v7 + 1) = cx[12];
        cx[12] = (LONG)v7;
        if ( !v21 )
        {
          lDelta = 0;
          v48.lDelta = 0;
          if ( *((_DWORD *)v7 + 3) )
          {
            cy = (HSURF)v48.sizlBitmap.cy;
            v33 = (_BYTE **)(v7 + 4);
            do
            {
              if ( (**v33 & 0x40) == 0 )
              {
                pSpHintSpriteShape(cy, *v33, 0, (HBITMAP)v44, (int)v45);
                lDelta = v48.lDelta;
              }
              ++lDelta;
              ++v33;
              v48.lDelta = lDelta;
            }
            while ( lDelta < *((_DWORD *)v7 + 3) );
            v5 = a3;
          }
        }
        if ( v48.pvScan0 )
        {
          pvScan0 = 0;
          v48.pvScan0 = 0;
          if ( *((_DWORD *)v7 + 3) )
          {
            v35 = (_DWORD **)(v7 + 4);
            do
            {
              if ( (**v35 & 0x100) == 0 )
              {
                vSpCreateExMirror(v44);
                pvScan0 = (char *)v48.pvScan0;
                **v35 |= 0x100u;
              }
              ++pvScan0;
              ++v35;
              v48.pvScan0 = pvScan0;
            }
            while ( (unsigned int)pvScan0 < *((_DWORD *)v7 + 3) );
            v5 = a3;
          }
        }
      }
    }
  }
LABEL_48:
  v36 = 0;
  v52 = 0;
  if ( *((_DWORD *)v5 + 3) )
  {
    v37 = (_BYTE **)(v5 + 4);
    do
    {
      v38 = *v37;
      if ( *v37 )
      {
        if ( (*v38 & 0x40) != 0 )
        {
          pSpHintSpriteShape(0, v38, 0, (HBITMAP)v44, (int)v45);
          v38 = *v37;
        }
        vSpDeleteSprite(v38);
        v36 = v52;
      }
      v36 = (HDEV)((char *)v36 + 1);
      ++v37;
      v52 = v36;
    }
    while ( (unsigned int)v36 < *((_DWORD *)v5 + 3) );
  }
  v39 = (HDEV)*((_DWORD *)v48.dhpdev + 28);
  if ( v39 == v5 )
  {
    *(_DWORD *)((struct HDEV__ *)v48.dhpdev + 28) = v5[1];
  }
  else
  {
    while ( *((HDEV *)v39 + 1) != v5 )
      v39 = (HDEV)*((_DWORD *)v39 + 1);
    v39[1] = v5[1];
  }
  if ( v48.pvBits )
  {
    v40 = 0;
    v53 = 0;
    if ( *((_DWORD *)v7 + 3) )
    {
      v41 = (_BYTE **)(v7 + 4);
      do
      {
        v42 = *v41;
        if ( *v41 )
        {
          if ( (*v42 & 0x40) != 0 )
          {
            pSpHintSpriteShape(0, v42, 0, (HBITMAP)v44, (int)v45);
            v42 = *v41;
          }
          vSpDeleteSprite(v42);
          v40 = v53;
        }
        v40 = (HDEV)((char *)v40 + 1);
        ++v41;
        v53 = v40;
      }
      while ( (unsigned int)v40 < *((_DWORD *)v7 + 3) );
    }
    Win32FreePool(v7);
    v7 = 0;
  }
  Win32FreePool(v5);
  return v7;
}
