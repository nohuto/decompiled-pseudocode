/*
 * XREFs of BgLibraryDestroy @ 0x1409F95E0
 * Callers:
 *     BgkDestroy @ 0x1409F7B08 (BgkDestroy.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x14021E5E0 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x14039B9D8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039BA28 (BgpFwAcquireLock.c)
 *     BgpFwLibraryDestroy @ 0x1409F6F0C (BgpFwLibraryDestroy.c)
 */

__int64 BgLibraryDestroy()
{
  __int16 v1; // bx
  unsigned int v2; // edi

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  v1 = dword_140C13330;
  v2 = 0;
  if ( (dword_140C13330 & 1) == 0
    || (qword_140C13490 = 0LL, xmmword_140C134A0 = 0LL, v2 = BgpFwLibraryDestroy(), (v1 & 0xC00) != 0xC00) )
  {
    BgpFwReleaseLock();
  }
  return v2;
}
