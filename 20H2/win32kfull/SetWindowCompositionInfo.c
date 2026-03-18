/*
 * XREFs of SetWindowCompositionInfo @ 0x1C00C8264
 * Callers:
 *     SetWindowCompositionNCRenderingExiled @ 0x1C008F68C (SetWindowCompositionNCRenderingExiled.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00C91F8 (zzzSetWindowCompositionCloak.c)
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
 *     SetWindowCompositionAllowNCPaint @ 0x1C0213D94 (SetWindowCompositionAllowNCPaint.c)
 *     SetWindowCompositionDisallowPeek @ 0x1C0213E68 (SetWindowCompositionDisallowPeek.c)
 *     SetWindowCompositionHolographic @ 0x1C0213F3C (SetWindowCompositionHolographic.c)
 *     SetWindowCompositionNCRenderPolicy @ 0x1C0214010 (SetWindowCompositionNCRenderPolicy.c)
 *     SetWindowCompositionNonClientRTLLayout @ 0x1C02140C4 (SetWindowCompositionNonClientRTLLayout.c)
 *     SetWindowCompositionTransitions @ 0x1C0214198 (SetWindowCompositionTransitions.c)
 *     SetWindowCompositionVideoOverlayActive @ 0x1C021426C (SetWindowCompositionVideoOverlayActive.c)
 *     SetWindowCompositionVisualOwner @ 0x1C0214340 (SetWindowCompositionVisualOwner.c)
 * Callees:
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 *     InternalSetProp @ 0x1C00C7238 (InternalSetProp.c)
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
      v3 = InternalSetProp(a1, v9, v7, 1u);
      if ( !v3 )
        Win32FreePool(v8);
    }
  }
  return v3;
}
