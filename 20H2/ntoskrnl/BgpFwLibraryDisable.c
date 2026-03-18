/*
 * XREFs of BgpFwLibraryDisable @ 0x1409F6FE8
 * Callers:
 *     BgLibraryDisable @ 0x1409F6ED0 (BgLibraryDisable.c)
 *     BgpFwLibraryDestroy @ 0x1409F6F0C (BgpFwLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039B490 (BgpFwFreeMemory.c)
 *     LogFwReport @ 0x1409F4718 (LogFwReport.c)
 *     AnFwFadeCompletion @ 0x1409F51B4 (AnFwFadeCompletion.c)
 *     ResFwBackgroundTransition @ 0x1409F6408 (ResFwBackgroundTransition.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1409F64CC (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpTxtDestroyRegion @ 0x1409F70EC (BgpTxtDestroyRegion.c)
 *     BgpFoDestroy @ 0x1409F71CC (BgpFoDestroy.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F7370 (AnFwDisplayProgressIndicator.c)
 */

__int64 BgpFwLibraryDisable()
{
  __int64 result; // rax

  result = (unsigned int)dword_140C13330;
  if ( (dword_140C13330 & 2) != 0 )
  {
    if ( (dword_140C13330 & 0x4000000) != 0 )
      AnFwDisableBackgroundUpdateTimer();
    AnFwFadeCompletion();
    if ( qword_140C133F8 )
    {
      BgpTxtDestroyRegion(qword_140C133F8);
      if ( BgpTextRegionSave == qword_140C133F8 )
        BgpTextRegionSave = 0LL;
      qword_140C133F8 = 0LL;
    }
    AnFwDisplayProgressIndicator(0LL);
    if ( qword_140C133F0 )
    {
      BgpTxtDestroyRegion(qword_140C133F0);
      if ( BgpAnimationRegionSave == qword_140C133F0 )
        BgpAnimationRegionSave = 0LL;
      qword_140C133F0 = 0LL;
    }
    if ( qword_140C133D8 )
    {
      BgpFoDestroy(qword_140C133D8);
      if ( *(_QWORD *)qword_140C133D8 )
      {
        if ( (*(_DWORD *)(qword_140C133D8 + 12) & 1) == 0 )
          BgpFwFreeMemory(*(_QWORD *)qword_140C133D8);
      }
      BgpFwFreeMemory(qword_140C133D8);
      qword_140C133D8 = 0LL;
    }
    LogFwReport();
    ResFwBackgroundTransition(1);
    result = 0LL;
    dword_140C13330 &= ~2u;
    BgInternal = 0LL;
    qword_140C132E0 = 0LL;
    xmmword_140C132D0 = 0LL;
  }
  return result;
}
