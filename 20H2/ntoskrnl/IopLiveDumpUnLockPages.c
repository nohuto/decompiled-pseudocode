/*
 * XREFs of IopLiveDumpUnLockPages @ 0x1405087AC
 * Callers:
 *     IopLiveDumpUncorralProcessors @ 0x1409B06E8 (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x140296DE0 (MiLockPagableImageSection.c)
 */

void IopLiveDumpUnLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
}
