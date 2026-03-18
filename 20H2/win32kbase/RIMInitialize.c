/*
 * XREFs of RIMInitialize @ 0x1C0009170
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C0294600 (Win32kBaseDriverEntry.c)
 * Callees:
 *     RIMReadPowerRegistrySettings @ 0x1C0009294 (RIMReadPowerRegistrySettings.c)
 *     rimInitAllHidParseDelayLoads @ 0x1C0009654 (rimInitAllHidParseDelayLoads.c)
 *     rimLoadImage @ 0x1C0009860 (rimLoadImage.c)
 *     ?vInitRIMPnpThreadDelayBugCheckConfig@@YAXXZ @ 0x1C0009B04 (-vInitRIMPnpThreadDelayBugCheckConfig@@YAXXZ.c)
 */

__int64 RIMInitialize()
{
  __int64 result; // rax

  vInitRIMPnpThreadDelayBugCheckConfig();
  KeQueryPerformanceCounter(&gliQpcFreq);
  gDeadzoneLock = 0LL;
  qword_1C024E3D8 = 0LL;
  gObListLock = 0LL;
  qword_1C024E368 = 0LL;
  gWatchDogQPCLock = 0LL;
  qword_1C024E398 = 0LL;
  gTLCInfoLock = 0LL;
  qword_1C024E388 = 0LL;
  gObRimList.Blink = &gObRimList;
  gObRimList.Flink = &gObRimList;
  qword_1C024E3A8 = (__int64)&gObRimDevList;
  gObRimDevList = (__int64)&gObRimDevList;
  gObRimInputObserverList.Blink = &gObRimInputObserverList;
  gObRimInputObserverList.Flink = &gObRimInputObserverList;
  qword_1C024E3E8 = (__int64)&RawInputManagerObject::gHidRequestTable;
  RawInputManagerObject::gHidRequestTable = &RawInputManagerObject::gHidRequestTable;
  qword_1C024E3F8 = (__int64)&qword_1C024E3F0;
  qword_1C024E3F0 = (__int64)&qword_1C024E3F0;
  qword_1C024E408 = (__int64)&qword_1C024E400;
  qword_1C024E400 = (__int64)&qword_1C024E400;
  RawInputManagerObject::bTouchInputAllowed = 1;
  ghModHidParse = (void *)rimLoadImage();
  if ( ghModHidParse )
    rimInitAllHidParseDelayLoads();
  gInputObserverLock = 0LL;
  qword_1C024E3C8 = 0LL;
  RIMReadPowerRegistrySettings();
  result = 0LL;
  gbRIMInitialized = 1;
  return result;
}
