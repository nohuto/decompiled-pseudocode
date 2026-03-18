/*
 * XREFs of AlpcSecurityDestroyProcedure @ 0x140685460
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1406854E4 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpRemoveResourcePort @ 0x140685C50 (AlpcpRemoveResourcePort.c)
 *     AlpcDeleteBlobByHandle @ 0x140685E3C (AlpcDeleteBlobByHandle.c)
 */

__int64 __fastcall AlpcSecurityDestroyProcedure(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = *a1;
  if ( v2 )
    AlpcDeleteBlobByHandle(v2, a1[1], a1);
  v3 = a1[3];
  if ( v3 )
  {
    AlpcpRemoveResourcePort(v3, a1);
    HalPutDmaAdapter((PADAPTER_OBJECT)a1[3]);
  }
  if ( a1[2] )
  {
    v4 = a1[6];
    if ( *(_DWORD *)(v4 + 192) == 1 || v4 )
      HalPutDmaAdapter((PADAPTER_OBJECT)v4);
    AlpcpReleasePagedPoolQuota(a1[2], 160LL);
    ObfDereferenceObjectWithTag((PVOID)a1[2], 0x63706C41u);
  }
  return 0LL;
}
