/*
 * XREFs of ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C004BB44
 * Callers:
 *     bSpEnableSprites @ 0x1C004B770 (bSpEnableSprites.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00503BC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C0121C64 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C002D44C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C004BB00 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C004FEE0 (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 */

void __fastcall vSpHook(struct _SPRITESTATE *a1)
{
  _QWORD *v1; // rax
  __int64 v3; // rdx
  bool v4; // zf

  v1 = *(_QWORD **)a1;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 2552LL);
  *((_DWORD *)a1 + 26) = 1;
  *((_DWORD *)a1 + 25) = *(_DWORD *)(v3 + 112) | 0x3A5EF;
  v1[352] = SpStrokeAndFillPath;
  v1[350] = SpStrokePath;
  v1[351] = SpFillPath;
  v1[354] = SpBitBlt;
  v1[355] = SpCopyBits;
  v1[356] = SpStretchBlt;
  v1[359] = SpTextOut;
  v1[367] = SpLineTo;
  v1[410] = SpTransparentBlt;
  v1[407] = SpAlphaBlend;
  v1[406] = SpPlgBlt;
  v1[404] = SpGradientFill;
  v1[426] = SpDrawStream;
  v1[405] = SpStretchBltROP;
  v1[376] = SpSaveScreenBits;
  v4 = *((_DWORD *)a1 + 29) == 0;
  *((_DWORD *)a1 + 270) = 1;
  if ( v4 )
  {
    SPRITERANGELOCK::vLockExclusive((struct _SPRITESTATE *)((char *)a1 + 120));
    vSpComputeSpriteRanges(a1);
    SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)a1 + 120));
  }
}
