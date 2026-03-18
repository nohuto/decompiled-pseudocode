/*
 * XREFs of DwmAsyncSetCompositionAttribute @ 0x1C0062F30
 * Callers:
 *     zzzSetWindowCompositionCloak @ 0x1C0022188 (zzzSetWindowCompositionCloak.c)
 *     SetWindowCompositionNCRenderingExiled @ 0x1C0062B40 (SetWindowCompositionNCRenderingExiled.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0065FC0 (NtUserSetWindowCompositionAttribute.c)
 *     SetWindowCompositionAccentPolicy @ 0x1C0115888 (SetWindowCompositionAccentPolicy.c)
 *     SetWindowCompositionHasIconicBitmap @ 0x1C011AE4C (SetWindowCompositionHasIconicBitmap.c)
 *     SetWindowCompositionFreezeSWR @ 0x1C011AF44 (SetWindowCompositionFreezeSWR.c)
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
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall DwmAsyncSetCompositionAttribute(PVOID Object, __int64 a2, int a3, __int128 *a4)
{
  __int64 v5; // rsi
  unsigned int v8; // ebx
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8
  __int16 v11; // ax
  int v12; // eax
  _OWORD v14[6]; // [rsp+20h] [rbp-49h] BYREF

  v5 = a3;
  v8 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset(v14, 0, 0x58uLL);
    v9 = *a4;
    v10 = *((_QWORD *)a4 + 2);
    *(_DWORD *)((char *)v14 + 2) = -2147483560;
    *((_QWORD *)&v14[2] + 1) = 1073741866LL;
    *(_QWORD *)&v14[3] = a2;
    DWORD2(v14[3]) = v5;
    v11 = qword_1C02EA6C8[2 * v5];
    v14[4] = v9;
    LOWORD(v14[0]) = v11 + 24;
    v12 = qword_1C02EA6C8[2 * v5];
    *(_QWORD *)&v14[5] = v10;
    HIDWORD(v14[3]) = v12;
    v8 = LpcRequestPort(Object, v14);
    ObfDereferenceObject(Object);
  }
  return v8;
}
