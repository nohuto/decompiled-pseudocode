/*
 * XREFs of AnFwFadeCompletion @ 0x140AACA74
 * Callers:
 *     ResFwFreeContext @ 0x140AAB07C (ResFwFreeContext.c)
 *     BgpFwLibraryDisable @ 0x140AAE9F4 (BgpFwLibraryDisable.c)
 *     BgpConsoleDisplayCharacter @ 0x140AB0AB0 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x140AB0E60 (BgpConsoleDisplayString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     BgpFwReleaseLock @ 0x1403A7BF0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1403A7C40 (BgpFwAcquireLock.c)
 *     LogFwStat @ 0x140AACFEC (LogFwStat.c)
 *     BgpGxRectangleDestroy @ 0x140AAD3E0 (BgpGxRectangleDestroy.c)
 */

void AnFwFadeCompletion()
{
  if ( (dword_140C0DF90 & 0xC00) != 0xC00 )
  {
    LogFwStat(0LL, 7LL, 0LL);
    BgpFwReleaseLock();
    KeWaitForSingleObject(&stru_140D009C0, Executive, 0, 0, 0LL);
    BgpFwAcquireLock();
    if ( qword_140C0B258 )
    {
      BgpGxRectangleDestroy(qword_140C0B258);
      qword_140C0B258 = 0LL;
    }
    if ( qword_140C0B288 )
    {
      BgpGxRectangleDestroy(qword_140C0B288);
      qword_140C0B288 = 0LL;
    }
    if ( qword_140C0B290 )
    {
      BgpGxRectangleDestroy(qword_140C0B290);
      qword_140C0B290 = 0LL;
    }
    if ( qword_140C0B298 )
    {
      BgpGxRectangleDestroy(qword_140C0B298);
      qword_140C0B298 = 0LL;
    }
    if ( qword_140C0B2C8 )
    {
      BgpGxRectangleDestroy(qword_140C0B2C8);
      qword_140C0B2C8 = 0LL;
    }
    if ( qword_140C0B2D0 )
    {
      BgpGxRectangleDestroy(qword_140C0B2D0);
      qword_140C0B2D0 = 0LL;
    }
  }
}
