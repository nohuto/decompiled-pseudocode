/*
 * XREFs of AlpcSecurityDestroyProcedure @ 0x140689730
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     AlpcpRemoveResourcePort @ 0x140688180 (AlpcpRemoveResourcePort.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1406897B4 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcDeleteBlobByHandle @ 0x1406897EC (AlpcDeleteBlobByHandle.c)
 */

__int64 __fastcall AlpcSecurityDestroyProcedure(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = *(_QWORD *)a1;
  if ( v2 )
    AlpcDeleteBlobByHandle(v2, *(_QWORD *)(a1 + 8), a1);
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    AlpcpRemoveResourcePort(v3, a1);
    HalPutDmaAdapter(*(PADAPTER_OBJECT *)(a1 + 24));
  }
  if ( *(_QWORD *)(a1 + 16) )
  {
    v4 = *(_QWORD *)(a1 + 48);
    if ( *(_DWORD *)(v4 + 192) == 1 || v4 )
      HalPutDmaAdapter((PADAPTER_OBJECT)v4);
    AlpcpReleasePagedPoolQuota(*(_QWORD *)(a1 + 16), 160LL);
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 16), 0x63706C41u);
  }
  return 0LL;
}
