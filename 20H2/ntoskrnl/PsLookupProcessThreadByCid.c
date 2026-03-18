/*
 * XREFs of PsLookupProcessThreadByCid @ 0x14063BA80
 * Callers:
 *     PsOpenProcess @ 0x1406023B0 (PsOpenProcess.c)
 *     PsOpenThread @ 0x14063B5B0 (PsOpenThread.c)
 *     NtSetSystemInformation @ 0x1406F5A80 (NtSetSystemInformation.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     PsLookupThreadByThreadId @ 0x14063AEE0 (PsLookupThreadByThreadId.c)
 */

NTSTATUS __fastcall PsLookupProcessThreadByCid(__int64 a1, _QWORD *a2, PADAPTER_OBJECT *a3)
{
  NTSTATUS result; // eax
  PADAPTER_OBJECT v7; // rdi
  void *v8; // rbx
  PADAPTER_OBJECT DmaAdapter; // [rsp+30h] [rbp+8h] BYREF

  DmaAdapter = 0LL;
  result = PsLookupThreadByThreadId(*(HANDLE *)(a1 + 8), (PETHREAD *)&DmaAdapter);
  if ( result >= 0 )
  {
    v7 = DmaAdapter;
    if ( DmaAdapter[71].DmaOperations == *(_DMA_OPERATIONS **)a1 )
    {
      if ( a2 )
      {
        v8 = *(void **)&DmaAdapter[34].Version;
        ObfReferenceObjectWithTag(v8, 0x746C6644u);
        *a2 = v8;
      }
      *a3 = v7;
      return 0;
    }
    else
    {
      HalPutDmaAdapter(DmaAdapter);
      return -1073741813;
    }
  }
  return result;
}
