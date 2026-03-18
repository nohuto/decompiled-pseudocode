/*
 * XREFs of IopLiveDumpLockPages @ 0x140895448
 * Callers:
 *     IopLiveDumpCorralProcessors @ 0x1409A8E30 (IopLiveDumpCorralProcessors.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x1402248C0 (MiLockPagableImageSection.c)
 */

void IopLiveDumpLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
}
