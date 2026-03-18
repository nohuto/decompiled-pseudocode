/*
 * XREFs of RIMInitialize @ 0x1C000AF70
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C02960C0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     RIMReadPowerRegistrySettings @ 0x1C000B094 (RIMReadPowerRegistrySettings.c)
 *     rimInitAllHidParseDelayLoads @ 0x1C000B454 (rimInitAllHidParseDelayLoads.c)
 *     rimLoadImage @ 0x1C000B660 (rimLoadImage.c)
 *     ?vInitRIMPnpThreadDelayBugCheckConfig@@YAXXZ @ 0x1C000B904 (-vInitRIMPnpThreadDelayBugCheckConfig@@YAXXZ.c)
 */

__int64 RIMInitialize()
{
  __int64 result; // rax

  vInitRIMPnpThreadDelayBugCheckConfig();
  KeQueryPerformanceCounter(&gliQpcFreq);
  gDeadzoneLock = 0LL;
  qword_1C0250408 = 0LL;
  gObListLock = 0LL;
  qword_1C0250368 = 0LL;
  gWatchDogQPCLock = 0LL;
  qword_1C0250398 = 0LL;
  gTLCInfoLock = 0LL;
  qword_1C02503C8 = 0LL;
  gObRimList.Blink = &gObRimList;
  gObRimList.Flink = &gObRimList;
  qword_1C0250388 = (__int64)&gObRimDevList;
  gObRimDevList = (__int64)&gObRimDevList;
  gObRimInputObserverList.Blink = &gObRimInputObserverList;
  gObRimInputObserverList.Flink = &gObRimInputObserverList;
  qword_1C02503D8 = (__int64)&RawInputManagerObject::gHidRequestTable;
  RawInputManagerObject::gHidRequestTable = &RawInputManagerObject::gHidRequestTable;
  qword_1C02503E8 = (__int64)&qword_1C02503E0;
  qword_1C02503E0 = (__int64)&qword_1C02503E0;
  qword_1C02503F8 = (__int64)&qword_1C02503F0;
  qword_1C02503F0 = (__int64)&qword_1C02503F0;
  RawInputManagerObject::bTouchInputAllowed = 1;
  ghModHidParse = (void *)rimLoadImage();
  if ( ghModHidParse )
    rimInitAllHidParseDelayLoads();
  gInputObserverLock = 0LL;
  qword_1C02503A8 = 0LL;
  RIMReadPowerRegistrySettings();
  result = 0LL;
  gbRIMInitialized = 1;
  return result;
}
