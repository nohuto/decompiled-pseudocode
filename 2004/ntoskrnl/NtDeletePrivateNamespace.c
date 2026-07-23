/*
 * XREFs of NtDeletePrivateNamespace @ 0x1408DBFF0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1406F4050 (ObpVerifyCreatorAccessCheck.c)
 *     ObpRemoveNamespaceFromTable @ 0x1406F877C (ObpRemoveNamespaceFromTable.c)
 */

NTSTATUS __cdecl NtDeletePrivateNamespace(HANDLE NamespaceHandle)
{
  NTSTATUS result; // eax
  struct _DMA_ADAPTER *v2; // rbx
  NTSTATUS v3; // edi
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp+10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  DmaAdapter = 0LL;
  result = ObReferenceObjectByHandle(
             NamespaceHandle,
             0x10000u,
             ObpDirectoryObjectType,
             KeGetCurrentThread()->PreviousMode,
             (PVOID *)&DmaAdapter,
             &v5);
  if ( result >= 0 )
  {
    v2 = DmaAdapter;
    if ( *(_QWORD *)&DmaAdapter[20].Version )
    {
      v3 = ObpVerifyCreatorAccessCheck(&DmaAdapter[24].DmaOperations);
      if ( v3 >= 0 )
        v3 = ObpRemoveNamespaceFromTable(v2);
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
