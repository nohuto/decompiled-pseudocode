/*
 * XREFs of _GetWindowCompositionInfo @ 0x1C0048CE4
 * Callers:
 *     IsWindowShellCloaked @ 0x1C0013E60 (IsWindowShellCloaked.c)
 *     ?GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z @ 0x1C001BEC8 (-GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00816D4 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     SetWindowCompositionNCRenderingExiled @ 0x1C008F68C (SetWindowCompositionNCRenderingExiled.c)
 *     SetWindowExtendedBoundsMargin @ 0x1C008F75C (SetWindowExtendedBoundsMargin.c)
 *     DecVisWindows @ 0x1C009166C (DecVisWindows.c)
 *     IncVisWindows @ 0x1C00927E4 (IncVisWindows.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00C91F8 (zzzSetWindowCompositionCloak.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C00D5480 (NtUserGetWindowCompositionAttribute.c)
 *     SetWindowCompositionAccentPolicy @ 0x1C0116E18 (SetWindowCompositionAccentPolicy.c)
 *     SetWindowCompositionHasIconicBitmap @ 0x1C011BA4C (SetWindowCompositionHasIconicBitmap.c)
 *     SetWindowCompositionFreezeSWR @ 0x1C011BB44 (SetWindowCompositionFreezeSWR.c)
 *     ?xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z @ 0x1C011CF84 (-xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z.c)
 *     SetWindowCompositionExcludeFromLivePreview @ 0x1C0120290 (SetWindowCompositionExcludeFromLivePreview.c)
 *     SetWindowCompositionDarkModeColors @ 0x1C0120484 (SetWindowCompositionDarkModeColors.c)
 *     SetWindowCompositionForceActiveWindowAppearance @ 0x1C01215FC (SetWindowCompositionForceActiveWindowAppearance.c)
 *     SetWindowCompositionForceIconicSWR @ 0x1C0126488 (SetWindowCompositionForceIconicSWR.c)
 *     SetWindowCompositionPassiveUpdateMode @ 0x1C01585B8 (SetWindowCompositionPassiveUpdateMode.c)
 *     SetWindowCompositionExcludedFromDDA @ 0x1C0158680 (SetWindowCompositionExcludedFromDDA.c)
 *     NtUserGetWindowCompositionInfo @ 0x1C01FC2F0 (NtUserGetWindowCompositionInfo.c)
 *     SetWindowCompositionAllowNCPaint @ 0x1C0213D94 (SetWindowCompositionAllowNCPaint.c)
 *     SetWindowCompositionDisallowPeek @ 0x1C0213E68 (SetWindowCompositionDisallowPeek.c)
 *     SetWindowCompositionHolographic @ 0x1C0213F3C (SetWindowCompositionHolographic.c)
 *     SetWindowCompositionNCRenderPolicy @ 0x1C0214010 (SetWindowCompositionNCRenderPolicy.c)
 *     SetWindowCompositionNonClientRTLLayout @ 0x1C02140C4 (SetWindowCompositionNonClientRTLLayout.c)
 *     SetWindowCompositionTransitions @ 0x1C0214198 (SetWindowCompositionTransitions.c)
 *     SetWindowCompositionVideoOverlayActive @ 0x1C021426C (SetWindowCompositionVideoOverlayActive.c)
 *     SetWindowCompositionVisualOwner @ 0x1C0214340 (SetWindowCompositionVisualOwner.c)
 * Callees:
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00472B4 (IsTopLevelOrLayeredChildWindow.c)
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 */

__int64 __fastcall GetWindowCompositionInfo(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 Prop; // rax
  unsigned int v6; // eax
  unsigned int v8; // eax

  v4 = 0;
  if ( IsTopLevelOrLayeredChildWindow(a1) )
  {
    Prop = GetProp(a1, (unsigned __int16)atomDWMProp, 1LL);
    if ( Prop )
    {
      *(_OWORD *)a2 = *(_OWORD *)Prop;
      *(_OWORD *)(a2 + 16) = *(_OWORD *)(Prop + 16);
      *(_QWORD *)(a2 + 32) = *(_QWORD *)(Prop + 32);
      v6 = *(_DWORD *)a2;
    }
    else
    {
      v8 = *(_DWORD *)a2;
      *(_OWORD *)(a2 + 8) = 0LL;
      v6 = v8 & 0xFFFF0000;
      *(_DWORD *)(a2 + 4) = 0;
      *(_QWORD *)(a2 + 24) = 0LL;
      *(_QWORD *)(a2 + 32) = 0LL;
    }
    v4 = 1;
    *(_DWORD *)a2 = v6 & 0x1FFFF;
  }
  return v4;
}
