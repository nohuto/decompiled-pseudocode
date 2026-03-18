/*
 * XREFs of CmpVolumeContextCleanup @ 0x14086DF2C
 * Callers:
 *     CmpVolumeContextDecrementRefCount @ 0x14065B488 (CmpVolumeContextDecrementRefCount.c)
 *     CmpVolumeContextCreate @ 0x1407BA440 (CmpVolumeContextCreate.c)
 *     CmpVolumeContextFree @ 0x14086DF64 (CmpVolumeContextFree.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     PiPagePathSetState @ 0x1407B41E0 (PiPagePathSetState.c)
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
