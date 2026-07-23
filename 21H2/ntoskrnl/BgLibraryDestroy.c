/*
 * XREFs of BgLibraryDestroy @ 0x1409F75E0
 * Callers:
 *     BgkDestroy @ 0x1409F5B08 (BgkDestroy.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x1402C43D0 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x14039C3F8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039C448 (BgpFwAcquireLock.c)
 *     BgpFwLibraryDestroy @ 0x1409F4F0C (BgpFwLibraryDestroy.c)
 */

__int64 BgLibraryDestroy()
{
  __int16 v1; // bx
  unsigned int v2; // edi

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  v1 = dword_140C134F0;
  v2 = 0;
  if ( (dword_140C134F0 & 1) == 0
    || (qword_140C13650 = 0LL, xmmword_140C13660 = 0LL, v2 = BgpFwLibraryDestroy(), (v1 & 0xC00) != 0xC00) )
  {
    BgpFwReleaseLock();
  }
  return v2;
}
