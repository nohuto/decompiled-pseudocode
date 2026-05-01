/*
 * XREFs of ??1?$ComPtr@VTabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x180414994
 * Callers:
 *     ??$MakeAndInitialize@VTabletModeCoverWindow@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAVTabletModeCoverWindow@@AEAPEAUIUnknown@@@Z @ 0x180414794 (--$MakeAndInitialize@VTabletModeCoverWindow@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAP.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_TabletModeCoverWindow_TabletModeCoverWindow_IUnknown___&__::_1_::dtor$2 @ 0x18041483C (_Microsoft--WRL--Details--MakeAndInitialize_TabletModeCoverWindow_TabletModeCoverWi_ea_18041483C.c)
 *     _CoverWindow_CreateInstance_::_1_::dtor$0 @ 0x180414D80 (_CoverWindow_CreateInstance_--_1_--dtor$0.c)
 *     _CWRLImpWndProc_TabletModeCoverWindow_::s_WndProcBase_::_1_::dtor$0 @ 0x1804161DE (_CWRLImpWndProc_TabletModeCoverWindow_--s_WndProcBase_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<TabletModeCoverWindow>::~ComPtr<TabletModeCoverWindow>(volatile int **a1)
{
  return Microsoft::WRL::ComPtr<TabletModeCoverWindow>::InternalRelease(a1);
}
