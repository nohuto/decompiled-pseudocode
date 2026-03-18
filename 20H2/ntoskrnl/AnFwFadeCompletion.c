/*
 * XREFs of AnFwFadeCompletion @ 0x1409F51B4
 * Callers:
 *     ResFwFreeContext @ 0x1409F407C (ResFwFreeContext.c)
 *     BgpFwLibraryDisable @ 0x1409F6FE8 (BgpFwLibraryDisable.c)
 *     BgpConsoleDisplayCharacter @ 0x1409F97B0 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x1409F9B60 (BgpConsoleDisplayString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     BgpFwReleaseLock @ 0x14039B9D8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039BA28 (BgpFwAcquireLock.c)
 *     BgpGxRectangleDestroy @ 0x1409F5290 (BgpGxRectangleDestroy.c)
 *     LogFwStat @ 0x1409F57D8 (LogFwStat.c)
 */

void AnFwFadeCompletion()
{
  if ( (dword_140C13330 & 0xC00) != 0xC00 )
  {
    LogFwStat(0LL, 7LL, 0LL);
    BgpFwReleaseLock();
    KeWaitForSingleObject(&stru_140CF3000, Executive, 0, 0, 0LL);
    BgpFwAcquireLock();
    if ( qword_140C10E18 )
    {
      BgpGxRectangleDestroy(qword_140C10E18);
      qword_140C10E18 = 0LL;
    }
    if ( qword_140C10E40 )
    {
      BgpGxRectangleDestroy(qword_140C10E40);
      qword_140C10E40 = 0LL;
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
    if ( qword_140C10E78 )
    {
      BgpGxRectangleDestroy(qword_140C10E78);
      qword_140C10E78 = 0LL;
    }
    if ( qword_140C10E80 )
    {
      BgpGxRectangleDestroy(qword_140C10E80);
      qword_140C10E80 = 0LL;
    }
  }
}
