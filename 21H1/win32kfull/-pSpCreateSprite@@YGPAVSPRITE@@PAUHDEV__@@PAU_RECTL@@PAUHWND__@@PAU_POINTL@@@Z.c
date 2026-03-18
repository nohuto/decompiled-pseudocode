/*
 * XREFs of ?pSpCreateSprite@@YGPAVSPRITE@@PAUHDEV__@@PAU_RECTL@@PAUHWND__@@PAU_POINTL@@@Z @ 0x9F136
 * Callers:
 *     ?GdiCreateSprite@@YGPAXPAUHDEV__@@PAUHWND__@@PAUtagRECT@@@Z @ 0x9F0D4 (-GdiCreateSprite@@YGPAXPAUHDEV__@@PAUHWND__@@PAUtagRECT@@@Z.c)
 *     ?GdiSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z @ 0x1DB0D0 (-GdiSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z.c)
 *     ?pSpConvertSpriteFromMeta@@YGPAVSPRITE@@PAUHDEV__@@0PAU_METASPRITE@@@Z @ 0x1DF031 (-pSpConvertSpriteFromMeta@@YGPAVSPRITE@@PAUHDEV__@@0PAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YGPAU_METASPRITE@@PAUHDEV__@@0PAVSPRITE@@@Z @ 0x1DF19D (-pSpConvertSpriteToMeta@@YGPAU_METASPRITE@@PAUHDEV__@@0PAVSPRITE@@@Z.c)
 *     ?pSpTransferMetaSprite@@YGPAU_METASPRITE@@PAUHDEV__@@0PAU1@@Z @ 0x1DF57A (-pSpTransferMetaSprite@@YGPAU_METASPRITE@@PAUHDEV__@@0PAU1@@Z.c)
 *     ?pSpTransferSprite@@YGPAVSPRITE@@PAUHDEV__@@PAV1@@Z @ 0x1DF909 (-pSpTransferSprite@@YGPAVSPRITE@@PAUHDEV__@@PAV1@@Z.c)
 * Callees:
 *     ??0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z @ 0x304FA (--0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QAE@XZ @ 0x305EC (--1SPRITEDDIACCESS@@QAE@XZ.c)
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?vSpOrderInY@@YGXPAVSPRITE@@@Z @ 0x9F24C (-vSpOrderInY@@YGXPAVSPRITE@@@Z.c)
 *     ?vSpRenumberZOrder@@YGXPAU_SPRITESTATE@@@Z @ 0xA0A14 (-vSpRenumberZOrder@@YGXPAU_SPRITESTATE@@@Z.c)
 */

struct SPRITE *__userpurge pSpCreateSprite@<eax>(
        struct _RECTL *a1@<edx>,
        int a2@<ecx>,
        HDEV a3,
        struct _RECTL *a4,
        HWND a5,
        struct _POINTL *a6)
{
  _DWORD *v6; // esi
  _DWORD *v8; // edi
  _DWORD *v9; // eax
  LONG *p_top; // edx
  LONG top; // eax
  int v12; // ecx
  int v13; // eax
  struct _SPRITESTATE *v15; // [esp+0h] [ebp-84h]
  struct SPRITE *v16; // [esp+0h] [ebp-84h]
  _BYTE v17[112]; // [esp+Ch] [ebp-78h] BYREF
  _BYTE v18[4]; // [esp+7Ch] [ebp-8h] BYREF
  int v19; // [esp+80h] [ebp-4h] BYREF

  v6 = 0;
  v19 = a2;
  if ( (*(_BYTE *)(a2 + 24) & 1) != 0 )
  {
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)v18, (struct PDEVOBJ *)&v19);
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v17, (struct PDEVOBJ *)&v19);
    v8 = (_DWORD *)(v19 + 64);
    v9 = PALLOCMEM2(0xC0u, 544240455, 1);
    v6 = v9;
    if ( v9 )
    {
      if ( a1 )
      {
        p_top = &a1->top;
        v9[31] = a1->right - a1->left;
        v9[32] = a1->bottom - a1->top;
        if ( a4 )
          a1 = a4;
        v9[19] = a1->left;
        if ( a4 )
          top = a4->top;
        else
          top = *p_top;
      }
      else
      {
        v9[31] = 0;
        top = 0x80000000;
        v6[32] = 0;
        v6[19] = 0x80000000;
      }
      v6[20] = top;
      *v6 = 0;
      v6[3] = v8;
      v6[1] = 4;
      v6[12] = 0x80000000;
      v6[11] = 0x80000000;
      v6[14] = 0x80000000;
      v6[13] = 0x80000000;
      v12 = v8[177];
      if ( v8[1] == v12 )
      {
        v6[4] = v12;
        if ( v12 )
          *(_DWORD *)(v12 + 20) = v6;
        else
          v8[2] = v6;
        v8[1] = v6;
      }
      else if ( v12 )
      {
        *(_DWORD *)(*(_DWORD *)(v12 + 20) + 16) = v6;
        v6[5] = *(_DWORD *)(v12 + 20);
        v6[4] = v12;
        *(_DWORD *)(v12 + 20) = v6;
      }
      else
      {
        v6[5] = v8[2];
        *(_DWORD *)(v8[2] + 16) = v6;
        v8[2] = v6;
      }
      vSpRenumberZOrder(v15);
      v13 = v8[3];
      v8[3] = v6;
      v6[6] = v13;
      if ( v13 )
        *(_DWORD *)(v13 + 28) = v6;
      v6[10] = a3;
      vSpOrderInY(v16);
    }
    SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v17);
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v18);
  }
  return (struct SPRITE *)v6;
}
