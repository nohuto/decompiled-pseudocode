/*
 * XREFs of ??0InkProcessor@@AEAA@XZ @ 0x1C0127AA4
 * Callers:
 *     RawInputThread @ 0x1C00C62E0 (RawInputThread.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C006165C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     ?AddInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x1C0127B6C (-AddInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C037C6C8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

InkProcessor *__fastcall InkProcessor::InkProcessor(InkProcessor *this)
{
  InkFeedbackServer *v2; // rbx
  int v4; // [rsp+30h] [rbp-18h]

  *(_QWORD *)this = 0LL;
  v2 = (InkProcessor *)((char *)this + 96);
  *((_BYTE *)this + 8) = 0;
  *((_QWORD *)this + 10) = "HideInkCursorProvider";
  *((_QWORD *)this + 8) = (char *)this + 56;
  *((_QWORD *)this + 7) = (char *)this + 56;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 4) = &HideInkCursorProvider::`vftable';
  *((_QWORD *)this + 13) = (char *)this + 96;
  *((_QWORD *)this + 12) = (char *)this + 96;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C032B288);
  *((_QWORD *)this + 3) = (char *)this + 16;
  *((_QWORD *)this + 2) = (char *)this + 16;
  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_InkProcessor__private_reporting,
    0x7C1F58u,
    0,
    0,
    (__int64)&Feature_PenTailDockEvents_logged_traits,
    1u,
    v4);
  *((_BYTE *)this + 8) = 1;
  InkFeedbackServer::AddInkFeedbackProvider(v2, (InkProcessor *)((char *)this + 32));
  return this;
}
