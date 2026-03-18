/*
 * XREFs of AnFwFadeCompletion @ 0x1409EF1B4
 * Callers:
 *     ResFwFreeContext @ 0x1409EE224 (ResFwFreeContext.c)
 *     BgpFwLibraryDisable @ 0x1409F0FE8 (BgpFwLibraryDisable.c)
 *     BgpConsoleDisplayCharacter @ 0x1409F37B0 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x1409F3B60 (BgpConsoleDisplayString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     BgpFwReleaseLock @ 0x140399518 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140399568 (BgpFwAcquireLock.c)
 *     BgpGxRectangleDestroy @ 0x1409EF290 (BgpGxRectangleDestroy.c)
 *     LogFwStat @ 0x1409EF7D8 (LogFwStat.c)
 */

void AnFwFadeCompletion()
{
  if ( (dword_140C13310 & 0xC00) != 0xC00 )
  {
    LogFwStat(0LL, 7LL, 0LL);
    BgpFwReleaseLock();
    KeWaitForSingleObject(&stru_140CF2F40, Executive, 0, 0, 0LL);
    BgpFwAcquireLock();
    if ( qword_140C10DF8 )
    {
      BgpGxRectangleDestroy(qword_140C10DF8);
      qword_140C10DF8 = 0LL;
    }
    if ( qword_140C10E20 )
    {
      BgpGxRectangleDestroy(qword_140C10E20);
      qword_140C10E20 = 0LL;
    }
    if ( qword_140C10E28 )
    {
      BgpGxRectangleDestroy(qword_140C10E28);
      qword_140C10E28 = 0LL;
    }
    if ( qword_140C10E30 )
    {
      BgpGxRectangleDestroy(qword_140C10E30);
      qword_140C10E30 = 0LL;
    }
    if ( qword_140C10E58 )
    {
      BgpGxRectangleDestroy(qword_140C10E58);
      qword_140C10E58 = 0LL;
    }
    if ( qword_140C10E60 )
    {
      BgpGxRectangleDestroy(qword_140C10E60);
      qword_140C10E60 = 0LL;
    }
  }
}
