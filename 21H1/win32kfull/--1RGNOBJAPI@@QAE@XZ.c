/*
 * XREFs of ??1RGNOBJAPI@@QAE@XZ @ 0x24D20
 * Callers:
 *     _GreUpdateSpriteClipRgn@16 @ 0x239F2 (_GreUpdateSpriteClipRgn@16.c)
 *     _GreSubtractRgnRectList@16 @ 0x24CD0 (_GreSubtractRgnRectList@16.c)
 *     ?vSpUpdateSpriteVisRgn@@YGXPAUHDEV__@@K@Z @ 0x381B6 (-vSpUpdateSpriteVisRgn@@YGXPAUHDEV__@@K@Z.c)
 *     ?vSpComputeNoPresentRegion@@YGXPAU_SPRITESTATE@@H@Z @ 0xA00EE (-vSpComputeNoPresentRegion@@YGXPAU_SPRITESTATE@@H@Z.c)
 *     _GreExtSelectClipRgnInternal@16 @ 0xF7316 (_GreExtSelectClipRgnInternal@16.c)
 *     ?InternalSpritesCollision@@YGHPAUHDEV__@@PAUHWND__@@PAUHRGN__@@@Z @ 0x1D3470 (-InternalSpritesCollision@@YGHPAUHDEV__@@PAUHWND__@@PAUHRGN__@@@Z.c)
 *     _W32kCddClipRegion@12 @ 0x1D4779 (_W32kCddClipRegion@12.c)
 *     ?GdiGetSpriteClipRgns@@YGHPAUHDEV__@@PAUHRGN__@@@Z @ 0x1DA9EC (-GdiGetSpriteClipRgns@@YGHPAUHDEV__@@PAUHRGN__@@@Z.c)
 *     ?vForceClientRgnUpdate@@YGXXZ @ 0x1E6558 (-vForceClientRgnUpdate@@YGXXZ.c)
 *     _GreSetClientRgn@12 @ 0x1E7093 (_GreSetClientRgn@12.c)
 *     _GreScaleRgn@8 @ 0x1FD560 (_GreScaleRgn@8.c)
 *     _GreScaleRgnToDestLogPixel@8 @ 0x1FD5E2 (_GreScaleRgnToDestLogPixel@8.c)
 *     ?NtGdiInvertRgnInternal@@YGHPAUHDC__@@PAUHRGN__@@@Z @ 0x1FD92A (-NtGdiInvertRgnInternal@@YGHPAUHDC__@@PAUHRGN__@@@Z.c)
 *     _NtGdiFillRgn@12 @ 0x1FE14A (_NtGdiFillRgn@12.c)
 *     _NtGdiFrameRgn@20 @ 0x1FE62D (_NtGdiFrameRgn@20.c)
 * Callees:
 *     <none>
 */

void __thiscall RGNOBJAPI::~RGNOBJAPI(RGNOBJAPI *this)
{
  if ( !*((_DWORD *)this + 2) )
    RGNOBJ::UpdateUserRgn(this);
  if ( *(_DWORD *)this )
    _InterlockedDecrement((volatile signed __int32 *)(*(_DWORD *)this + 8));
}
