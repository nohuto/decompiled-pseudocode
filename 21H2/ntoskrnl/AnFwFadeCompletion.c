/*
 * XREFs of AnFwFadeCompletion @ 0x1409F21B4
 * Callers:
 *     ResFwFreeContext @ 0x1409F107C (ResFwFreeContext.c)
 *     BgpFwLibraryDisable @ 0x1409F3FE8 (BgpFwLibraryDisable.c)
 *     BgpConsoleDisplayCharacter @ 0x1409F67B0 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x1409F6B60 (BgpConsoleDisplayString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     BgpFwReleaseLock @ 0x14039C2A8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039C2F8 (BgpFwAcquireLock.c)
 *     BgpGxRectangleDestroy @ 0x1409F2290 (BgpGxRectangleDestroy.c)
 *     LogFwStat @ 0x1409F27D8 (LogFwStat.c)
 */

void AnFwFadeCompletion()
{
  if ( (dword_140C134F0 & 0xC00) != 0xC00 )
  {
    LogFwStat(0LL, 7LL, 0LL);
    BgpFwReleaseLock();
    KeWaitForSingleObject(&stru_140CF3300, Executive, 0, 0, 0LL);
    BgpFwAcquireLock();
    if ( qword_140C10E98 )
    {
      BgpGxRectangleDestroy(qword_140C10E98);
      qword_140C10E98 = 0LL;
    }
    if ( qword_140C10EC0 )
    {
      BgpGxRectangleDestroy(qword_140C10EC0);
      qword_140C10EC0 = 0LL;
    }
    if ( qword_140C10EC8 )
    {
      BgpGxRectangleDestroy(qword_140C10EC8);
      qword_140C10EC8 = 0LL;
    }
    if ( qword_140C10ED0 )
    {
      BgpGxRectangleDestroy(qword_140C10ED0);
      qword_140C10ED0 = 0LL;
    }
    if ( qword_140C10EF8 )
    {
      BgpGxRectangleDestroy(qword_140C10EF8);
      qword_140C10EF8 = 0LL;
    }
    if ( qword_140C10F00 )
    {
      BgpGxRectangleDestroy(qword_140C10F00);
      qword_140C10F00 = 0LL;
    }
  }
}
