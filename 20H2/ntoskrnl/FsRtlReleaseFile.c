/*
 * XREFs of FsRtlReleaseFile @ 0x1406802A0
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x140247C98 (CcDeleteSharedCacheMap.c)
 *     CcWriteBehindInternal @ 0x140295920 (CcWriteBehindInternal.c)
 *     CcZeroEndOfLastPage @ 0x14029F7A8 (CcZeroEndOfLastPage.c)
 *     MiReferenceControlArea @ 0x14029FAA4 (MiReferenceControlArea.c)
 *     FsRtlCreateSectionForDataScan @ 0x1403561D0 (FsRtlCreateSectionForDataScan.c)
 *     MiShareExistingControlArea @ 0x14067EFC4 (MiShareExistingControlArea.c)
 *     MiCreateNewSection @ 0x140709EC4 (MiCreateNewSection.c)
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

void __stdcall FsRtlReleaseFile(PFILE_OBJECT FileObject)
{
  char v2; // r14
  PDEVICE_OBJECT *v3; // rsi
  signed int v4; // edi
  char v5; // r13
  PDEVICE_OBJECT RelatedDeviceObject; // r12
  struct _DMA_ADAPTER *BaseFileSystemDeviceObject; // rcx
  __int64 v8; // r9
  _DMA_OPERATIONS *DmaOperations; // rbx
  unsigned int (__fastcall *ReadDmaCounter)(_DMA_ADAPTER *); // rbp
  __int64 v11; // rbx
  signed int v12; // eax
  struct _DMA_ADAPTER *DeviceAttachmentBaseRef; // r13
  char v14; // r12
  void (__fastcall *v15)(PFILE_OBJECT); // rax
  signed int v16; // ecx
  _DMA_OPERATIONS *v17; // rbx
  PVOID FsContext; // rax
  struct _ERESOURCE *v19; // rcx
  int v20; // [rsp+30h] [rbp-288h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+38h] [rbp-280h]
  PDEVICE_OBJECT v22[72]; // [rsp+40h] [rbp-278h] BYREF

  memset(v22, 0, 0x238uLL);
  v2 = 0;
  v3 = v22;
  v20 = 0;
  v4 = 0;
  v5 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = (struct _DMA_ADAPTER *)IoGetBaseFileSystemDeviceObject(FileObject);
  DmaAdapter = BaseFileSystemDeviceObject;
  DmaOperations = BaseFileSystemDeviceObject->DmaOperations;
  ReadDmaCounter = DmaOperations->ReadDmaCounter;
  v11 = *((_QWORD *)DmaOperations->FreeAdapterChannel + 6);
  if ( v11 && (*(_DWORD *)v11 >= 0x20u && *(_QWORD *)(v11 + 24) || *(_DWORD *)v11 >= 0x28u && *(_QWORD *)(v11 + 32)) )
    v5 = 1;
  if ( RelatedDeviceObject != (PDEVICE_OBJECT)BaseFileSystemDeviceObject || v5 )
  {
    FsFilterCtrlInit((__int64)v22, 254, (__int64)RelatedDeviceObject, v8, (__int64)FileObject, 0);
    v12 = FsFilterPerformCallbacks((__int64)v22, 0, 0, &v20);
    v2 = v20;
    v4 = v12;
  }
  else
  {
    v3 = 0LL;
  }
  if ( v4 >= 0 )
  {
    if ( v4 )
    {
      v16 = 0;
      if ( v4 != 294 )
        v16 = v4;
      v4 = v16;
    }
    else
    {
      if ( v3 && (FileObject = (PFILE_OBJECT)v22[2], ((__int64)v22[8] & 4) != 0) )
      {
        DeviceAttachmentBaseRef = (struct _DMA_ADAPTER *)IoGetDeviceAttachmentBaseRef(v22[1]);
        v14 = 1;
        v17 = DeviceAttachmentBaseRef->DmaOperations;
        ReadDmaCounter = v17->ReadDmaCounter;
        v11 = *((_QWORD *)v17->FreeAdapterChannel + 6);
      }
      else
      {
        DeviceAttachmentBaseRef = DmaAdapter;
        v14 = 0;
      }
      if ( !v11
        || (*(_DWORD *)v11 < 0x20u || !*(_QWORD *)(v11 + 24)) && (*(_DWORD *)v11 < 0x28u || !*(_QWORD *)(v11 + 32)) )
      {
        if ( ReadDmaCounter
          && *(_DWORD *)ReadDmaCounter >= 0x68u
          && (v15 = (void (__fastcall *)(PFILE_OBJECT))*((_QWORD *)ReadDmaCounter + 12)) != 0LL )
        {
          v15(FileObject);
        }
        else
        {
          v4 = -1073741808;
        }
        v2 |= 1u;
      }
      if ( v14 )
        HalPutDmaAdapter(DeviceAttachmentBaseRef);
    }
  }
  if ( v4 == -1073741808 && (v2 & 1) != 0 )
  {
    FsContext = FileObject->FsContext;
    if ( FsContext )
    {
      v19 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
      if ( v19 )
        ExReleaseResourceLite(v19);
    }
    v4 = 0;
  }
  if ( v3 )
  {
    if ( *((_WORD *)v3 + 37) )
      FsFilterPerformCompletionCallbacks((__int64)v22, v4);
    FsFilterCtrlFree((__int64)v22);
  }
  KeLeaveCriticalRegion();
}
