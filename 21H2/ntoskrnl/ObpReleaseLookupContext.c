/*
 * XREFs of ObpReleaseLookupContext @ 0x14026CA70
 * Callers:
 *     ObpCreateSymbolicLinkName @ 0x140618538 (ObpCreateSymbolicLinkName.c)
 *     ObReferenceObjectByName @ 0x140655F20 (ObReferenceObjectByName.c)
 *     ObpInsertOrLocateNamedObject @ 0x140657720 (ObpInsertOrLocateNamedObject.c)
 *     ObpDeleteNameCheck @ 0x140663D60 (ObpDeleteNameCheck.c)
 *     ObReferenceObjectByNameEx @ 0x1406CDDFC (ObReferenceObjectByNameEx.c)
 *     ObCloseHandleTableEntry @ 0x14070CA40 (ObCloseHandleTableEntry.c)
 *     ObCreateObjectTypeEx @ 0x140795AF0 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140A3F538 (ObInitSystem.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObpUnlockDirectory @ 0x14026CAAC (ObpUnlockDirectory.c)
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
