/*
 * XREFs of CmpVolumeContextCleanup @ 0x14086F9EC
 * Callers:
 *     CmpVolumeContextDecrementRefCount @ 0x140644ADC (CmpVolumeContextDecrementRefCount.c)
 *     CmpVolumeContextCreate @ 0x1407BD5B0 (CmpVolumeContextCreate.c)
 *     CmpVolumeContextFree @ 0x14086FA24 (CmpVolumeContextFree.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     PiPagePathSetState @ 0x1407B7350 (PiPagePathSetState.c)
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
