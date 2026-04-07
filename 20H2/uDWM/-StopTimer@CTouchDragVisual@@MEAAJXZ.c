/*
 * XREFs of ?StopTimer@CTouchDragVisual@@MEAAJXZ @ 0x1800A4320
 * Callers:
 *     <none>
 * Callees:
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x180053208 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CTouchDragVisual::StopTimer(CTouchDragVisual *this)
{
  CTouchVisual::UnRegisterGlobalTimer(this);
  return 0LL;
}
