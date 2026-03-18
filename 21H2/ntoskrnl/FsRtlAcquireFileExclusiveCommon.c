/*
 * XREFs of FsRtlAcquireFileExclusiveCommon @ 0x1406FE4F0
 * Callers:
 *     FsRtlAcquireToCreateMappedSection @ 0x1406FE210 (FsRtlAcquireToCreateMappedSection.c)
 *     FsRtlAcquireFileExclusive @ 0x1406FE2E0 (FsRtlAcquireFileExclusive.c)
 * Callees:
 *     FsFilterCtrlFree @ 0x140288178 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x1402881A0 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x140288250 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x1402885A0 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x140288630 (IoGetBaseFileSystemDeviceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x14036B850 (IoGetDeviceAttachmentBaseRef.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall FsRtlAcquireFileExclusiveCommon(
        PFILE_OBJECT FileObject,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        struct _DEVICE_OBJECT *a6)
{
  int v8; // ebx
  PDEVICE_OBJECT *v9; // rdi
  char v10; // r15
  PDEVICE_OBJECT RelatedDeviceObject; // rbp
  __int64 v12; // r9
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r13
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  PDRIVER_EXTENSION DriverExtension; // rax
  PDRIVER_ADD_DEVICE AddDevice; // r14
  __int64 result; // rax
  struct _KTHREAD *v19; // rax
  int v20; // eax
  struct _KTHREAD *CurrentThread; // rax
  char v22; // bp
  struct _DRIVER_OBJECT *v23; // rax
  void (__fastcall *AcquireFileForNtCreateSection)(PFILE_OBJECT); // rax
  PVOID FsContext; // rax
  struct _ERESOURCE *v26; // rcx
  int v27; // [rsp+30h] [rbp-2B8h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-2B4h]
  unsigned int v29; // [rsp+38h] [rbp-2B0h]
  struct _DEVICE_OBJECT *v30; // [rsp+40h] [rbp-2A8h]
  struct _FAST_IO_DISPATCH *v31; // [rsp+48h] [rbp-2A0h]
  PDEVICE_OBJECT v32[72]; // [rsp+50h] [rbp-298h] BYREF

  v28 = a3;
  v30 = a6;
  v29 = a4;
  memset(v32, 0, 0x238uLL);
  v8 = 0;
  v9 = v32;
  v27 = 0;
  v10 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  DriverExtension = DriverObject->DriverExtension;
  v31 = FastIoDispatch;
  AddDevice = DriverExtension[1].AddDevice;
  if ( AddDevice
    && (*(_DWORD *)AddDevice >= 0x10u && *((_QWORD *)AddDevice + 1)
     || *(_DWORD *)AddDevice >= 0x18u && *((_QWORD *)AddDevice + 2)) )
  {
    v10 = 1;
  }
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v10 )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = 0LL;
    --CurrentThread->KernelApcDisable;
    goto LABEL_30;
  }
  if ( a2 == 1 )
    LOBYTE(v8) = 1;
  result = FsFilterCtrlInit((__int64)v32, 255, (__int64)RelatedDeviceObject, v12, (__int64)FileObject, v8);
  if ( (int)result >= 0 )
  {
    v32[4] = v30;
    v32[5] = (PDEVICE_OBJECT)__PAIR64__(a5, v29);
    v32[3] = (PDEVICE_OBJECT)__PAIR64__(v28, a2);
    v19 = KeGetCurrentThread();
    --v19->KernelApcDisable;
    v20 = FsFilterPerformCallbacks((__int64)v32, v8, v8, &v27);
    v8 = v20;
    if ( v20 < 0 )
    {
LABEL_13:
      if ( v8 == -1073741808 && (v27 & 1) != 0 )
      {
        FsContext = FileObject->FsContext;
        if ( FsContext )
        {
          v26 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
          if ( v26 )
            ExAcquireResourceExclusiveLite(v26, 1u);
        }
        v8 = 0;
      }
      if ( v9 )
      {
        if ( *((_WORD *)v9 + 37) )
          FsFilterPerformCompletionCallbacks((__int64)v32, v8);
        FsFilterCtrlFree((__int64)v32);
      }
      if ( v8 < 0 )
        KeLeaveCriticalRegion();
      return (unsigned int)v8;
    }
    if ( v20 )
    {
      v8 = 0;
      if ( v20 != 294 )
        v8 = v20;
      goto LABEL_13;
    }
    FileObject = (PFILE_OBJECT)v32[2];
    if ( ((__int64)v32[8] & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(v32[1]);
      v22 = 1;
      v23 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v23->FastIoDispatch;
      AddDevice = v23->DriverExtension[1].AddDevice;
      goto LABEL_31;
    }
    FastIoDispatch = v31;
LABEL_30:
    v22 = 0;
LABEL_31:
    if ( !AddDevice
      || (*(_DWORD *)AddDevice < 0x10u || !*((_QWORD *)AddDevice + 1))
      && (*(_DWORD *)AddDevice < 0x18u || !*((_QWORD *)AddDevice + 2)) )
    {
      if ( FastIoDispatch
        && FastIoDispatch->SizeOfFastIoDispatch >= 0x60
        && (AcquireFileForNtCreateSection = (void (__fastcall *)(PFILE_OBJECT))FastIoDispatch->AcquireFileForNtCreateSection) != 0LL )
      {
        AcquireFileForNtCreateSection(FileObject);
      }
      else
      {
        v8 = -1073741808;
      }
      v27 |= 1u;
    }
    if ( v22 )
      ObfDereferenceObject(BaseFileSystemDeviceObject);
    goto LABEL_13;
  }
  return result;
}
