/*
 * XREFs of _WindowArrangementView::GetPrimaryMonitor_::_1_::dtor$0 @ 0x18040E4BB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowArrangementView::GetPrimaryMonitor_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::~ComPtr<IImmersiveMonitorManager>((__int64 *)(a2 + 64));
}
