/*
 * XREFs of HalpAcquirePccInterface @ 0x140866824
 * Callers:
 *     HaliInitializePlatformDebugTriggers @ 0x1404DCF70 (HaliInitializePlatformDebugTriggers.c)
 *     HalpStartPccCommand @ 0x140866C28 (HalpStartPccCommand.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     ZwOpenFile @ 0x1403FAA00 (ZwOpenFile.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406F0C00 (ObpReferenceObjectByHandleWithTag.c)
 *     HalpQueryPccInterface @ 0x140866A7C (HalpQueryPccInterface.c)
 */

__int64 __fastcall HalpAcquirePccInterface(unsigned __int8 a1, UNICODE_STRING *a2, void *a3)
{
  int PccInterface; // edi
  int v5; // esi
  struct _DMA_ADAPTER *v6; // rbx
  void *v8; // [rsp+28h] [rbp-58h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE FileHandle; // [rsp+A8h] [rbp+28h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+B8h] [rbp+38h] BYREF

  DmaAdapter = 0LL;
  PccInterface = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v5 = a1;
  IoStatusBlock = 0LL;
  if ( a2 && a2->Buffer )
  {
    ObjectAttributes.RootDirectory = 0LL;
    FileHandle = 0LL;
    ObjectAttributes.ObjectName = a2;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    PccInterface = ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 0, 0);
    if ( PccInterface >= 0 )
    {
      PccInterface = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)FileHandle,
                       0,
                       0LL,
                       0,
                       0x746C6644u,
                       &DmaAdapter,
                       0LL,
                       0LL);
      if ( PccInterface >= 0 )
      {
        v8 = a3;
        v6 = DmaAdapter;
        PccInterface = HalpQueryPccInterface((PDEVICE_OBJECT)DmaAdapter->DmaOperations, v5, v8);
        HalPutDmaAdapter(v6);
      }
    }
    if ( FileHandle )
      ZwClose(FileHandle);
  }
  return (unsigned int)PccInterface;
}
