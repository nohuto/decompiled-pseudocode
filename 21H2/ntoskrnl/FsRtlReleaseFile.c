/*
 * XREFs of FsRtlReleaseFile @ 0x14071EE50
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x14029A360 (FsRtlCreateSectionForDataScan.c)
 *     CcWriteBehindInternal @ 0x1402D22C0 (CcWriteBehindInternal.c)
 *     CcDeleteSharedCacheMap @ 0x1402FEB2C (CcDeleteSharedCacheMap.c)
 *     MiReferenceControlArea @ 0x140361574 (MiReferenceControlArea.c)
 *     CcZeroEndOfLastPage @ 0x140361E4C (CcZeroEndOfLastPage.c)
 *     MiCreateNewSection @ 0x1406A9EA0 (MiCreateNewSection.c)
 *     MiShareExistingControlArea @ 0x14071F1CC (MiShareExistingControlArea.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140271700 (IoGetDeviceAttachmentBaseRef.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     IoGetRelatedDeviceObject @ 0x14035C670 (IoGetRelatedDeviceObject.c)
 *     FsFilterCtrlFree @ 0x1403619A8 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x1403619D0 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x140361A60 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x140361D80 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x140361E10 (IoGetBaseFileSystemDeviceObject.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
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
