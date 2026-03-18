/*
 * XREFs of FsRtlReleaseFileForCcFlush @ 0x1407080AC
 * Callers:
 *     MmFlushSection @ 0x1403542A0 (MmFlushSection.c)
 *     MiDestroySection @ 0x14037EAEC (MiDestroySection.c)
 *     MiDeleteCachedSubsection @ 0x1405272CC (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x140527CB4 (MiFlushControlArea.c)
 *     MmFlushVirtualMemory @ 0x1406D2554 (MmFlushVirtualMemory.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140211290 (IoGetRelatedDeviceObject.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     FsFilterCtrlFree @ 0x14029FEF8 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x14029FF20 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x14029FFB0 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x1402A02D0 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x1402A0360 (IoGetBaseFileSystemDeviceObject.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140361820 (IoGetDeviceAttachmentBaseRef.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 */

void __fastcall FsRtlReleaseFileForCcFlush(PFILE_OBJECT FileObject)
{
  unsigned int v2; // ebx
  PDEVICE_OBJECT *v3; // r12
  char v4; // r13
  __int64 v5; // r9
  struct _DMA_ADAPTER *BaseFileSystemDeviceObject; // r14
  _DMA_OPERATIONS *DmaOperations; // rax
  unsigned int (__fastcall *ReadDmaCounter)(_DMA_ADAPTER *); // rsi
  __int64 v9; // rdi
  int v10; // eax
  char v11; // r13
  __int64 (__fastcall *v12)(PFILE_OBJECT, struct _DMA_ADAPTER *); // rax
  _DMA_OPERATIONS *v13; // rax
  PVOID FsContext; // rbx
  struct _ERESOURCE *v15; // rcx
  struct _ERESOURCE *v16; // rcx
  __int64 v17; // [rsp+38h] [rbp-D0h] BYREF
  PDEVICE_OBJECT RelatedDeviceObject; // [rsp+40h] [rbp-C8h]
  PDEVICE_OBJECT v19[72]; // [rsp+48h] [rbp-C0h] BYREF

  memset(v19, 0, 0x238uLL);
  v2 = 0;
  v3 = v19;
  HIDWORD(v17) = 0;
  v4 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = (struct _DMA_ADAPTER *)IoGetBaseFileSystemDeviceObject(FileObject);
  DmaOperations = BaseFileSystemDeviceObject->DmaOperations;
  ReadDmaCounter = DmaOperations->ReadDmaCounter;
  v9 = *((_QWORD *)DmaOperations->FreeAdapterChannel + 6);
  if ( v9 && (*(_DWORD *)v9 >= 0x40u && *(_QWORD *)(v9 + 56) || *(_DWORD *)v9 >= 0x48u && *(_QWORD *)(v9 + 64)) )
    v4 = 1;
  if ( RelatedDeviceObject == (PDEVICE_OBJECT)BaseFileSystemDeviceObject && !v4 )
  {
    v3 = 0LL;
    goto LABEL_10;
  }
  FsFilterCtrlInit((__int64)v19, 250, (__int64)RelatedDeviceObject, v5, (__int64)FileObject, 0);
  v10 = FsFilterPerformCallbacks((__int64)v19, 0, 1, (_DWORD *)&v17 + 1);
  v2 = v10;
  if ( v10 < 0 )
    goto LABEL_23;
  if ( !v10 )
  {
    FileObject = (PFILE_OBJECT)v19[2];
    if ( ((__int64)v19[8] & 4) != 0 )
    {
      BaseFileSystemDeviceObject = (struct _DMA_ADAPTER *)IoGetDeviceAttachmentBaseRef(v19[1]);
      v11 = 1;
      v13 = BaseFileSystemDeviceObject->DmaOperations;
      ReadDmaCounter = v13->ReadDmaCounter;
      v9 = *((_QWORD *)v13->FreeAdapterChannel + 6);
LABEL_11:
      if ( !v9 || (*(_DWORD *)v9 < 0x40u || !*(_QWORD *)(v9 + 56)) && (*(_DWORD *)v9 < 0x48u || !*(_QWORD *)(v9 + 64)) )
      {
        if ( ReadDmaCounter
          && *(_DWORD *)ReadDmaCounter >= 0xE0u
          && (v12 = (__int64 (__fastcall *)(PFILE_OBJECT, struct _DMA_ADAPTER *))*((_QWORD *)ReadDmaCounter + 27)) != 0LL )
        {
          v2 = v12(FileObject, BaseFileSystemDeviceObject);
        }
        else
        {
          v2 = -1073741808;
        }
        HIDWORD(v17) |= 1u;
      }
      if ( v11 )
        HalPutDmaAdapter(BaseFileSystemDeviceObject);
      goto LABEL_23;
    }
LABEL_10:
    v11 = 0;
    goto LABEL_11;
  }
  v2 = 0;
  if ( v10 != 294 )
    v2 = v10;
LABEL_23:
  if ( v2 == -1073741808 && (v17 & 0x100000000LL) != 0 )
  {
    FsContext = FileObject->FsContext;
    v15 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
    if ( v15 )
      ExReleaseResourceLite(v15);
    v16 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
    if ( v16 )
      ExReleaseResourceLite(v16);
    v2 = 0;
  }
  if ( v3 )
  {
    if ( *((_WORD *)v3 + 37) )
      FsFilterPerformCompletionCallbacks((__int64)v19, v2);
    FsFilterCtrlFree((__int64)v19);
  }
  KeLeaveCriticalRegion();
}
