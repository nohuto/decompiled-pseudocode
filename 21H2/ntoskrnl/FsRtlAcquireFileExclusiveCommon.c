/*
 * XREFs of FsRtlAcquireFileExclusiveCommon @ 0x140707C40
 * Callers:
 *     FsRtlAcquireToCreateMappedSection @ 0x140707974 (FsRtlAcquireToCreateMappedSection.c)
 *     FsRtlAcquireFileExclusive @ 0x140707A40 (FsRtlAcquireFileExclusive.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRef @ 0x1402834F0 (IoGetDeviceAttachmentBaseRef.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x14034BBA0 (ExAcquireResourceExclusiveLite.c)
 *     IoGetRelatedDeviceObject @ 0x140351920 (IoGetRelatedDeviceObject.c)
 *     FsFilterCtrlFree @ 0x140356C58 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x140356C80 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x140356D10 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x140357030 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x1403570C0 (IoGetBaseFileSystemDeviceObject.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     memset @ 0x140414200 (memset.c)
 */

__int64 __fastcall FsRtlAcquireFileExclusiveCommon(
        PFILE_OBJECT FileObject,
        unsigned int a2,
        unsigned int a3,
        int a4,
        struct _DEVICE_OBJECT *a5)
{
  int v7; // ebx
  PDEVICE_OBJECT *v8; // rsi
  char v9; // r15
  PDEVICE_OBJECT RelatedDeviceObject; // rbp
  __int64 v11; // r9
  struct _DMA_ADAPTER *BaseFileSystemDeviceObject; // r13
  _DMA_OPERATIONS *DmaOperations; // rax
  unsigned int (__fastcall *ReadDmaCounter)(_DMA_ADAPTER *); // rcx
  void (__fastcall *FreeAdapterChannel)(_DMA_ADAPTER *); // rax
  __int64 v16; // r14
  __int64 result; // rax
  struct _KTHREAD *v18; // rax
  int v19; // eax
  int v20; // ecx
  struct _KTHREAD *CurrentThread; // rax
  char v22; // di
  _DMA_OPERATIONS *v23; // rax
  void (__fastcall *v24)(PFILE_OBJECT); // rax
  PVOID FsContext; // rax
  struct _ERESOURCE *v26; // rcx
  int v27; // [rsp+30h] [rbp-2B8h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-2B4h]
  int v29; // [rsp+38h] [rbp-2B0h]
  struct _DEVICE_OBJECT *v30; // [rsp+40h] [rbp-2A8h]
  unsigned int (__fastcall *v31)(_DMA_ADAPTER *); // [rsp+48h] [rbp-2A0h]
  PDEVICE_OBJECT v32[72]; // [rsp+50h] [rbp-298h] BYREF

  v28 = a3;
  v30 = a5;
  v29 = a4;
  memset(v32, 0, 0x238uLL);
  v7 = 0;
  v8 = v32;
  v27 = 0;
  v9 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = (struct _DMA_ADAPTER *)IoGetBaseFileSystemDeviceObject(FileObject);
  DmaOperations = BaseFileSystemDeviceObject->DmaOperations;
  ReadDmaCounter = DmaOperations->ReadDmaCounter;
  FreeAdapterChannel = DmaOperations->FreeAdapterChannel;
  v31 = ReadDmaCounter;
  v16 = *((_QWORD *)FreeAdapterChannel + 6);
  if ( v16 && (*(_DWORD *)v16 >= 0x10u && *(_QWORD *)(v16 + 8) || *(_DWORD *)v16 >= 0x18u && *(_QWORD *)(v16 + 16)) )
    v9 = 1;
  if ( RelatedDeviceObject == (PDEVICE_OBJECT)BaseFileSystemDeviceObject && !v9 )
  {
    CurrentThread = KeGetCurrentThread();
    v8 = 0LL;
    --CurrentThread->KernelApcDisable;
    goto LABEL_10;
  }
  if ( a2 == 1 )
    LOBYTE(v7) = 1;
  result = FsFilterCtrlInit((__int64)v32, 255, (__int64)RelatedDeviceObject, v11, (__int64)FileObject, v7);
  if ( (int)result >= 0 )
  {
    v32[4] = v30;
    LODWORD(v32[5]) = v29;
    v32[3] = (PDEVICE_OBJECT)__PAIR64__(v28, a2);
    v18 = KeGetCurrentThread();
    --v18->KernelApcDisable;
    v19 = FsFilterPerformCallbacks((__int64)v32, v7, v7, &v27);
    ReadDmaCounter = v31;
    v7 = v19;
LABEL_10:
    if ( v7 >= 0 )
    {
      if ( v7 )
      {
        v20 = 0;
        if ( v7 != 294 )
          v20 = v7;
        v7 = v20;
      }
      else
      {
        if ( v8 && (FileObject = (PFILE_OBJECT)v32[2], ((__int64)v32[8] & 4) != 0) )
        {
          BaseFileSystemDeviceObject = (struct _DMA_ADAPTER *)IoGetDeviceAttachmentBaseRef(v32[1]);
          v22 = 1;
          v23 = BaseFileSystemDeviceObject->DmaOperations;
          ReadDmaCounter = v23->ReadDmaCounter;
          v16 = *((_QWORD *)v23->FreeAdapterChannel + 6);
        }
        else
        {
          v22 = 0;
        }
        if ( !v16
          || (*(_DWORD *)v16 < 0x10u || !*(_QWORD *)(v16 + 8)) && (*(_DWORD *)v16 < 0x18u || !*(_QWORD *)(v16 + 16)) )
        {
          if ( ReadDmaCounter
            && *(_DWORD *)ReadDmaCounter >= 0x60u
            && (v24 = (void (__fastcall *)(PFILE_OBJECT))*((_QWORD *)ReadDmaCounter + 11)) != 0LL )
          {
            v24(FileObject);
          }
          else
          {
            v7 = -1073741808;
          }
          v27 |= 1u;
        }
        if ( v22 )
          HalPutDmaAdapter(BaseFileSystemDeviceObject);
      }
    }
    if ( v7 == -1073741808 && (v27 & 1) != 0 )
    {
      FsContext = FileObject->FsContext;
      if ( FsContext )
      {
        v26 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
        if ( v26 )
          ExAcquireResourceExclusiveLite(v26, 1u);
      }
      v7 = 0;
    }
    if ( v8 )
    {
      if ( *((_WORD *)v8 + 37) )
        FsFilterPerformCompletionCallbacks((__int64)v32, v7);
      FsFilterCtrlFree((__int64)v32);
    }
    if ( v7 < 0 )
      KeLeaveCriticalRegion();
    return (unsigned int)v7;
  }
  return result;
}
