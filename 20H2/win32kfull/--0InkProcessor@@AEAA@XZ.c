/*
 * XREFs of ??0InkProcessor@@AEAA@XZ @ 0x1C012991C
 * Callers:
 *     RawInputThread @ 0x1C0009A30 (RawInputThread.c)
 * Callees:
 *     ?AddInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x1C01299E4 (-AddInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C015AB04 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C037B6C8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

InkProcessor *__fastcall InkProcessor::InkProcessor(InkProcessor *this)
{
  InkFeedbackServer *v2; // rbx

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
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C032A288);
  *((_QWORD *)this + 3) = (char *)this + 16;
  *((_QWORD *)this + 2) = (char *)this + 16;
  wil_details_FeatureReporting_ReportUsageToService(
    &Feature_InkProcessor__private_reporting,
    8134488LL,
    0LL,
    0LL,
    &Feature_PenTailDockEvents_logged_traits,
    1);
  *((_BYTE *)this + 8) = 1;
  InkFeedbackServer::AddInkFeedbackProvider(v2, (InkProcessor *)((char *)this + 32));
  return this;
}
