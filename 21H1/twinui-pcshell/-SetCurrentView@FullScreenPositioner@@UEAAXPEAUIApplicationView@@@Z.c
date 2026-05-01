/*
 * XREFs of ?SetCurrentView@FullScreenPositioner@@UEAAXPEAUIApplicationView@@@Z @ 0x180183900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FullScreenPositioner::SetCurrentView(FullScreenPositioner *this, struct IApplicationView *a2)
{
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 8, (__int64)a2);
}
