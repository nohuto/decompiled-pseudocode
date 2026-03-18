/*
 * XREFs of ?InitPostMortemLogging@@YGXXZ @ 0xEAABC
 * Callers:
 *     _InitModuleAllocations@0 @ 0xEAA64 (_InitModuleAllocations@0.c)
 * Callees:
 *     ?InitLogQMsg@@YGXXZ @ 0xEAB0E (-InitLogQMsg@@YGXXZ.c)
 *     _InitQMiPTrace@0 @ 0x14E2E2 (_InitQMiPTrace@0.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __stdcall InitPostMortemLogging()
{
  InitLogQMsg();
  FastGetProfileDword(0, 2, L"USERPostMortemLogging", gdwPostMortemLogging, &gdwPostMortemLogging);
  if ( (gdwPostMortemLogging & 1) != 0 )
    InitQMiPTrace();
  if ( (gdwPostMortemLogging & 2) != 0 )
  {
    _gdwAtomicCheckLogSize = 12;
    _gpAtomickCheckStacks = Win32AllocPoolZInit(432, 1297118037);
  }
  if ( (gdwPostMortemLogging & 4) != 0 )
  {
    gpLinkWindowLog = (struct LINKWINDOW_LOG *)Win32AllocPoolZInit(4352, 1297118037);
    guiLinkWindowLogSize = 64;
  }
}
