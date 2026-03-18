/*
 * XREFs of IopLiveDumpUnLockPages @ 0x14050474C
 * Callers:
 *     IopLiveDumpUncorralProcessors @ 0x1409A9918 (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14027D910 (MiLockPagableImageSection.c)
 */

void IopLiveDumpUnLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
}
