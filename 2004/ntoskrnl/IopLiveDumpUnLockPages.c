/*
 * XREFs of IopLiveDumpUnLockPages @ 0x140504D9C
 * Callers:
 *     IopLiveDumpUncorralProcessors @ 0x1409AA778 (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x1402248C0 (MiLockPagableImageSection.c)
 */

void IopLiveDumpUnLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
}
