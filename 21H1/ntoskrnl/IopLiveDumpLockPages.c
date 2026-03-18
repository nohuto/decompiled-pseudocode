/*
 * XREFs of IopLiveDumpLockPages @ 0x140894128
 * Callers:
 *     IopLiveDumpCorralProcessors @ 0x1409A7FD0 (IopLiveDumpCorralProcessors.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14027D910 (MiLockPagableImageSection.c)
 */

void IopLiveDumpLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
}
