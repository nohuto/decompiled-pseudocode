/*
 * XREFs of PspDetachSession @ 0x140711198
 * Callers:
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     MmDetachSession @ 0x14035DA40 (MmDetachSession.c)
 */

void __fastcall PspDetachSession(PADAPTER_OBJECT DmaAdapter, __int64 a2)
{
  MmDetachSession((__int64)DmaAdapter, a2);
  HalPutDmaAdapter(DmaAdapter);
}
