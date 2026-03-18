/*
 * XREFs of AlpcSectionDestroyProcedure @ 0x1406CEF90
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     AlpcpRemoveResourcePort @ 0x140685C50 (AlpcpRemoveResourcePort.c)
 *     AlpcDeleteBlobByHandle @ 0x140685E3C (AlpcDeleteBlobByHandle.c)
 */

__int64 __fastcall AlpcSectionDestroyProcedure(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD **)(a1 + 16);
  if ( v2 )
  {
    AlpcDeleteBlobByHandle(v2, *(_QWORD *)(a1 + 24), a1);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
  {
    AlpcpRemoveResourcePort(v3, a1);
    HalPutDmaAdapter(*(PADAPTER_OBJECT *)(a1 + 40));
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  if ( *(_QWORD *)a1 )
    HalPutDmaAdapter(*(PADAPTER_OBJECT *)a1);
  return 0LL;
}
