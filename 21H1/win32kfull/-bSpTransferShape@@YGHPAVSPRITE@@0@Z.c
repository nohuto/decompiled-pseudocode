/*
 * XREFs of ?bSpTransferShape@@YGHPAVSPRITE@@0@Z @ 0x1DE52B
 * Callers:
 *     ?pSpConvertSpriteFromMeta@@YGPAVSPRITE@@PAUHDEV__@@0PAU_METASPRITE@@@Z @ 0x1DF031 (-pSpConvertSpriteFromMeta@@YGPAVSPRITE@@PAUHDEV__@@0PAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YGPAU_METASPRITE@@PAUHDEV__@@0PAVSPRITE@@@Z @ 0x1DF19D (-pSpConvertSpriteToMeta@@YGPAU_METASPRITE@@PAUHDEV__@@0PAVSPRITE@@@Z.c)
 *     ?pSpTransferMetaSprite@@YGPAU_METASPRITE@@PAUHDEV__@@0PAU1@@Z @ 0x1DF57A (-pSpTransferMetaSprite@@YGPAU_METASPRITE@@PAUHDEV__@@0PAU1@@Z.c)
 *     ?pSpTransferSprite@@YGPAVSPRITE@@PAUHDEV__@@PAV1@@Z @ 0x1DF909 (-pSpTransferSprite@@YGPAVSPRITE@@PAUHDEV__@@PAV1@@Z.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QAEXXZ @ 0x794B6 (-vAltUnlock@EXLATEOBJ@@QAEXXZ.c)
 *     ?bSpCreateShape@@YGHPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAVPALETTE@@KK4@Z @ 0x1DDCF1 (-bSpCreateShape@@YGHPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAVPALETTE@@KK4.c)
 */

int __fastcall bSpTransferShape(int *a1, int a2)
{
  int v4; // ecx
  int v5; // edx
  _DWORD *v6; // edi
  _DWORD *v7; // edi
  int result; // eax
  _DWORD *v9; // [esp-20h] [ebp-38h]
  _DWORD *v10; // [esp-1Ch] [ebp-34h]
  unsigned int v11; // [esp+0h] [ebp-18h]
  struct _RECTL *v12; // [esp+4h] [ebp-14h]
  int *v13; // [esp+10h] [ebp-8h]
  struct _POINTL *v14; // [esp+14h] [ebp-4h] BYREF

  v4 = 1;
  v13 = a1;
  *a1 |= *(_DWORD *)a2 & 0x10;
  v5 = *(_DWORD *)(a2 + 88);
  if ( v5 )
  {
    if ( *(_DWORD *)(a2 + 164) == 2 && *(_BYTE *)(a2 + 171) == 1 && !*(_BYTE *)(a2 + 168) )
    {
      bSpCreateShape(
        (struct _POINTL *)(a2 + 92),
        a1,
        (struct SPRITE *)v5,
        0,
        (struct _SURFOBJ *)(a2 + 60),
        *(struct _XLATEOBJ **)(a2 + 100),
        *(struct _RECTL **)(v5 + 44),
        (struct PALETTE *)1,
        0,
        v11,
        v12);
    }
    else
    {
      v10 = *(_DWORD **)(*(_DWORD *)(a1[3] + 16) + 72);
      v9 = *(_DWORD **)(a2 + 100);
      v14 = 0;
      if ( EXLATEOBJ::bInitXlateObj((int *)&v14, 0, 0, v9, v10, (int)ppalDefault, (int)ppalDefault, 0, 0, 0, 0) )
        bSpCreateShape(
          (struct _POINTL *)(a2 + 92),
          a1,
          *(struct SPRITE **)(a2 + 88),
          v14,
          (struct _SURFOBJ *)(a2 + 60),
          *(struct _XLATEOBJ **)(*(_DWORD *)(a1[3] + 16) + 72),
          0,
          (struct PALETTE *)1,
          0,
          v11,
          v12);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v14);
    }
    if ( a1[22] )
    {
      a1[1] = *(_DWORD *)(a2 + 4);
      v4 = 1;
      v6 = a1 + 15;
      *v6++ = *(_DWORD *)(a2 + 60);
      *v6++ = *(_DWORD *)(a2 + 64);
      *v6 = *(_DWORD *)(a2 + 68);
      v6[1] = *(_DWORD *)(a2 + 72);
      a1 = v13;
      v13[36] = *(_DWORD *)(a2 + 144);
      v13[35] = *(_DWORD *)(a2 + 140);
    }
    else
    {
      v4 = 0;
    }
  }
  v7 = a1 + 41;
  result = v4;
  *v7++ = *(_DWORD *)(a2 + 164);
  *v7 = *(_DWORD *)(a2 + 168);
  v7[1] = *(_DWORD *)(a2 + 172);
  return result;
}
