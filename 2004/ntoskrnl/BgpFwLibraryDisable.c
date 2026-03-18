/*
 * XREFs of BgpFwLibraryDisable @ 0x1409F0FE8
 * Callers:
 *     BgLibraryDisable @ 0x1409F0ED0 (BgLibraryDisable.c)
 *     BgpFwLibraryDestroy @ 0x1409F0F0C (BgpFwLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140398FD0 (BgpFwFreeMemory.c)
 *     LogFwReport @ 0x1409EE718 (LogFwReport.c)
 *     AnFwFadeCompletion @ 0x1409EF1B4 (AnFwFadeCompletion.c)
 *     ResFwBackgroundTransition @ 0x1409F0408 (ResFwBackgroundTransition.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1409F04CC (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpTxtDestroyRegion @ 0x1409F10EC (BgpTxtDestroyRegion.c)
 *     BgpFoDestroy @ 0x1409F11CC (BgpFoDestroy.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F1370 (AnFwDisplayProgressIndicator.c)
 */

__int64 BgpFwLibraryDisable()
{
  __int64 result; // rax

  result = (unsigned int)dword_140C13310;
  if ( (dword_140C13310 & 2) != 0 )
  {
    if ( (dword_140C13310 & 0x4000000) != 0 )
      AnFwDisableBackgroundUpdateTimer();
    AnFwFadeCompletion();
    if ( qword_140C133D8 )
    {
      BgpTxtDestroyRegion(qword_140C133D8);
      if ( BgpTextRegionSave == qword_140C133D8 )
        BgpTextRegionSave = 0LL;
      qword_140C133D8 = 0LL;
    }
    AnFwDisplayProgressIndicator(0LL);
    if ( qword_140C133D0 )
    {
      BgpTxtDestroyRegion(qword_140C133D0);
      if ( BgpAnimationRegionSave == qword_140C133D0 )
        BgpAnimationRegionSave = 0LL;
      qword_140C133D0 = 0LL;
    }
    if ( qword_140C133B8 )
    {
      BgpFoDestroy(qword_140C133B8);
      if ( *(_QWORD *)qword_140C133B8 )
      {
        if ( (*(_DWORD *)(qword_140C133B8 + 12) & 1) == 0 )
          BgpFwFreeMemory(*(_QWORD *)qword_140C133B8);
      }
      BgpFwFreeMemory(qword_140C133B8);
      qword_140C133B8 = 0LL;
    }
    LogFwReport();
    ResFwBackgroundTransition(1);
    result = 0LL;
    dword_140C13310 &= ~2u;
    BgInternal = 0LL;
    qword_140C132C0 = 0LL;
    xmmword_140C132B0 = 0LL;
  }
  return result;
}
