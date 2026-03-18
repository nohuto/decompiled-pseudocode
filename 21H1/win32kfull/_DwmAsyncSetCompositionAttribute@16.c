/*
 * XREFs of _DwmAsyncSetCompositionAttribute@16 @ 0x2557C
 * Callers:
 *     _zzzSetWindowCompositionCloak@12 @ 0x1C5F8 (_zzzSetWindowCompositionCloak@12.c)
 *     _SetWindowCompositionNCRenderingExiled@8 @ 0x25858 (_SetWindowCompositionNCRenderingExiled@8.c)
 *     _NtUserSetWindowCompositionAttribute@8 @ 0x25CE6 (_NtUserSetWindowCompositionAttribute@8.c)
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
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall DwmAsyncSetCompositionAttribute(void *a1, int a2, int a3, const void *a4)
{
  __int64 v4; // kr00_8
  int v5; // edi
  __int16 v6; // ax
  size_t v7; // eax
  _WORD v10[3]; // [esp+20h] [ebp-48h] BYREF
  int v11; // [esp+26h] [ebp-42h]
  int v12; // [esp+2Ah] [ebp-3Eh]
  int v13; // [esp+2Eh] [ebp-3Ah]
  int v14; // [esp+32h] [ebp-36h]
  __int16 v15; // [esp+36h] [ebp-32h]
  int v16; // [esp+38h] [ebp-30h]
  int v17; // [esp+3Ch] [ebp-2Ch]
  int v18; // [esp+40h] [ebp-28h]
  int v19; // [esp+44h] [ebp-24h]
  int v20; // [esp+48h] [ebp-20h]
  size_t v21; // [esp+4Ch] [ebp-1Ch]
  _BYTE v22[20]; // [esp+50h] [ebp-18h] BYREF

  do
    v4 = g_cDWMWindowUniqueness;
  while ( _InterlockedCompareExchange64(&g_cDWMWindowUniqueness, g_cDWMWindowUniqueness + 1, g_cDWMWindowUniqueness) != v4 );
  v5 = -1073741823;
  if ( a1 )
  {
    v15 = 0;
    v6 = MaxCount[2 * a3];
    v11 = 0;
    v10[0] = v6 + 24;
    v10[1] = 68;
    v10[2] = 0x8000;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v17 = 0;
    v19 = 0;
    v18 = a2;
    v7 = MaxCount[2 * a3];
    v16 = 1073741866;
    v20 = a3;
    qmemcpy(v22, a4, sizeof(v22));
    v21 = v7;
    v5 = LpcRequestPort(a1, v10);
    ObfDereferenceObject(a1);
  }
  return v5;
}
