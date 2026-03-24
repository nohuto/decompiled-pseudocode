/*
 * XREFs of CmpVolumeContextCleanup @ 0x140872DD0
 * Callers:
 *     CmpVolumeContextDecrementRefCount @ 0x14071CA40 (CmpVolumeContextDecrementRefCount.c)
 *     CmpVolumeContextCreate @ 0x1407D0100 (CmpVolumeContextCreate.c)
 *     CmpVolumeContextFree @ 0x140872E08 (CmpVolumeContextFree.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     PiPagePathSetState @ 0x1407C9E40 (PiPagePathSetState.c)
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
