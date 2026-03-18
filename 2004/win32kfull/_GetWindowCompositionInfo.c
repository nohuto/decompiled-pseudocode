/*
 * XREFs of _GetWindowCompositionInfo @ 0x1C006D108
 * Callers:
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C000E8BC (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     DecVisWindows @ 0x1C00205C0 (DecVisWindows.c)
 *     IncVisWindows @ 0x1C0020974 (IncVisWindows.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0022188 (zzzSetWindowCompositionCloak.c)
 *     ?GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z @ 0x1C002CF34 (-GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z.c)
 *     IsWindowShellCloaked @ 0x1C003C830 (IsWindowShellCloaked.c)
 *     SetWindowExtendedBoundsMargin @ 0x1C0062A20 (SetWindowExtendedBoundsMargin.c)
 *     SetWindowCompositionNCRenderingExiled @ 0x1C0062B40 (SetWindowCompositionNCRenderingExiled.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C00902A0 (NtUserGetWindowCompositionAttribute.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     SetWindowCompositionAccentPolicy @ 0x1C0115888 (SetWindowCompositionAccentPolicy.c)
 *     SetWindowCompositionHasIconicBitmap @ 0x1C011AE4C (SetWindowCompositionHasIconicBitmap.c)
 *     SetWindowCompositionFreezeSWR @ 0x1C011AF44 (SetWindowCompositionFreezeSWR.c)
 *     ?xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z @ 0x1C011BFC4 (-xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z.c)
 *     SetWindowCompositionExcludeFromLivePreview @ 0x1C011EA1C (SetWindowCompositionExcludeFromLivePreview.c)
 *     SetWindowCompositionDarkModeColors @ 0x1C011EC04 (SetWindowCompositionDarkModeColors.c)
 *     SetWindowCompositionForceActiveWindowAppearance @ 0x1C01201CC (SetWindowCompositionForceActiveWindowAppearance.c)
 *     SetWindowCompositionForceIconicSWR @ 0x1C0125198 (SetWindowCompositionForceIconicSWR.c)
 *     SetWindowCompositionPassiveUpdateMode @ 0x1C0155C58 (SetWindowCompositionPassiveUpdateMode.c)
 *     SetWindowCompositionExcludedFromDDA @ 0x1C0155D20 (SetWindowCompositionExcludedFromDDA.c)
 *     NtUserGetWindowCompositionInfo @ 0x1C01FD160 (NtUserGetWindowCompositionInfo.c)
 *     SetWindowCompositionAllowNCPaint @ 0x1C0214C14 (SetWindowCompositionAllowNCPaint.c)
 *     SetWindowCompositionDisallowPeek @ 0x1C0214CE8 (SetWindowCompositionDisallowPeek.c)
 *     SetWindowCompositionHolographic @ 0x1C0214DBC (SetWindowCompositionHolographic.c)
 *     SetWindowCompositionNCRenderPolicy @ 0x1C0214E90 (SetWindowCompositionNCRenderPolicy.c)
 *     SetWindowCompositionNonClientRTLLayout @ 0x1C0214F44 (SetWindowCompositionNonClientRTLLayout.c)
 *     SetWindowCompositionTransitions @ 0x1C0215018 (SetWindowCompositionTransitions.c)
 *     SetWindowCompositionVideoOverlayActive @ 0x1C02150EC (SetWindowCompositionVideoOverlayActive.c)
 *     SetWindowCompositionVisualOwner @ 0x1C02151C0 (SetWindowCompositionVisualOwner.c)
 * Callees:
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C006E71C (IsTopLevelOrLayeredChildWindow.c)
 */

__int64 __fastcall GetWindowCompositionInfo(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  __int64 Prop; // rax
  unsigned int v7; // eax
  unsigned int v9; // eax

  v5 = 0;
  if ( (unsigned int)IsTopLevelOrLayeredChildWindow(a1, a2, a3) )
  {
    Prop = GetProp(a1, (unsigned __int16)atomDWMProp, 1LL);
    if ( Prop )
    {
      *(_OWORD *)a2 = *(_OWORD *)Prop;
      *(_OWORD *)(a2 + 16) = *(_OWORD *)(Prop + 16);
      *(_QWORD *)(a2 + 32) = *(_QWORD *)(Prop + 32);
      v7 = *(_DWORD *)a2;
    }
    else
    {
      v9 = *(_DWORD *)a2;
      *(_OWORD *)(a2 + 8) = 0LL;
      v7 = v9 & 0xFFFF0000;
      *(_DWORD *)(a2 + 4) = 0;
      *(_QWORD *)(a2 + 24) = 0LL;
      *(_QWORD *)(a2 + 32) = 0LL;
    }
    v5 = 1;
    *(_DWORD *)a2 = v7 & 0x1FFFF;
  }
  return v5;
}
