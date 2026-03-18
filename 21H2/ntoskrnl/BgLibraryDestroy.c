/*
 * XREFs of BgLibraryDestroy @ 0x140AB0910
 * Callers:
 *     BgkDestroy @ 0x140AAE8BC (BgkDestroy.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1403A7BF0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1403A7C40 (BgpFwAcquireLock.c)
 *     BgpFwLibraryDestroy @ 0x140AAE918 (BgpFwLibraryDestroy.c)
 */

__int64 BgLibraryDestroy()
{
  __int16 v1; // bx
  unsigned int v2; // edi

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  v1 = dword_140C0DF90;
  v2 = 0;
  if ( (dword_140C0DF90 & 1) == 0
    || (qword_140C0E0F0 = 0LL, xmmword_140C0E100 = 0LL, v2 = BgpFwLibraryDestroy(), (v1 & 0xC00) != 0xC00) )
  {
    BgpFwReleaseLock();
  }
  return v2;
}
