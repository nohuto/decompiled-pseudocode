/*
 * XREFs of BgDisplaySafeToPowerOffScreen @ 0x1405C446C
 * Callers:
 *     PopShutdownHandler @ 0x1409B3520 (PopShutdownHandler.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x14039C3F8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039C448 (BgpFwAcquireLock.c)
 *     BgpDisplaySafeToPowerOffScreen @ 0x1405C56AC (BgpDisplaySafeToPowerOffScreen.c)
 */

__int64 BgDisplaySafeToPowerOffScreen()
{
  unsigned int v0; // ebx

  BgpFwAcquireLock();
  if ( (dword_140C134F0 & 2) != 0 )
    v0 = BgpDisplaySafeToPowerOffScreen();
  else
    v0 = -1073741823;
  BgpFwReleaseLock();
  return v0;
}
