/*
 * XREFs of InitModuleAllocations @ 0x1C0129E90
 * Callers:
 *     <none>
 * Callees:
 *     ?InitLogQMsg@@YAXXZ @ 0x1C0129F60 (-InitLogQMsg@@YAXXZ.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C015AB04 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     InitQMiPTrace @ 0x1C01E1664 (InitQMiPTrace.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitModuleAllocations()
{
  __int64 v0; // rcx
  __int64 result; // rax

  InitLogQMsg();
  FastGetProfileDword(0LL, 2LL, L"USERPostMortemLogging");
  if ( (gdwPostMortemLogging & 1) != 0 )
    InitQMiPTrace(v0);
  if ( (gdwPostMortemLogging & 2) != 0 )
  {
    gdwAtomicCheckLogSize = 12;
    gpAtomickCheckStacks = Win32AllocPoolZInit(768LL, 1297118037LL);
  }
  if ( (gdwPostMortemLogging & 4) != 0 )
  {
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = Win32AllocPoolZInit(8704LL, 1297118037LL);
    guiLinkWindowLogSize = 64;
  }
  FastGetProfileDword(0LL, 2LL, L"USERExtraInstrumentations");
  wil_details_FeatureReporting_ReportUsageToService(
    &Feature_AtomicCheckFailure__private_reporting,
    18815308LL,
    0LL,
    0LL,
    &Feature_AtomicCheckFailure_logged_traits,
    0);
  result = gdwExtraInstrumentations;
  if ( (gdwExtraInstrumentations & 4) != 0 )
  {
    result = gfRecordPnpNotification;
    gfRecordPnpNotification = 1;
  }
  return result;
}
