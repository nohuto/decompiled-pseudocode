/*
 * XREFs of ?Release@CMemoryManager@System@Windows@@WCI@EAAKXZ @ 0x18000AE40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall Windows::System::CMemoryManager::Release(__int64 a1, volatile int *a2)
{
  return Windows::System::CMemoryManager::Release((Windows::System::CMemoryManager *)(a1 - 40), a2);
}
