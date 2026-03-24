/*
 * XREFs of ObpReleaseLookupContext @ 0x14027EAD0
 * Callers:
 *     ObReferenceObjectByNameEx @ 0x1405DE69C (ObReferenceObjectByNameEx.c)
 *     ObpDeleteNameCheck @ 0x14062CBD0 (ObpDeleteNameCheck.c)
 *     ObReferenceObjectByName @ 0x140661100 (ObReferenceObjectByName.c)
 *     ObpInsertOrLocateNamedObject @ 0x140662900 (ObpInsertOrLocateNamedObject.c)
 *     ObpCreateSymbolicLinkName @ 0x1406B8F14 (ObpCreateSymbolicLinkName.c)
 *     ObCloseHandleTableEntry @ 0x1406F5660 (ObCloseHandleTableEntry.c)
 *     ObCreateObjectTypeEx @ 0x1407958F0 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140A3E538 (ObInitSystem.c)
 * Callees:
 *     ObpUnlockDirectory @ 0x14027EB0C (ObpUnlockDirectory.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
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
