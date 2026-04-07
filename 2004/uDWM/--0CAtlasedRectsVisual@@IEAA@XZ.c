/*
 * XREFs of ??0CAtlasedRectsVisual@@IEAA@XZ @ 0x1800162DC
 * Callers:
 *     ?Create@CTopLevelAtlasedRectsVisual@@SAJPEAPEAV1@@Z @ 0x180013E08 (-Create@CTopLevelAtlasedRectsVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CAtlasedRectsVisual@@SAJPEAPEAV1@@Z @ 0x180014034 (-Create@CAtlasedRectsVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CButton@@IEAA@XZ @ 0x18003D7B0 (--0CButton@@IEAA@XZ.c)
 *     ?Create@CAnimatedGlassSheet@@SAJPEAPEAV1@_N@Z @ 0x18009AEC4 (-Create@CAnimatedGlassSheet@@SAJPEAPEAV1@_N@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x1800199A0 (--0CVisual@@IEAA@XZ.c)
 */

CAtlasedRectsVisual *__fastcall CAtlasedRectsVisual::CAtlasedRectsVisual(CAtlasedRectsVisual *this)
{
  __int64 v1; // rcx

  CVisual::CVisual(this);
  *(_QWORD *)v1 = &CAtlasedRectsVisual::`vftable';
  *(_QWORD *)(v1 + 240) = 0LL;
  *(_QWORD *)(v1 + 248) = 0LL;
  *(_QWORD *)(v1 + 256) = 0LL;
  *(_DWORD *)(v1 + 264) = 0;
  *(_QWORD *)(v1 + 272) = 0LL;
  return (CAtlasedRectsVisual *)v1;
}
