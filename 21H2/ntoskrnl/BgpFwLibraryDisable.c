/*
 * XREFs of BgpFwLibraryDisable @ 0x1409F4FE8
 * Callers:
 *     BgLibraryDisable @ 0x1409F4ED0 (BgLibraryDisable.c)
 *     BgpFwLibraryDestroy @ 0x1409F4F0C (BgpFwLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039BEB0 (BgpFwFreeMemory.c)
 *     LogFwReport @ 0x1409F2524 (LogFwReport.c)
 *     AnFwFadeCompletion @ 0x1409F31B4 (AnFwFadeCompletion.c)
 *     ResFwBackgroundTransition @ 0x1409F4408 (ResFwBackgroundTransition.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1409F44CC (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpTxtDestroyRegion @ 0x1409F50EC (BgpTxtDestroyRegion.c)
 *     BgpFoDestroy @ 0x1409F51CC (BgpFoDestroy.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F5370 (AnFwDisplayProgressIndicator.c)
 */

__int64 BgpFwLibraryDisable()
{
  __int64 result; // rax

  result = (unsigned int)dword_140C134F0;
  if ( (dword_140C134F0 & 2) != 0 )
  {
    if ( (dword_140C134F0 & 0x4000000) != 0 )
      AnFwDisableBackgroundUpdateTimer();
    AnFwFadeCompletion();
    if ( qword_140C135B8 )
    {
      BgpTxtDestroyRegion(qword_140C135B8);
      if ( BgpTextRegionSave == qword_140C135B8 )
        BgpTextRegionSave = 0LL;
      qword_140C135B8 = 0LL;
    }
    AnFwDisplayProgressIndicator(0LL);
    if ( qword_140C135B0 )
    {
      BgpTxtDestroyRegion(qword_140C135B0);
      if ( BgpAnimationRegionSave == qword_140C135B0 )
        BgpAnimationRegionSave = 0LL;
      qword_140C135B0 = 0LL;
    }
    if ( qword_140C13598 )
    {
      BgpFoDestroy(qword_140C13598);
      if ( *(_QWORD *)qword_140C13598 )
      {
        if ( (*(_DWORD *)(qword_140C13598 + 12) & 1) == 0 )
          BgpFwFreeMemory(*(_QWORD *)qword_140C13598);
      }
      BgpFwFreeMemory(qword_140C13598);
      qword_140C13598 = 0LL;
    }
    LogFwReport();
    ResFwBackgroundTransition(1);
    result = 0LL;
    dword_140C134F0 &= ~2u;
    BgInternal = 0LL;
    qword_140C134A0 = 0LL;
    xmmword_140C13490 = 0LL;
  }
  return result;
}
