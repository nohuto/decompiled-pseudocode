/*
 * XREFs of RIMInitialize @ 0x1C0021580
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C029C0C0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     RIMReadPowerRegistrySettings @ 0x1C00216A4 (RIMReadPowerRegistrySettings.c)
 *     rimInitAllHidParseDelayLoads @ 0x1C0021A64 (rimInitAllHidParseDelayLoads.c)
 *     rimLoadImage @ 0x1C0021C70 (rimLoadImage.c)
 *     ?vInitRIMPnpThreadDelayBugCheckConfig@@YAXXZ @ 0x1C0021F14 (-vInitRIMPnpThreadDelayBugCheckConfig@@YAXXZ.c)
 */

__int64 RIMInitialize()
{
  __int64 result; // rax

  vInitRIMPnpThreadDelayBugCheckConfig();
  KeQueryPerformanceCounter(&gliQpcFreq);
  gDeadzoneLock = 0LL;
  qword_1C0256348 = 0LL;
  gObListLock = 0LL;
  qword_1C02562F8 = 0LL;
  gWatchDogQPCLock = 0LL;
  qword_1C0256368 = 0LL;
  gTLCInfoLock = 0LL;
  qword_1C0256358 = 0LL;
  gObRimList.Blink = &gObRimList;
  gObRimList.Flink = &gObRimList;
  qword_1C0256308 = (__int64)&gObRimDevList;
  gObRimDevList = (__int64)&gObRimDevList;
  gObRimInputObserverList.Blink = &gObRimInputObserverList;
  gObRimInputObserverList.Flink = &gObRimInputObserverList;
  qword_1C0256378 = (__int64)&RawInputManagerObject::gHidRequestTable;
  RawInputManagerObject::gHidRequestTable = &RawInputManagerObject::gHidRequestTable;
  qword_1C0256388 = (__int64)&qword_1C0256380;
  qword_1C0256380 = (__int64)&qword_1C0256380;
  qword_1C0256398 = (__int64)&qword_1C0256390;
  qword_1C0256390 = (__int64)&qword_1C0256390;
  RawInputManagerObject::bTouchInputAllowed = 1;
  ghModHidParse = (void *)rimLoadImage();
  if ( ghModHidParse )
    rimInitAllHidParseDelayLoads();
  gInputObserverLock = 0LL;
  qword_1C0256338 = 0LL;
  RIMReadPowerRegistrySettings();
  result = 0LL;
  gbRIMInitialized = 1;
  return result;
}
