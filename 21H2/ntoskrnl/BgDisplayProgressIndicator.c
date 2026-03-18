/*
 * XREFs of BgDisplayProgressIndicator @ 0x140AAD188
 * Callers:
 *     PopDecompressHiberBlocks @ 0x140A4CD9C (PopDecompressHiberBlocks.c)
 *     BgkDestroy @ 0x140AAE8BC (BgkDestroy.c)
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1403A7BF0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1403A7C40 (BgpFwAcquireLock.c)
 *     AnFwDisplayProgressIndicator @ 0x140AAD1C4 (AnFwDisplayProgressIndicator.c)
 */

__int64 __fastcall BgDisplayProgressIndicator(char a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx

  BgpFwAcquireLock();
  if ( (dword_140C0DF90 & 1) != 0 )
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
