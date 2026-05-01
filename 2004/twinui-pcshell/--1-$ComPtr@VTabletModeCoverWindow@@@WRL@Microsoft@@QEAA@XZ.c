/*
 * XREFs of ??1?$ComPtr@VTabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x1804150D4
 * Callers:
 *     ??$MakeAndInitialize@VTabletModeCoverWindow@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAVTabletModeCoverWindow@@AEAPEAUIUnknown@@@Z @ 0x180414ED4 (--$MakeAndInitialize@VTabletModeCoverWindow@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAP.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_TabletModeCoverWindow_TabletModeCoverWindow_IUnknown___&__::_1_::dtor$2 @ 0x180414F7C (_Microsoft--WRL--Details--MakeAndInitialize_TabletModeCoverWindow_TabletModeCoverWi_ea_180414F7C.c)
 *     _CoverWindow_CreateInstance_::_1_::dtor$0 @ 0x1804154C0 (_CoverWindow_CreateInstance_--_1_--dtor$0.c)
 *     _CWRLImpWndProc_TabletModeCoverWindow_::s_WndProcBase_::_1_::dtor$0 @ 0x18041691E (_CWRLImpWndProc_TabletModeCoverWindow_--s_WndProcBase_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<TabletModeCoverWindow>::~ComPtr<TabletModeCoverWindow>(volatile int **a1)
{
  return Microsoft::WRL::ComPtr<TabletModeCoverWindow>::InternalRelease(a1);
}
