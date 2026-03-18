/*
 * XREFs of AnFwFadeCompletion @ 0x1409EF1B4
 * Callers:
 *     ResFwFreeContext @ 0x1409EE07C (ResFwFreeContext.c)
 *     BgpFwLibraryDisable @ 0x1409F0FE8 (BgpFwLibraryDisable.c)
 *     BgpConsoleDisplayCharacter @ 0x1409F37B0 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x1409F3B60 (BgpConsoleDisplayString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     BgpFwReleaseLock @ 0x140398D88 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140398DD8 (BgpFwAcquireLock.c)
 *     BgpGxRectangleDestroy @ 0x1409EF290 (BgpGxRectangleDestroy.c)
 *     LogFwStat @ 0x1409EF7D8 (LogFwStat.c)
 */

void AnFwFadeCompletion()
{
  if ( (dword_140C132D0 & 0xC00) != 0xC00 )
  {
    LogFwStat(0LL, 7LL, 0LL);
    BgpFwReleaseLock();
    KeWaitForSingleObject(&stru_140CF3080, Executive, 0, 0, 0LL);
    BgpFwAcquireLock();
    if ( qword_140C10DE8 )
    {
      BgpGxRectangleDestroy(qword_140C10DE8);
      qword_140C10DE8 = 0LL;
    }
    if ( qword_140C10E10 )
    {
      BgpGxRectangleDestroy(qword_140C10E10);
      qword_140C10E10 = 0LL;
    }
    if ( qword_140C10E18 )
    {
      BgpGxRectangleDestroy(qword_140C10E18);
      qword_140C10E18 = 0LL;
    }
    if ( qword_140C10E20 )
    {
      BgpGxRectangleDestroy(qword_140C10E20);
      qword_140C10E20 = 0LL;
    }
    if ( qword_140C10E48 )
    {
      BgpGxRectangleDestroy(qword_140C10E48);
      qword_140C10E48 = 0LL;
    }
    if ( qword_140C10E50 )
    {
      BgpGxRectangleDestroy(qword_140C10E50);
      qword_140C10E50 = 0LL;
    }
  }
}
