/*
 * XREFs of PspDetachSession @ 0x1406E062C
 * Callers:
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     MmDetachSession @ 0x14023C8A0 (MmDetachSession.c)
 */

void __fastcall PspDetachSession(PADAPTER_OBJECT DmaAdapter, __int64 a2)
{
  MmDetachSession((__int64)DmaAdapter, a2);
  HalPutDmaAdapter(DmaAdapter);
}
