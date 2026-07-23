/*
 * XREFs of FsRtlAcquireFileForCcFlushEx @ 0x14063BFF4
 * Callers:
 *     MmFlushSection @ 0x14026269C (MmFlushSection.c)
 *     MiDeleteCachedSubsection @ 0x140528FEC (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1405299D4 (MiFlushControlArea.c)
 *     MmFlushVirtualMemory @ 0x1405E85C4 (MmFlushVirtualMemory.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140271700 (IoGetDeviceAttachmentBaseRef.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14035ABD0 (ExIsResourceAcquiredSharedLite.c)
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

__int64 __fastcall FsRtlAcquireFileForCcFlushEx(PFILE_OBJECT FileObject)
{
  signed int v2; // ebx
  PDEVICE_OBJECT *v3; // r15
  char v4; // r12
  __int64 v5; // r9
  struct _DMA_ADAPTER *BaseFileSystemDeviceObject; // r14
  signed int v7; // ecx
  _DMA_OPERATIONS *DmaOperations; // rax
  unsigned int (__fastcall *ReadDmaCounter)(_DMA_ADAPTER *); // rsi
  __int64 v10; // rdi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  char v13; // r12
  __int64 (__fastcall *v14)(PFILE_OBJECT, struct _DMA_ADAPTER *); // rax
  struct _KTHREAD *v15; // rax
  _DMA_OPERATIONS *v16; // rax
  PVOID FsContext; // rbx
  struct _ERESOURCE *v18; // rcx
  ULONG IsResourceAcquiredSharedLite; // eax
  struct _ERESOURCE *v20; // rcx
  struct _ERESOURCE *v21; // rcx
  __int64 v22; // [rsp+38h] [rbp-D0h] BYREF
  PDEVICE_OBJECT RelatedDeviceObject; // [rsp+40h] [rbp-C8h]
  PDEVICE_OBJECT v24[72]; // [rsp+48h] [rbp-C0h] BYREF

  memset(v24, 0, 0x238uLL);
  v2 = 0;
  v3 = v24;
  HIDWORD(v22) = 0;
  v4 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = (struct _DMA_ADAPTER *)IoGetBaseFileSystemDeviceObject(FileObject);
  v7 = 0;
  DmaOperations = BaseFileSystemDeviceObject->DmaOperations;
  ReadDmaCounter = DmaOperations->ReadDmaCounter;
  v10 = *((_QWORD *)DmaOperations->FreeAdapterChannel + 6);
  if ( v10 && (*(_DWORD *)v10 >= 0x30u && *(_QWORD *)(v10 + 40) || *(_DWORD *)v10 >= 0x38u && *(_QWORD *)(v10 + 48)) )
    v4 = 1;
  if ( RelatedDeviceObject != (PDEVICE_OBJECT)BaseFileSystemDeviceObject || v4 )
  {
    result = FsFilterCtrlInit((__int64)v24, 251, (__int64)RelatedDeviceObject, v5, (__int64)FileObject, 1u);
    if ( (int)result < 0 )
      return result;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v2 = FsFilterPerformCallbacks((__int64)v24, 1, 1, (_DWORD *)&v22 + 1);
    v7 = 0;
  }
  else
  {
    v15 = KeGetCurrentThread();
    v3 = 0LL;
    --v15->KernelApcDisable;
  }
  if ( v2 >= 0 )
  {
    if ( v2 )
    {
      if ( v2 != 294 )
        v7 = v2;
      v2 = v7;
    }
    else
    {
      if ( v3 && (FileObject = (PFILE_OBJECT)v24[2], ((__int64)v24[8] & 4) != 0) )
      {
        BaseFileSystemDeviceObject = (struct _DMA_ADAPTER *)IoGetDeviceAttachmentBaseRef(v24[1]);
        v13 = 1;
        v16 = BaseFileSystemDeviceObject->DmaOperations;
        ReadDmaCounter = v16->ReadDmaCounter;
        v10 = *((_QWORD *)v16->FreeAdapterChannel + 6);
      }
      else
      {
        v13 = 0;
      }
      if ( !v10
        || (*(_DWORD *)v10 < 0x30u || !*(_QWORD *)(v10 + 40)) && (*(_DWORD *)v10 < 0x38u || !*(_QWORD *)(v10 + 48)) )
      {
        if ( ReadDmaCounter
          && *(_DWORD *)ReadDmaCounter >= 0xD8u
          && (v14 = (__int64 (__fastcall *)(PFILE_OBJECT, struct _DMA_ADAPTER *))*((_QWORD *)ReadDmaCounter + 26)) != 0LL )
        {
          v2 = v14(FileObject, BaseFileSystemDeviceObject);
        }
        else
        {
          v2 = -1073741808;
        }
        HIDWORD(v22) |= 1u;
      }
      if ( v13 )
        HalPutDmaAdapter(BaseFileSystemDeviceObject);
    }
  }
  if ( v2 == -1073741808 && (v22 & 0x100000000LL) != 0 )
  {
    FsContext = FileObject->FsContext;
    v18 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
    if ( v18 )
    {
      IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(v18);
      v20 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
      if ( IsResourceAcquiredSharedLite )
        ExAcquireResourceSharedLite(v20, 1u);
      else
        ExAcquireResourceExclusiveLite(v20, 1u);
    }
    v21 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
    if ( v21 )
      ExAcquireResourceSharedLite(v21, 1u);
    v2 = 0;
  }
  if ( v3 )
  {
    if ( *((_WORD *)v3 + 37) )
      FsFilterPerformCompletionCallbacks((__int64)v24, v2);
    FsFilterCtrlFree((__int64)v24);
  }
  if ( v2 < 0 )
    KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
