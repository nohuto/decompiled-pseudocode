/*
 * XREFs of ?_CancelPlacement@CDragVisual@@AEAAXXZ @ 0x180426DD0
 * Callers:
 *     ?_OnKeyDown@CDragVisual@@AEAAX_K@Z @ 0x18042784C (-_OnKeyDown@CDragVisual@@AEAAX_K@Z.c)
 *     ?_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z @ 0x180428004 (-_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z.c)
 * Callees:
 *     ?_ClearVisualFeedback@CDragVisual@@AEAAXXZ @ 0x180426E8C (-_ClearVisualFeedback@CDragVisual@@AEAAXXZ.c)
 */

void __fastcall CDragVisual::_CancelPlacement(CDragVisual *this)
{
  CDragVisual::_ClearVisualFeedback(this);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 48LL))(*((_QWORD *)this + 17));
}
