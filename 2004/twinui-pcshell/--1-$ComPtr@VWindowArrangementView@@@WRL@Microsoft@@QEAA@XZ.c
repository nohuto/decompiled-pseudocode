/*
 * XREFs of ??1?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@QEAA@XZ @ 0x18040CE00
 * Callers:
 *     ??$MakeAndInitialize@VWindowArrangementView@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVWindowArrangementView@@@Z @ 0x18040C61C (--$MakeAndInitialize@VWindowArrangementView@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVWindowArran.c)
 *     _WindowArrangementView::CancelPlacement_::_1_::dtor$0 @ 0x18040D96A (_WindowArrangementView--CancelPlacement_--_1_--dtor$0.c)
 *     _WindowArrangementView::CancelPlacement_::_1_::dtor$1 @ 0x18040D976 (_WindowArrangementView--CancelPlacement_--_1_--dtor$1.c)
 *     _WindowArrangementView::CancelPlacement_::_1_::dtor$3 @ 0x18040D98E (_WindowArrangementView--CancelPlacement_--_1_--dtor$3.c)
 *     _WindowArrangementView::Hide_::_1_::dtor$0 @ 0x18040E6EC (_WindowArrangementView--Hide_--_1_--dtor$0.c)
 *     _WindowArrangementView::ShowView_::_1_::dtor$2 @ 0x180410623 (_WindowArrangementView--ShowView_--_1_--dtor$2.c)
 *     _WindowArrangementView::ShowView_::_1_::dtor$3 @ 0x18041062F (_WindowArrangementView--ShowView_--_1_--dtor$3.c)
 *     _WindowArrangementView::TickPlaceModeIdleAnimation_::_1_::dtor$2 @ 0x180411297 (_WindowArrangementView--TickPlaceModeIdleAnimation_--_1_--dtor$2.c)
 *     _WindowArrangementView::TickPlaceModeIdleAnimation_::_1_::dtor$3 @ 0x1804112A3 (_WindowArrangementView--TickPlaceModeIdleAnimation_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<WindowArrangementView>::~ComPtr<WindowArrangementView>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(a1);
}
