/*
 * XREFs of BgDisplayBackgroundUpdate @ 0x1409F7748
 * Callers:
 *     BgkDestroy @ 0x1409F7B08 (BgkDestroy.c)
 *     BgkDisplayBackgroundUpdate @ 0x140A99B44 (BgkDisplayBackgroundUpdate.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x14039B9D8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039BA28 (BgpFwAcquireLock.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409F7784 (AnFwDisplayBackgroundUpdate.c)
 */

__int64 __fastcall BgDisplayBackgroundUpdate(char a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx

  BgpFwAcquireLock();
  if ( (dword_140C13330 & 1) != 0 )
  {
    LOBYTE(v2) = a1;
    v3 = AnFwDisplayBackgroundUpdate(v2);
  }
  else
  {
    v3 = -1073741823;
  }
  BgpFwReleaseLock();
  return v3;
}
