/*
 * XREFs of _SetWindowCompositionInfo@8 @ 0x2550C
 * Callers:
 *     ?xxxProcessUpdateFrameMargins@@YGXPAUtagWND@@ABUFRAME_MARGIN@@@Z @ 0x17210 (-xxxProcessUpdateFrameMargins@@YGXPAUtagWND@@ABUFRAME_MARGIN@@@Z.c)
 *     _zzzSetWindowCompositionCloak@12 @ 0x1C5F8 (_zzzSetWindowCompositionCloak@12.c)
 *     _SetWindowCompositionNCRenderingExiled@8 @ 0x25858 (_SetWindowCompositionNCRenderingExiled@8.c)
 *     _SetWindowCompositionAccentPolicy@8 @ 0xAAC88 (_SetWindowCompositionAccentPolicy@8.c)
 *     _SetWindowCompositionForceActiveWindowAppearance@8 @ 0xAC3D0 (_SetWindowCompositionForceActiveWindowAppearance@8.c)
 *     _SetWindowCompositionFreezeSWR@8 @ 0xAC91A (_SetWindowCompositionFreezeSWR@8.c)
 *     _SetWindowCompositionHasIconicBitmap@8 @ 0xACBD2 (_SetWindowCompositionHasIconicBitmap@8.c)
 *     _SetWindowCompositionForceIconicSWR@8 @ 0xC54E8 (_SetWindowCompositionForceIconicSWR@8.c)
 *     _SetWindowCompositionExcludeFromLivePreview@8 @ 0xCA1E2 (_SetWindowCompositionExcludeFromLivePreview@8.c)
 *     _SetWindowCompositionDarkModeColors@8 @ 0xF3D60 (_SetWindowCompositionDarkModeColors@8.c)
 *     _SetWindowCompositionAllowNCPaint@8 @ 0x179049 (_SetWindowCompositionAllowNCPaint@8.c)
 *     _SetWindowCompositionDisallowPeek@8 @ 0x1790DC (_SetWindowCompositionDisallowPeek@8.c)
 *     _SetWindowCompositionExcludedFromDDA@8 @ 0x179172 (_SetWindowCompositionExcludedFromDDA@8.c)
 *     _SetWindowCompositionHolographic@8 @ 0x179203 (_SetWindowCompositionHolographic@8.c)
 *     _SetWindowCompositionNCRenderPolicy@8 @ 0x179299 (_SetWindowCompositionNCRenderPolicy@8.c)
 *     _SetWindowCompositionNonClientRTLLayout@8 @ 0x179312 (_SetWindowCompositionNonClientRTLLayout@8.c)
 *     _SetWindowCompositionPassiveUpdateMode@8 @ 0x1793A7 (_SetWindowCompositionPassiveUpdateMode@8.c)
 *     _SetWindowCompositionTransitions@8 @ 0x179438 (_SetWindowCompositionTransitions@8.c)
 *     _SetWindowCompositionVideoOverlayActive@8 @ 0x1794CB (_SetWindowCompositionVideoOverlayActive@8.c)
 *     _SetWindowCompositionVisualOwner@8 @ 0x179561 (_SetWindowCompositionVisualOwner@8.c)
 * Callees:
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _InternalSetProp@16 @ 0xB4FE8 (_InternalSetProp@16.c)
 */

int __fastcall SetWindowCompositionInfo(int a1, const void *a2)
{
  int v3; // esi
  void *Prop; // eax
  void *v6; // eax
  void *v7; // ebx

  v3 = 0;
  Prop = (void *)_GetProp(1);
  if ( Prop )
  {
    qmemcpy(Prop, a2, 0x24u);
    return 1;
  }
  else
  {
    v6 = (void *)Win32AllocPool(36, 1684239189);
    v7 = v6;
    if ( v6 )
    {
      qmemcpy(v6, a2, 0x24u);
      v3 = InternalSetProp(v6, 1);
      if ( !v3 )
        Win32FreePool(v7);
    }
  }
  return v3;
}
