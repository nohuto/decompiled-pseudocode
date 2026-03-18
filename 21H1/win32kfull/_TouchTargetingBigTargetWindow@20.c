/*
 * XREFs of _TouchTargetingBigTargetWindow@20 @ 0x1B8A48
 * Callers:
 *     ?_TTWindowPenalty@@YGIPAUtagWND@@PAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x17A562 (-_TTWindowPenalty@@YGIPAUtagWND@@PAUtagPNTRWINDOWHITTTESTARGS@@I@Z.c)
 * Callees:
 *     __TTPixelsToHm@8 @ 0x1B97F4 (__TTPixelsToHm@8.c)
 */

BOOL __thiscall TouchTargetingBigTargetWindow(_DWORD *this, int a2, int a3, int a4, int a5)
{
  return _TTPixelsToHm(a4 - a2, this[46]) >= 1400 && _TTPixelsToHm(a5 - a3, this[47]) >= 1400;
}
