/*
 * XREFs of ??1HitTestResult@@QEAA@XZ @ 0x1800171CC
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180016820 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     _HitTestHelper::HitTestRequestWithRetry_::_1_::dtor$3 @ 0x180048B14 (_HitTestHelper--HitTestRequestWithRetry_--_1_--dtor$3.c)
 *     _DWMInputRouter::HitTest_::_1_::dtor$0 @ 0x18004F6A0 (_DWMInputRouter--HitTest_--_1_--dtor$0.c)
 *     _DragNDropProcessor::GetDragSourceInputSite_::_1_::dtor$1 @ 0x1800F95BB (_DragNDropProcessor--GetDragSourceInputSite_--_1_--dtor$1.c)
 *     _DragNDropProcessor::HitTest_::_1_::dtor$0 @ 0x1800F9BEA (_DragNDropProcessor--HitTest_--_1_--dtor$0.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x180138280 (-HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     _DWMInputRouter::HitTest_::_1_::dtor$0_0 @ 0x180138419 (_DWMInputRouter--HitTest_--_1_--dtor$0_0.c)
 *     _DWMInputRouter::RequestUIAHitTest_::_1_::dtor$0 @ 0x1801390DF (_DWMInputRouter--RequestUIAHitTest_--_1_--dtor$0.c)
 *     _DWMInputRouter::RequestViewHitTestHelper_::_1_::dtor$0 @ 0x18013935B (_DWMInputRouter--RequestViewHitTestHelper_--_1_--dtor$0.c)
 *     _TestCommands::RequestHitTest_::_1_::dtor$1 @ 0x180170DB7 (_TestCommands--RequestHitTest_--_1_--dtor$1.c)
 *     _DragNDropProcessorLegacy::HitTest_::_1_::dtor$0 @ 0x180175113 (_DragNDropProcessorLegacy--HitTest_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall HitTestResult::~HitTestResult(HitTestResult *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 4);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v4);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((_QWORD *)this + 1, a2, a3);
}
