/*
 * XREFs of ??1HitTestResult@@QEAA@XZ @ 0x18001719C
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800167F0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     _HitTestHelper::HitTestRequestWithRetry_::_1_::dtor$3 @ 0x180049174 (_HitTestHelper--HitTestRequestWithRetry_--_1_--dtor$3.c)
 *     _DWMInputRouter::HitTest_::_1_::dtor$0 @ 0x18004FCE0 (_DWMInputRouter--HitTest_--_1_--dtor$0.c)
 *     _DragNDropProcessor::GetDragSourceInputSite_::_1_::dtor$1 @ 0x1800F9B0B (_DragNDropProcessor--GetDragSourceInputSite_--_1_--dtor$1.c)
 *     _DragNDropProcessor::HitTest_::_1_::dtor$0 @ 0x1800FA13A (_DragNDropProcessor--HitTest_--_1_--dtor$0.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x1801387D0 (-HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     _DWMInputRouter::HitTest_::_1_::dtor$0_0 @ 0x180138969 (_DWMInputRouter--HitTest_--_1_--dtor$0_0.c)
 *     _DWMInputRouter::RequestUIAHitTest_::_1_::dtor$0 @ 0x18013962F (_DWMInputRouter--RequestUIAHitTest_--_1_--dtor$0.c)
 *     _DWMInputRouter::RequestViewHitTestHelper_::_1_::dtor$0 @ 0x1801398AB (_DWMInputRouter--RequestViewHitTestHelper_--_1_--dtor$0.c)
 *     _TestCommands::RequestHitTest_::_1_::dtor$1 @ 0x180171307 (_TestCommands--RequestHitTest_--_1_--dtor$1.c)
 *     _DragNDropProcessorLegacy::HitTest_::_1_::dtor$0 @ 0x180175663 (_DragNDropProcessorLegacy--HitTest_--_1_--dtor$0.c)
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
