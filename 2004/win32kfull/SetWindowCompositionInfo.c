/*
 * XREFs of SetWindowCompositionInfo @ 0x1C0021614
 * Callers:
 *     zzzSetWindowCompositionCloak @ 0x1C0022188 (zzzSetWindowCompositionCloak.c)
 *     SetWindowCompositionNCRenderingExiled @ 0x1C0062B40 (SetWindowCompositionNCRenderingExiled.c)
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
 *     InternalSetProp @ 0x1C002481C (InternalSetProp.c)
 */

__int64 __fastcall SetWindowCompositionInfo(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  __int64 Prop; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx

  v3 = 0;
  Prop = GetProp(a1, (unsigned __int16)atomDWMProp, 1LL);
  if ( Prop )
  {
    v3 = 1;
    *(_OWORD *)Prop = *(_OWORD *)a2;
    *(_OWORD *)(Prop + 16) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(Prop + 32) = *(_QWORD *)(a2 + 32);
  }
  else
  {
    v7 = Win32AllocPool(40LL, 1684239189LL);
    v8 = v7;
    if ( v7 )
    {
      v9 = (unsigned __int16)atomDWMProp;
      *(_OWORD *)v7 = *(_OWORD *)a2;
      *(_OWORD *)(v7 + 16) = *(_OWORD *)(a2 + 16);
      *(_QWORD *)(v7 + 32) = *(_QWORD *)(a2 + 32);
      v3 = InternalSetProp(a1, v9, v7, 1LL);
      if ( !v3 )
        Win32FreePool(v8);
    }
  }
  return v3;
}
