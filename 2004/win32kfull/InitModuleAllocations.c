/*
 * XREFs of InitModuleAllocations @ 0x1C0127E80
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C006165C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     ?InitLogQMsg@@YAXXZ @ 0x1C0127F50 (-InitLogQMsg@@YAXXZ.c)
 *     InitQMiPTrace @ 0x1C01E2324 (InitQMiPTrace.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitModuleAllocations()
{
  __int64 result; // rax
  int v1; // [rsp+30h] [rbp-18h]

  InitLogQMsg();
  FastGetProfileDword(0LL, 2LL, L"USERPostMortemLogging", (unsigned int)gdwPostMortemLogging, &gdwPostMortemLogging);
  if ( (gdwPostMortemLogging & 1) != 0 )
    InitQMiPTrace();
  if ( (gdwPostMortemLogging & 2) != 0 )
  {
    gdwAtomicCheckLogSize = 12;
    gpAtomickCheckStacks = Win32AllocPoolZInit(768LL, 1297118037LL);
  }
  if ( (gdwPostMortemLogging & 4) != 0 )
  {
    WPP_MAIN_CB.Queue.Wcb.DeviceContext = (PVOID)Win32AllocPoolZInit(8704LL, 1297118037LL);
    guiLinkWindowLogSize = 64;
  }
  FastGetProfileDword(0LL, 2LL, L"USERExtraInstrumentations", gdwExtraInstrumentations, gdwExtraInstrumentations);
  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_AtomicCheckFailure__private_reporting,
    0x11F194Cu,
    0,
    0,
    (__int64)&Feature_AtomicCheckFailure_logged_traits,
    0,
    v1);
  result = gdwExtraInstrumentations;
  if ( (gdwExtraInstrumentations & 4) != 0 )
  {
    result = gfRecordPnpNotification;
    gfRecordPnpNotification = 1;
  }
  return result;
}
