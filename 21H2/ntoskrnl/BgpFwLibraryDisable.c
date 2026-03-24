/*
 * XREFs of BgpFwLibraryDisable @ 0x1409F3FE8
 * Callers:
 *     BgLibraryDisable @ 0x1409F3ED0 (BgLibraryDisable.c)
 *     BgpFwLibraryDestroy @ 0x1409F3F0C (BgpFwLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039BD60 (BgpFwFreeMemory.c)
 *     LogFwReport @ 0x1409F1524 (LogFwReport.c)
 *     AnFwFadeCompletion @ 0x1409F21B4 (AnFwFadeCompletion.c)
 *     ResFwBackgroundTransition @ 0x1409F3408 (ResFwBackgroundTransition.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1409F34CC (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpTxtDestroyRegion @ 0x1409F40EC (BgpTxtDestroyRegion.c)
 *     BgpFoDestroy @ 0x1409F41CC (BgpFoDestroy.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F4370 (AnFwDisplayProgressIndicator.c)
 */

__int64 BgpFwLibraryDisable()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  _DWORD *v3; // r9
  __int64 v4; // rdx
  __int64 v5; // r8
  _DWORD *v6; // r9

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
          BgpFwFreeMemory(*(_QWORD *)qword_140C13598, v1, v2, v3);
      }
      BgpFwFreeMemory(qword_140C13598, v1, v2, v3);
      qword_140C13598 = 0LL;
    }
    LogFwReport();
    ResFwBackgroundTransition(1, v4, v5, v6);
    result = 0LL;
    dword_140C134F0 &= ~2u;
    BgInternal = 0LL;
    qword_140C134A0 = 0LL;
    xmmword_140C13490 = 0LL;
  }
  return result;
}
