/*
 * XREFs of NtDeletePrivateNamespace @ 0x1408DF5F0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ObpRemoveNamespaceFromTable @ 0x1406A7F3C (ObpRemoveNamespaceFromTable.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1406E50F0 (ObpVerifyCreatorAccessCheck.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall NtDeletePrivateNamespace(void *a1)
{
  NTSTATUS result; // eax
  struct _DMA_ADAPTER *v2; // rbx
  int v3; // edi
  __int64 v4; // rdx
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp+10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0LL;
  DmaAdapter = 0LL;
  result = ObReferenceObjectByHandle(
             a1,
             0x10000u,
             ObpDirectoryObjectType,
             KeGetCurrentThread()->PreviousMode,
             (PVOID *)&DmaAdapter,
             &v6);
  if ( result >= 0 )
  {
    v2 = DmaAdapter;
    if ( *(_QWORD *)&DmaAdapter[20].Version )
    {
      v3 = ObpVerifyCreatorAccessCheck(&DmaAdapter[24].DmaOperations);
      if ( v3 >= 0 )
        v3 = ObpRemoveNamespaceFromTable(v2, v4);
    }
    else
    {
      v3 = -1073741816;
    }
    HalPutDmaAdapter(v2);
    return v3;
  }
  return result;
}
