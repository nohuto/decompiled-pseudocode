/*
 * XREFs of CmpVolumeContextCleanup @ 0x14087553C
 * Callers:
 *     CmpVolumeContextDecrementRefCount @ 0x1406A3298 (CmpVolumeContextDecrementRefCount.c)
 *     CmpVolumeContextCreate @ 0x1407CBE40 (CmpVolumeContextCreate.c)
 *     CmpVolumeContextFree @ 0x140875574 (CmpVolumeContextFree.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     PiPagePathSetState @ 0x1407C5BDC (PiPagePathSetState.c)
 */

void __fastcall CmpVolumeContextCleanup(__int64 a1)
{
  struct _DMA_ADAPTER *v2; // rcx

  if ( *(_BYTE *)(a1 + 64) )
    PiPagePathSetState(*(struct _FILE_OBJECT **)(a1 + 48), 0);
  v2 = *(struct _DMA_ADAPTER **)(a1 + 48);
  if ( v2 )
    HalPutDmaAdapter(v2);
}
