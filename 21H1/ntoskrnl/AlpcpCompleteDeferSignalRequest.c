/*
 * XREFs of AlpcpCompleteDeferSignalRequest @ 0x140611C38
 * Callers:
 *     NtReplyWaitReceivePortEx @ 0x140611820 (NtReplyWaitReceivePortEx.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     AlpcpSignal @ 0x14033495C (AlpcpSignal.c)
 */

void __fastcall AlpcpCompleteDeferSignalRequest(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
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
