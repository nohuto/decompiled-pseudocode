/*
 * XREFs of BgDisplaySafeToPowerOffScreen @ 0x1405BE66C
 * Callers:
 *     PopShutdownHandler @ 0x1409AE920 (PopShutdownHandler.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140398D88 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140398DD8 (BgpFwAcquireLock.c)
 *     BgpDisplaySafeToPowerOffScreen @ 0x1405BF8AC (BgpDisplaySafeToPowerOffScreen.c)
 */

__int64 BgDisplaySafeToPowerOffScreen()
{
  unsigned int v0; // ebx

  BgpFwAcquireLock();
  if ( (dword_140C132D0 & 2) != 0 )
    v0 = BgpDisplaySafeToPowerOffScreen();
  else
    v0 = -1073741823;
  BgpFwReleaseLock();
  return v0;
}
