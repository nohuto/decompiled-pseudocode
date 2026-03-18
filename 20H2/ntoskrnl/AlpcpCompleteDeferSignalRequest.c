/*
 * XREFs of AlpcpCompleteDeferSignalRequest @ 0x1405F2B2C
 * Callers:
 *     NtReplyWaitReceivePortEx @ 0x1405F29B0 (NtReplyWaitReceivePortEx.c)
 * Callees:
 *     AlpcpSignal @ 0x140208A70 (AlpcpSignal.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 */

void __fastcall AlpcpCompleteDeferSignalRequest(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  struct _DMA_ADAPTER *v5; // rcx

  if ( _bittestandreset((signed __int32 *)(a1 + 48), 2u) )
  {
    AlpcpSignal(a1, 0LL, 0LL, a4);
    v5 = *(struct _DMA_ADAPTER **)(a1 + 32);
    if ( v5 )
      HalPutDmaAdapter(v5);
  }
}
