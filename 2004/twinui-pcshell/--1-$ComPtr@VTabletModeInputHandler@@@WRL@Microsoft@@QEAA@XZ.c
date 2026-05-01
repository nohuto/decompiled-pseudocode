/*
 * XREFs of ??1?$ComPtr@VTabletModeInputHandler@@@WRL@Microsoft@@QEAA@XZ @ 0x180414854
 * Callers:
 *     ??$MakeAndInitialize@VTabletModeInputHandler@@V1@AEAW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@AEAPEAUITabletModeInputCallback@@@Details@WRL@Microsoft@@YAJPEAPEAVTabletModeInputHandler@@AEAW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@AEAPEAUITabletModeInputCallback@@@Z @ 0x18041472C (--$MakeAndInitialize@VTabletModeInputHandler@@V1@AEAW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@AEAPE.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_TabletModeInputHandler_TabletModeInputHandler_enum_SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE_&_ITabletModeInputCallback___&__::_1_::dtor$2 @ 0x1804147D6 (_Microsoft--WRL--Details--MakeAndInitialize_TabletModeInputHandler_TabletModeInputH_ea_1804147D6.c)
 *     _TabletModeInputHandler_CreateInstance_::_1_::dtor$0 @ 0x180414CE8 (_TabletModeInputHandler_CreateInstance_--_1_--dtor$0.c)
 *     _CWRLImpWndProc_TabletModeInputHandler_::s_WndProcBase_::_1_::dtor$0 @ 0x180414E7E (_CWRLImpWndProc_TabletModeInputHandler_--s_WndProcBase_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<TabletModeInputHandler>::~ComPtr<TabletModeInputHandler>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<TabletModeInputHandler>::InternalRelease(a1);
}
