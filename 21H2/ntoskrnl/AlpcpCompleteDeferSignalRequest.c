/*
 * XREFs of AlpcpCompleteDeferSignalRequest @ 0x1406DA33C
 * Callers:
 *     NtReplyWaitReceivePortEx @ 0x1406DA1C0 (NtReplyWaitReceivePortEx.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     AlpcpSignal @ 0x1402AA060 (AlpcpSignal.c)
 */

void __fastcall AlpcpCompleteDeferSignalRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _DMA_ADAPTER *v5; // rcx

  if ( _bittestandreset((signed __int32 *)(a1 + 48), 2u) )
  {
    AlpcpSignal(a1, 0, 0, a4);
    v5 = *(struct _DMA_ADAPTER **)(a1 + 32);
    if ( v5 )
      HalPutDmaAdapter(v5);
  }
}
