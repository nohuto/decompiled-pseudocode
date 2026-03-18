/*
 * XREFs of ObpReleaseLookupContext @ 0x14025B298
 * Callers:
 *     ObReferenceObjectByName @ 0x140613480 (ObReferenceObjectByName.c)
 *     ObpInsertOrLocateNamedObject @ 0x140616B1C (ObpInsertOrLocateNamedObject.c)
 *     ObCloseHandleTableEntry @ 0x140628AD0 (ObCloseHandleTableEntry.c)
 *     ObReferenceObjectByNameEx @ 0x14064B8F0 (ObReferenceObjectByNameEx.c)
 *     ObpDeleteNameCheck @ 0x14068AC10 (ObpDeleteNameCheck.c)
 *     ObpCreateSymbolicLinkName @ 0x1406E3D08 (ObpCreateSymbolicLinkName.c)
 *     ObCreateObjectTypeEx @ 0x14077E640 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140A3AAB4 (ObInitSystem.c)
 * Callees:
 *     ObpUnlockDirectory @ 0x14025B2D4 (ObpUnlockDirectory.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
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
