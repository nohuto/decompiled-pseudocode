/*
 * XREFs of BgDisplayProgressIndicator @ 0x1409F7334
 * Callers:
 *     PopDecompressHiberBlocks @ 0x140997874 (PopDecompressHiberBlocks.c)
 *     BgkDestroy @ 0x1409F7B08 (BgkDestroy.c)
 *     BgkDisplayProgressIndicator @ 0x140A98F4C (BgkDisplayProgressIndicator.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x14039B9D8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039BA28 (BgpFwAcquireLock.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F7370 (AnFwDisplayProgressIndicator.c)
 */

__int64 __fastcall BgDisplayProgressIndicator(char a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx

  BgpFwAcquireLock();
  if ( (dword_140C13330 & 1) != 0 )
  {
    LOBYTE(v2) = a1;
    v3 = AnFwDisplayProgressIndicator(v2);
  }
  else
  {
    v3 = -1073741823;
  }
  BgpFwReleaseLock();
  return v3;
}
