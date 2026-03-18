/*
 * XREFs of ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C02839A8
 * Callers:
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C004F24C (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C0282314 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C02824DC (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C0282924 (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C0282D0C (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 *     GreDisableMirrorRendering @ 0x1C0286098 (GreDisableMirrorRendering.c)
 * Callees:
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C004B6E4 (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 */

void __fastcall vSpCreateExMirror(HDEV a1)
{
  if ( a1 )
  {
    if ( !*((_QWORD *)a1 + 177) )
      *((_QWORD *)a1 + 177) = psoSpCreateSurface(
                                (struct _SPRITESTATE *)(a1 + 22),
                                0,
                                *(_DWORD *)(*((_QWORD *)a1 + 15) + 32LL),
                                *(_DWORD *)(*((_QWORD *)a1 + 15) + 36LL));
  }
}
