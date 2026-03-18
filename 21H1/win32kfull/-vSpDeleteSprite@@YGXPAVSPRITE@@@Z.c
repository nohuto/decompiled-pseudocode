/*
 * XREFs of ?vSpDeleteSprite@@YGXPAVSPRITE@@@Z @ 0x9ECB4
 * Callers:
 *     ?vSpDisableSprites@@YGXPAUHDEV__@@W4_CLEANUPTYPE@@@Z @ 0x9E570 (-vSpDisableSprites@@YGXPAUHDEV__@@W4_CLEANUPTYPE@@@Z.c)
 *     ?GdiDeleteSprite@@YGJPAUHDEV__@@PAUHWND__@@PAX@Z @ 0x9EAA8 (-GdiDeleteSprite@@YGJPAUHDEV__@@PAUHWND__@@PAX@Z.c)
 *     _vSpDynamicModeChange@8 @ 0x9EE36 (_vSpDynamicModeChange@8.c)
 *     ?GdiCreateSprite@@YGPAXPAUHDEV__@@PAUHWND__@@PAUtagRECT@@@Z @ 0x9F0D4 (-GdiCreateSprite@@YGPAXPAUHDEV__@@PAUHWND__@@PAUtagRECT@@@Z.c)
 *     ?GdiDeleteSpriteDelayDelete@@YGHPAUHDEV__@@PAUHWND__@@PAX@Z @ 0x1DA897 (-GdiDeleteSpriteDelayDelete@@YGHPAUHDEV__@@PAUHWND__@@PAX@Z.c)
 *     ?GdiSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z @ 0x1DB0D0 (-GdiSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z.c)
 *     ?pSpConvertSpriteFromMeta@@YGPAVSPRITE@@PAUHDEV__@@0PAU_METASPRITE@@@Z @ 0x1DF031 (-pSpConvertSpriteFromMeta@@YGPAVSPRITE@@PAUHDEV__@@0PAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YGPAU_METASPRITE@@PAUHDEV__@@0PAVSPRITE@@@Z @ 0x1DF19D (-pSpConvertSpriteToMeta@@YGPAU_METASPRITE@@PAUHDEV__@@0PAVSPRITE@@@Z.c)
 *     ?pSpMoveSpriteFromMeta@@YGPAVSPRITE@@PAUHDEV__@@0PAU_METASPRITE@@K@Z @ 0x1DF497 (-pSpMoveSpriteFromMeta@@YGPAVSPRITE@@PAUHDEV__@@0PAU_METASPRITE@@K@Z.c)
 *     ?pSpTransferMetaSprite@@YGPAU_METASPRITE@@PAUHDEV__@@0PAU1@@Z @ 0x1DF57A (-pSpTransferMetaSprite@@YGPAU_METASPRITE@@PAUHDEV__@@0PAU1@@Z.c)
 *     ?pSpTransferSprite@@YGPAVSPRITE@@PAUHDEV__@@PAV1@@Z @ 0x1DF909 (-pSpTransferSprite@@YGPAVSPRITE@@PAUHDEV__@@PAV1@@Z.c)
 * Callees:
 *     ??0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z @ 0x304FA (--0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QAE@XZ @ 0x305EC (--1SPRITEDDIACCESS@@QAE@XZ.c)
 *     ?vSpDeleteExMirror@@YGXPAUHDEV__@@@Z @ 0x9E672 (-vSpDeleteExMirror@@YGXPAUHDEV__@@@Z.c)
 *     ?vSpDeleteSurface@@YGXPAU_SURFOBJ@@@Z @ 0x9EDCC (-vSpDeleteSurface@@YGXPAU_SURFOBJ@@@Z.c)
 *     ?vSpDeleteShape@@YGXPAVSPRITE@@@Z @ 0x9EDE8 (-vSpDeleteShape@@YGXPAVSPRITE@@@Z.c)
 *     ?bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z @ 0xA0A28 (-bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z.c)
 */

void __thiscall vSpDeleteSprite(_DWORD *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  REGION *v7; // ecx
  int v8; // eax
  _DWORD *v9; // ebx
  int v10; // esi
  int v11; // ecx
  struct SPRITE *v12; // [esp+0h] [ebp-8Ch]
  struct _SURFOBJ *v13; // [esp+0h] [ebp-8Ch]
  struct _SURFOBJ *v14; // [esp+0h] [ebp-8Ch]
  int v15; // [esp+4h] [ebp-88h]
  _BYTE v16[116]; // [esp+Ch] [ebp-80h] BYREF
  _DWORD *v17; // [esp+80h] [ebp-Ch]
  int v18; // [esp+84h] [ebp-8h] BYREF
  SURFOBJ **v19; // [esp+88h] [ebp-4h] BYREF

  v17 = this;
  if ( this )
  {
    v2 = this[3];
    v19 = *(SURFOBJ ***)v2;
    if ( !_gbGreSessionCleanup )
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v16, (struct PDEVOBJ *)&v19);
      bSpUpdatePosition(0, 0, (int)v12, v15);
      SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v16);
    }
    if ( *(_DWORD **)(v2 + 4) == this )
    {
      v3 = this[4];
      *(_DWORD *)(v2 + 4) = v3;
      v4 = this[4];
      if ( v4 )
      {
        *(_DWORD *)(v4 + 20) = 0;
        v3 = *(_DWORD *)(v2 + 4);
      }
      if ( !v3 )
        *(_DWORD *)(v2 + 8) = 0;
    }
    else
    {
      v11 = this[5];
      if ( *(_DWORD **)(v2 + 8) == this )
        *(_DWORD *)(v2 + 8) = v11;
      else
        *(_DWORD *)(this[4] + 20) = v11;
      *(_DWORD *)(this[5] + 16) = this[4];
    }
    v5 = this[6];
    v6 = this[7];
    if ( v5 )
      *(_DWORD *)(v5 + 28) = v6;
    if ( v6 )
      *(_DWORD *)(v6 + 24) = v5;
    else
      *(_DWORD *)(v2 + 12) = v5;
    if ( (*this & 0x100) != 0 )
      vSpDeleteExMirror(*(SURFOBJ ***)v2);
    v18 = this[33];
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v18);
    v7 = (REGION *)this[34];
    this[33] = 0;
    REGION::vDeleteREGION(v7);
    vSpDeleteShape(v12);
    vSpDeleteSurface(v13);
    v8 = this[21];
    if ( v8 )
    {
      bDeleteSurface(*(_DWORD *)(v8 + 4));
      this[21] = 0;
    }
    if ( this[45] )
      Win32FreePool(this[45]);
    v9 = (_DWORD *)(v2 + 104);
    v10 = 64;
    do
    {
      vSpDeleteSurface(v14);
      *v9++ = 0;
      --v10;
    }
    while ( v10 );
    RtlClearAllBits((PRTL_BITMAP)(v2 + 360));
    Win32FreePool(v17);
  }
}
