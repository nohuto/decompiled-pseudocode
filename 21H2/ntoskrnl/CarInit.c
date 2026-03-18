/*
 * XREFs of CarInit @ 0x140603974
 * Callers:
 *     CarReportUnusualShutdown @ 0x140604224 (CarReportUnusualShutdown.c)
 *     VfVolatileSetDifRuleClass @ 0x140A9CBF8 (VfVolatileSetDifRuleClass.c)
 *     VfInitBootDriversLoaded @ 0x140B0DBD4 (VfInitBootDriversLoaded.c)
 * Callees:
 *     CarInitLogging @ 0x140602EB8 (CarInitLogging.c)
 *     CarLoadConfig @ 0x140604DC0 (CarLoadConfig.c)
 *     CarpBugcheckInit @ 0x140605200 (CarpBugcheckInit.c)
 */

__int64 CarInit()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedCompareExchange(&CarInitialized, 1, 0);
  if ( (_DWORD)result != 1 )
  {
    qword_140C1A8E8 = (__int64)&CarConfigurationEntries;
    CarConfigurationEntries = (__int64)&CarConfigurationEntries;
    CarLoadConfig();
    result = CarpBugcheckInit();
    if ( DifIsVolatileMode )
      return CarInitLogging();
  }
  return result;
}
