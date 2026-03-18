/*
 * XREFs of ?vSpHook@@YGXPAU_SPRITESTATE@@@Z @ 0x9E9AC
 * Callers:
 *     _bSpEnableSprites@4 @ 0x9E6C6 (_bSpEnableSprites@4.c)
 *     ?bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z @ 0xA0A28 (-bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z.c)
 *     ?vSpHideSprites@@YGXPAUHDEV__@@H@Z @ 0xACFC2 (-vSpHideSprites@@YGXPAUHDEV__@@H@Z.c)
 * Callees:
 *     ?vSpComputeSpriteRanges@@YGXPAU_SPRITESTATE@@@Z @ 0xA0662 (-vSpComputeSpriteRanges@@YGXPAU_SPRITESTATE@@@Z.c)
 */

void __thiscall vSpHook(_DWORD *this)
{
  _DWORD *v2; // eax
  int v3; // edx
  bool v4; // zf
  struct _SPRITESTATE *v5; // [esp+0h] [ebp-8h]

  v2 = (_DWORD *)*this;
  v3 = *(_DWORD *)(*this + 1820);
  this[18] = 1;
  this[17] = *(_DWORD *)(v3 + 72) | 0x3A5EF;
  v2[491] = SpStrokeAndFillPath;
  v2[489] = SpStrokePath;
  v2[490] = SpFillPath;
  v2[493] = SpBitBlt;
  v2[494] = SpCopyBits;
  v2[495] = SpStretchBlt;
  v2[498] = SpTextOut;
  v2[506] = SpLineTo;
  v2[549] = SpTransparentBlt;
  v2[546] = SpAlphaBlend;
  v2[545] = SpPlgBlt;
  v2[543] = SpGradientFill;
  v2[565] = SpDrawStream;
  v2[544] = SpStretchBltROP;
  v2[515] = SpSaveScreenBits;
  v4 = this[21] == 0;
  this[168] = 1;
  if ( v4 )
  {
    GreAcquireSemaphore(this[22]);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", this[22], 8);
    vSpComputeSpriteRanges(v5);
    EtwTraceGreLockReleaseSemaphore(L"hsem", this[22]);
    GreReleaseSemaphoreInternal(this[22]);
  }
}
