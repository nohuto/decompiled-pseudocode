/*
 * XREFs of ?CleanupPostMortemLogging@@YGXXZ @ 0xD496C
 * Callers:
 *     _CleanupModuleAllocations@0 @ 0xD4966 (_CleanupModuleAllocations@0.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __stdcall CleanupPostMortemLogging()
{
  if ( dword_273AD0 )
    Win32FreePool(dword_273AD0);
  if ( gpQmsgHistory )
  {
    Win32FreePool(gpQmsgHistory);
    gpQmsgHistory = 0;
  }
  if ( gpQmsgHistory2 )
  {
    Win32FreePool(gpQmsgHistory2);
    gpQmsgHistory2 = 0;
  }
  if ( _gpAtomickCheckStacks )
  {
    Win32FreePool(_gpAtomickCheckStacks);
    _gpAtomickCheckStacks = 0;
  }
  if ( gpLinkWindowLog )
  {
    Win32FreePool(gpLinkWindowLog);
    gpLinkWindowLog = 0;
  }
}
