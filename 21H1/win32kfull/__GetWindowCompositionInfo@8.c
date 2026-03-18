/*
 * XREFs of __GetWindowCompositionInfo@8 @ 0x6DCA6
 * Callers:
 *     ?GetWindowExtendedMargin@@YG_NPBUtagWND@@PAUFRAME_MARGIN@@@Z @ 0x15D24 (-GetWindowExtendedMargin@@YG_NPBUtagWND@@PAUFRAME_MARGIN@@@Z.c)
 *     ?xxxProcessUpdateFrameMargins@@YGXPAUtagWND@@ABUFRAME_MARGIN@@@Z @ 0x17210 (-xxxProcessUpdateFrameMargins@@YGXPAUtagWND@@ABUFRAME_MARGIN@@@Z.c)
 *     _zzzSetWindowCompositionCloak@12 @ 0x1C5F8 (_zzzSetWindowCompositionCloak@12.c)
 *     _IncVisWindows@4 @ 0x1CB86 (_IncVisWindows@4.c)
 *     _DecVisWindows@4 @ 0x1CC58 (_DecVisWindows@4.c)
 *     _SetWindowCompositionNCRenderingExiled@8 @ 0x25858 (_SetWindowCompositionNCRenderingExiled@8.c)
 *     _SetWindowExtendedBoundsMargin@8 @ 0x258E8 (_SetWindowExtendedBoundsMargin@8.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _NtUserGetWindowCompositionAttribute@8 @ 0x80AF0 (_NtUserGetWindowCompositionAttribute@8.c)
 *     _SetWindowCompositionAccentPolicy@8 @ 0xAAC88 (_SetWindowCompositionAccentPolicy@8.c)
 *     _SetWindowCompositionForceActiveWindowAppearance@8 @ 0xAC3D0 (_SetWindowCompositionForceActiveWindowAppearance@8.c)
 *     _SetWindowCompositionFreezeSWR@8 @ 0xAC91A (_SetWindowCompositionFreezeSWR@8.c)
 *     _SetWindowCompositionHasIconicBitmap@8 @ 0xACBD2 (_SetWindowCompositionHasIconicBitmap@8.c)
 *     _IsWindowShellCloaked@8 @ 0xC3F32 (_IsWindowShellCloaked@8.c)
 *     _SetWindowCompositionForceIconicSWR@8 @ 0xC54E8 (_SetWindowCompositionForceIconicSWR@8.c)
 *     _SetWindowCompositionExcludeFromLivePreview@8 @ 0xCA1E2 (_SetWindowCompositionExcludeFromLivePreview@8.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YGXPBUtagDESKTOP@@H@Z @ 0xE1968 (-DwmNotifyChildrenCreateDestroy@@YGXPBUtagDESKTOP@@H@Z.c)
 *     _GetWindowEffectiveCloakState@4 @ 0xF3D09 (_GetWindowEffectiveCloakState@4.c)
 *     _SetWindowCompositionDarkModeColors@8 @ 0xF3D60 (_SetWindowCompositionDarkModeColors@8.c)
 *     _NtUserGetWindowCompositionInfo@8 @ 0x164C1B (_NtUserGetWindowCompositionInfo@8.c)
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
 *     _IsTopLevelOrLayeredChildWindow@4 @ 0x6DD1A (_IsTopLevelOrLayeredChildWindow@4.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 */

int __fastcall _GetWindowCompositionInfo(int a1, unsigned int *a2)
{
  int v3; // esi
  const void *Prop; // eax
  unsigned int v5; // eax

  v3 = 0;
  if ( IsTopLevelOrLayeredChildWindow(a1) )
  {
    Prop = (const void *)_GetProp(1);
    if ( Prop )
    {
      qmemcpy(a2, Prop, 0x24u);
      v5 = *a2;
    }
    else
    {
      a2[1] = 0;
      a2[6] = 0;
      a2[7] = 0;
      a2[2] = 0;
      a2[8] = 0;
      v5 = *a2 & 0xFFFF0000;
      a2[3] = 0;
      a2[4] = 0;
      a2[5] = 0;
    }
    *a2 = v5 & 0x1FFFF;
    return 1;
  }
  return v3;
}
