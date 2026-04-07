/*
 * XREFs of ?StopTimer@CTouchDragVisual@@MEAAJXZ @ 0x1800A4A00
 * Callers:
 *     <none>
 * Callees:
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x180053268 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CTouchDragVisual::StopTimer(CTouchDragVisual *this)
{
  CTouchVisual::UnRegisterGlobalTimer(this);
  return 0LL;
}
