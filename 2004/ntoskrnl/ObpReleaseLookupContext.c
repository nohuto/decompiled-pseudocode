/*
 * XREFs of ObpReleaseLookupContext @ 0x140297B18
 * Callers:
 *     ObCloseHandleTableEntry @ 0x1405F34B0 (ObCloseHandleTableEntry.c)
 *     ObReferenceObjectByNameEx @ 0x14062DD40 (ObReferenceObjectByNameEx.c)
 *     ObpDeleteNameCheck @ 0x14063D600 (ObpDeleteNameCheck.c)
 *     ObpInsertOrLocateNamedObject @ 0x140667CF0 (ObpInsertOrLocateNamedObject.c)
 *     ObReferenceObjectByName @ 0x140668760 (ObReferenceObjectByName.c)
 *     ObpCreateSymbolicLinkName @ 0x140707664 (ObpCreateSymbolicLinkName.c)
 *     ObCreateObjectTypeEx @ 0x14077DE30 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140A3A924 (ObInitSystem.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObpUnlockDirectory @ 0x140297B54 (ObpUnlockDirectory.c)
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
