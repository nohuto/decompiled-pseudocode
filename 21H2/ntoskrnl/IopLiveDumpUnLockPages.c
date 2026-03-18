/*
 * XREFs of IopLiveDumpUnLockPages @ 0x14055C23C
 * Callers:
 *     IopLiveDumpUncorralProcessors @ 0x140A67A68 (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x1402FD820 (MiLockPagableImageSection.c)
 */

void IopLiveDumpUnLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
}
