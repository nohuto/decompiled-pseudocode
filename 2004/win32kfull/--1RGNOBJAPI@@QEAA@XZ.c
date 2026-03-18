/*
 * XREFs of ??1RGNOBJAPI@@QEAA@XZ @ 0x1C001C99C
 * Callers:
 *     GreSubtractRgnRectList @ 0x1C001C910 (GreSubtractRgnRectList.c)
 *     GreUpdateSpriteClipRgn @ 0x1C001D924 (GreUpdateSpriteClipRgn.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C004FCF8 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     GreGetRandomRgn @ 0x1C005FC10 (GreGetRandomRgn.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0073F4C (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     NtGdiFrameRgn @ 0x1C0131750 (NtGdiFrameRgn.c)
 *     NtGdiFillRgn @ 0x1C0139480 (NtGdiFillRgn.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C013B8A8 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     GreExtSelectClipRgnInternal @ 0x1C015AE98 (GreExtSelectClipRgnInternal.c)
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C0277138 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 *     W32kCddClipRegion @ 0x1C0278D90 (W32kCddClipRegion.c)
 *     ?GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z @ 0x1C027F0B8 (-GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0287604 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     GreSetClientRgn @ 0x1C02884BC (GreSetClientRgn.c)
 *     GreScaleRgn @ 0x1C029F6F4 (GreScaleRgn.c)
 *     GreScaleRgnToDestLogPixel @ 0x1C029F798 (GreScaleRgnToDestLogPixel.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNOBJAPI::~RGNOBJAPI(RGNOBJAPI *this)
{
  if ( !*((_DWORD *)this + 4) )
    RGNOBJ::UpdateUserRgn(this);
  if ( *(_QWORD *)this )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
}
