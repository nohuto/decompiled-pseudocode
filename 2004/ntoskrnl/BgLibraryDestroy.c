/*
 * XREFs of BgLibraryDestroy @ 0x1409F35E0
 * Callers:
 *     BgkDestroy @ 0x1409F1B08 (BgkDestroy.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x140228560 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x140399518 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140399568 (BgpFwAcquireLock.c)
 *     BgpFwLibraryDestroy @ 0x1409F0F0C (BgpFwLibraryDestroy.c)
 */

__int64 BgLibraryDestroy()
{
  __int16 v1; // bx
  unsigned int v2; // edi

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  v1 = dword_140C13310;
  v2 = 0;
  if ( (dword_140C13310 & 1) == 0
    || (qword_140C13470 = 0LL, xmmword_140C13480 = 0LL, v2 = BgpFwLibraryDestroy(), (v1 & 0xC00) != 0xC00) )
  {
    BgpFwReleaseLock();
  }
  return v2;
}
