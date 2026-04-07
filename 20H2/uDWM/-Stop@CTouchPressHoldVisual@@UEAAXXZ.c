/*
 * XREFs of ?Stop@CTouchPressHoldVisual@@UEAAXXZ @ 0x1800B7FF0
 * Callers:
 *     ??1CTouchPressHoldVisual@@MEAA@XZ @ 0x1800B79B0 (--1CTouchPressHoldVisual@@MEAA@XZ.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800248DC (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x180053208 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z @ 0x1800B7B40 (-SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z.c)
 *     ?StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ @ 0x1800B802C (-StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ.c)
 */

void __fastcall CTouchPressHoldVisual::Stop(CTouchPressHoldVisual *this)
{
  CTouchVisual *v2; // rcx

  CRenderDataVisual::ClearInstructions(this);
  CTouchPressHoldVisual::StopAllTimelines(this);
  CTouchVisual::UnRegisterGlobalTimer(v2);
  CTouchPressHoldVisual::SetETWAnimation((__int64)this, 0);
  CVisual::SetOpacity(this, 0.0);
}
