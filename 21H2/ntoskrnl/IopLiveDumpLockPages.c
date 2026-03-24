/*
 * XREFs of IopLiveDumpLockPages @ 0x1408986C8
 * Callers:
 *     IopLiveDumpCorralProcessors @ 0x1409ABCA0 (IopLiveDumpCorralProcessors.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14031C4F0 (MiLockPagableImageSection.c)
 */

void IopLiveDumpLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
}
