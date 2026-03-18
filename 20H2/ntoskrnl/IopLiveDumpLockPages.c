/*
 * XREFs of IopLiveDumpLockPages @ 0x14089B0F8
 * Callers:
 *     IopLiveDumpCorralProcessors @ 0x1409AEDA0 (IopLiveDumpCorralProcessors.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x140296DE0 (MiLockPagableImageSection.c)
 */

void IopLiveDumpLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
}
