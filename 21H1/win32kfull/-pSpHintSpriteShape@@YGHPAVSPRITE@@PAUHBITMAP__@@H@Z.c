/*
 * XREFs of ?pSpHintSpriteShape@@YGHPAVSPRITE@@PAUHBITMAP__@@H@Z @ 0x9F37A
 * Callers:
 *     ?GdiHintSpriteShape@@YGHPAUHDEV__@@PAUHWND__@@PAUHBITMAP__@@HH@Z @ 0x9F2D8 (-GdiHintSpriteShape@@YGHPAUHDEV__@@PAUHWND__@@PAUHBITMAP__@@HH@Z.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YGHPAUHDEV__@@PAUHWND__@@PAUHBITMAP__@@H@Z @ 0x1DAA49 (-GdiHintSpriteShapeDelayDelete@@YGHPAUHDEV__@@PAUHWND__@@PAUHBITMAP__@@H@Z.c)
 *     ?pSpConvertSpriteFromMeta@@YGPAVSPRITE@@PAUHDEV__@@0PAU_METASPRITE@@@Z @ 0x1DF031 (-pSpConvertSpriteFromMeta@@YGPAVSPRITE@@PAUHDEV__@@0PAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YGPAU_METASPRITE@@PAUHDEV__@@0PAVSPRITE@@@Z @ 0x1DF19D (-pSpConvertSpriteToMeta@@YGPAU_METASPRITE@@PAUHDEV__@@0PAVSPRITE@@@Z.c)
 *     ?pSpMoveSpriteFromMeta@@YGPAVSPRITE@@PAUHDEV__@@0PAU_METASPRITE@@K@Z @ 0x1DF497 (-pSpMoveSpriteFromMeta@@YGPAVSPRITE@@PAUHDEV__@@0PAU_METASPRITE@@K@Z.c)
 *     ?pSpTransferMetaSprite@@YGPAU_METASPRITE@@PAUHDEV__@@0PAU1@@Z @ 0x1DF57A (-pSpTransferMetaSprite@@YGPAU_METASPRITE@@PAUHDEV__@@0PAU1@@Z.c)
 *     ?pSpTransferSprite@@YGPAVSPRITE@@PAUHDEV__@@PAV1@@Z @ 0x1DF909 (-pSpTransferSprite@@YGPAVSPRITE@@PAUHDEV__@@PAV1@@Z.c)
 * Callees:
 *     ??0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z @ 0x304FA (--0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QAE@XZ @ 0x305EC (--1SPRITEDDIACCESS@@QAE@XZ.c)
 *     ?vSpDeleteShape@@YGXPAVSPRITE@@@Z @ 0x9EDE8 (-vSpDeleteShape@@YGXPAVSPRITE@@@Z.c)
 *     ?bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z @ 0xA0A28 (-bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z.c)
 *     ?vSpRemoveShapeHint@@YGXPAVSPRITE@@H@Z @ 0xA1244 (-vSpRemoveShapeHint@@YGXPAVSPRITE@@H@Z.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __userpurge pSpHintSpriteShape@<eax>(HSURF a1@<edx>, _BYTE *a2@<ecx>, struct SPRITE *a3, HBITMAP a4, int a5)
{
  HSURF v6; // eax
  int v7; // ebx
  int v8; // edi
  int v9; // eax
  SURFOBJ *v11; // eax
  SURFOBJ *v12; // ecx
  int v13; // eax
  LONG cy; // edi
  struct SPRITE **v15; // eax
  struct SPRITE *v16; // [esp+0h] [ebp-84h]
  int v17; // [esp+4h] [ebp-80h]
  _BYTE v18[116]; // [esp+Ch] [ebp-78h] BYREF
  HSURF v19; // [esp+80h] [ebp-4h]

  v6 = a1;
  v7 = 0;
  v19 = a1;
  if ( !a2 )
    return v7;
  v8 = *((_DWORD *)a2 + 22);
  if ( !v8 || !*(_DWORD *)(v8 + 140) && (*(_BYTE *)(v8 + 60) & 1) == 0 )
  {
LABEL_14:
    if ( v6 )
    {
      if ( !v8 )
        goto LABEL_36;
      if ( (*a2 & 0x40) == 0 )
      {
        vSpDeleteShape(a2);
        v8 = *((_DWORD *)a2 + 22);
        v6 = v19;
      }
      if ( !v8 )
      {
LABEL_36:
        if ( (*a2 & 0x40) == 0 )
        {
          v11 = EngLockSurface(v6);
          v12 = v11;
          if ( v11 )
          {
            if ( v11->iType == 3 && ((int)v11[1].dhpdev & 1) != 0 )
            {
              EngUnlockSurface(v11);
              v12 = 0;
            }
            if ( v12 )
            {
              v13 = *(_DWORD *)a2 | 0x40;
              *((_DWORD *)a2 + 22) = v12;
              *(_DWORD *)a2 = v13;
              if ( a3 )
                *(_DWORD *)a2 = v13 | 0x80;
              *((_DWORD *)a2 + 44) = v19;
              *((_DWORD *)a2 + 15) = 0;
              *((_DWORD *)a2 + 16) = 0;
              *((_DWORD *)a2 + 17) = v12->sizlBitmap.cx;
              *((_DWORD *)a2 + 18) = v12->sizlBitmap.cy;
              *(POINTL *)(a2 + 92) = gptlZero;
              cy = v12[1].sizlBitmap.cy;
              if ( cy )
                INC_SHARE_REF_CNT(v12[1].sizlBitmap.cy);
              v15 = (struct SPRITE **)*((_DWORD *)a2 + 3);
              *((_DWORD *)a2 + 25) = cy;
              a3 = *v15;
              SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v18, (struct PDEVOBJ *)&a3);
              bSpUpdatePosition(0, 0, (int)v16, v17);
              SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v18);
            }
          }
        }
      }
    }
    else if ( v8 )
    {
      vSpRemoveShapeHint(v16, v17);
    }
    return 1;
  }
  W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v8 + 152));
  if ( !*(_DWORD *)(v8 + 192) )
  {
    if ( (*(_DWORD *)a2 & 0x200) != 0 )
    {
      vSpRemoveShapeHint(v16, v17);
      *(_DWORD *)a2 &= ~0x200u;
    }
    W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v8 + 152));
    v8 = *((_DWORD *)a2 + 22);
    v6 = v19;
    goto LABEL_14;
  }
  *(_DWORD *)(v8 + 196) = UserGetHDEV();
  *(_DWORD *)(v8 + 200) = *((_DWORD *)a2 + 10);
  *(_DWORD *)(v8 + 204) = v19;
  memset((void *)(v8 + 208), 0, 0x84u);
  v9 = *(_DWORD *)(v8 + 56);
  *(_DWORD *)(v8 + 340) = 0;
  *(_DWORD *)(v8 + 344) = 0;
  if ( (v9 & 0x2000000) == 0 )
    *(_DWORD *)(v8 + 56) = v9 | 0x2000000;
  if ( (*(_DWORD *)a2 & 0x200) == 0 )
    *(_DWORD *)a2 |= 0x200u;
  W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v8 + 152));
  return 1;
}
