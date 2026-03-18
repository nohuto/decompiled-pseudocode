/*
 * XREFs of TouchTargetingBigTargetWindow @ 0x1C02606DC
 * Callers:
 *     ?_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x1C02164A8 (-_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z.c)
 * Callees:
 *     _TTPixelsToHm @ 0x1C02616EC (_TTPixelsToHm.c)
 */

_BOOL8 __fastcall TouchTargetingBigTargetWindow(_DWORD *a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // r11

  return (int)TTPixelsToHm((unsigned int)(a1[2] - *a1), *(unsigned int *)(a2 + 184)) >= 1400
      && (int)TTPixelsToHm((unsigned int)(*(_DWORD *)(v2 + 12) - *(_DWORD *)(v2 + 4)), *(unsigned int *)(v3 + 188)) >= 1400;
}
