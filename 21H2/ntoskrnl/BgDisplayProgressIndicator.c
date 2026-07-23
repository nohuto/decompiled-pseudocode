/*
 * XREFs of BgDisplayProgressIndicator @ 0x1409F5334
 * Callers:
 *     PopDecompressHiberBlocks @ 0x140995874 (PopDecompressHiberBlocks.c)
 *     BgkDestroy @ 0x1409F5B08 (BgkDestroy.c)
 *     BgkDisplayProgressIndicator @ 0x140A96DDC (BgkDisplayProgressIndicator.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x14039C3F8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039C448 (BgpFwAcquireLock.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F5370 (AnFwDisplayProgressIndicator.c)
 */

__int64 __fastcall BgDisplayProgressIndicator(char a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx

  BgpFwAcquireLock();
  if ( (dword_140C134F0 & 1) != 0 )
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
