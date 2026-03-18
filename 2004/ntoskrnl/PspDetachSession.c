/*
 * XREFs of PspDetachSession @ 0x1406A4C08
 * Callers:
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     MmDetachSession @ 0x1402DCA80 (MmDetachSession.c)
 */

void __fastcall PspDetachSession(PADAPTER_OBJECT DmaAdapter, __int64 a2)
{
  MmDetachSession((__int64)DmaAdapter, a2);
  HalPutDmaAdapter(DmaAdapter);
}
