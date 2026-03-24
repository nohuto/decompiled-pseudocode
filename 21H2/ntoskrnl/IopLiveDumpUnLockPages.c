/*
 * XREFs of IopLiveDumpUnLockPages @ 0x14050A2DC
 * Callers:
 *     IopLiveDumpUncorralProcessors @ 0x1409AD5E8 (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14031C4F0 (MiLockPagableImageSection.c)
 */

void IopLiveDumpUnLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
}
