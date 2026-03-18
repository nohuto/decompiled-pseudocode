/*
 * XREFs of ObpReleaseLookupContext @ 0x14020AE7C
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x1405DFEC4 (ObpInsertOrLocateNamedObject.c)
 *     ObpDeleteNameCheck @ 0x1405E06C0 (ObpDeleteNameCheck.c)
 *     ObReferenceObjectByNameEx @ 0x1405E566C (ObReferenceObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x1405FDA80 (ObReferenceObjectByName.c)
 *     ObCloseHandleTableEntry @ 0x1406160E0 (ObCloseHandleTableEntry.c)
 *     ObpCreateSymbolicLinkName @ 0x1406DA1E4 (ObpCreateSymbolicLinkName.c)
 *     ObCreateObjectTypeEx @ 0x14078B3D0 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140A409B8 (ObInitSystem.c)
 * Callees:
 *     ObpUnlockDirectory @ 0x14020AEB8 (ObpUnlockDirectory.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 */

void __fastcall ObpReleaseLookupContext(__int64 a1)
{
  struct _DMA_ADAPTER *v2; // rcx

  if ( *(_BYTE *)(a1 + 30) )
    ObpUnlockDirectory(*(_QWORD *)a1, a1);
  v2 = *(struct _DMA_ADAPTER **)(a1 + 8);
  if ( v2 )
  {
    HalPutDmaAdapter(v2);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
