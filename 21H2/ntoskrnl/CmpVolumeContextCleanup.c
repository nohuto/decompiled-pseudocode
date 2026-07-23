/*
 * XREFs of CmpVolumeContextCleanup @ 0x140872F30
 * Callers:
 *     CmpVolumeContextDecrementRefCount @ 0x1405E0904 (CmpVolumeContextDecrementRefCount.c)
 *     CmpVolumeContextCreate @ 0x1407D0270 (CmpVolumeContextCreate.c)
 *     CmpVolumeContextFree @ 0x140872F68 (CmpVolumeContextFree.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PiPagePathSetState @ 0x1407CA160 (PiPagePathSetState.c)
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
