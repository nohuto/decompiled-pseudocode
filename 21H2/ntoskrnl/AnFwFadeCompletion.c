/*
 * XREFs of AnFwFadeCompletion @ 0x1409F31B4
 * Callers:
 *     ResFwFreeContext @ 0x1409F207C (ResFwFreeContext.c)
 *     BgpFwLibraryDisable @ 0x1409F4FE8 (BgpFwLibraryDisable.c)
 *     BgpConsoleDisplayCharacter @ 0x1409F77B0 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x1409F7B60 (BgpConsoleDisplayString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     BgpFwReleaseLock @ 0x14039C3F8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039C448 (BgpFwAcquireLock.c)
 *     BgpGxRectangleDestroy @ 0x1409F3290 (BgpGxRectangleDestroy.c)
 *     LogFwStat @ 0x1409F37D8 (LogFwStat.c)
 */

void AnFwFadeCompletion()
{
  if ( (dword_140C134F0 & 0xC00) != 0xC00 )
  {
    LogFwStat(0LL, 7LL, 0LL);
    BgpFwReleaseLock();
    KeWaitForSingleObject(&stru_140CF3340, Executive, 0, 0, 0LL);
    BgpFwAcquireLock();
    if ( qword_140C10E78 )
    {
      BgpGxRectangleDestroy(qword_140C10E78);
      qword_140C10E78 = 0LL;
    }
    if ( qword_140C10EA0 )
    {
      BgpGxRectangleDestroy(qword_140C10EA0);
      qword_140C10EA0 = 0LL;
    }
    if ( qword_140C10EA8 )
    {
      BgpGxRectangleDestroy(qword_140C10EA8);
      qword_140C10EA8 = 0LL;
    }
    if ( qword_140C10EB0 )
    {
      BgpGxRectangleDestroy(qword_140C10EB0);
      qword_140C10EB0 = 0LL;
    }
    if ( qword_140C10ED8 )
    {
      BgpGxRectangleDestroy(qword_140C10ED8);
      qword_140C10ED8 = 0LL;
    }
    if ( qword_140C10EE0 )
    {
      BgpGxRectangleDestroy(qword_140C10EE0);
      qword_140C10EE0 = 0LL;
    }
  }
}
