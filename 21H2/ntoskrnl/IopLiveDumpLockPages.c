/*
 * XREFs of IopLiveDumpLockPages @ 0x140898828
 * Callers:
 *     IopLiveDumpCorralProcessors @ 0x1409ACBD0 (IopLiveDumpCorralProcessors.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x140327240 (MiLockPagableImageSection.c)
 */

void IopLiveDumpLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
}
