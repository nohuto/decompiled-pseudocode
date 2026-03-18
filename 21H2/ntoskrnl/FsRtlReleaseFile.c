/*
 * XREFs of FsRtlReleaseFile @ 0x1406FE310
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x1402031E0 (FsRtlCreateSectionForDataScan.c)
 *     CcDeleteSharedCacheMap @ 0x140275338 (CcDeleteSharedCacheMap.c)
 *     MiReferenceControlArea @ 0x140287C84 (MiReferenceControlArea.c)
 *     CcZeroEndOfLastPage @ 0x14028866C (CcZeroEndOfLastPage.c)
 *     CcWriteBehindInternal @ 0x140288760 (CcWriteBehindInternal.c)
 *     MiCreateNewSection @ 0x1406F914C (MiCreateNewSection.c)
 *     MiCallCreateSectionFilters @ 0x1406FE0E4 (MiCallCreateSectionFilters.c)
 *     MiShareExistingControlArea @ 0x1406FE8F4 (MiShareExistingControlArea.c)
 * Callees:
 *     FsFilterCtrlFree @ 0x140288178 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x1402881A0 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x140288250 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x1402885A0 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x140288630 (IoGetBaseFileSystemDeviceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x14036B850 (IoGetDeviceAttachmentBaseRef.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __stdcall FsRtlReleaseFile(PFILE_OBJECT FileObject)
{
  char v2; // si
  PDEVICE_OBJECT *v3; // r15
  unsigned int v4; // edi
  PDEVICE_OBJECT RelatedDeviceObject; // r12
  __int64 v6; // r9
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r13
  struct _DRIVER_OBJECT *DriverObject; // rbx
  PFAST_IO_DISPATCH FastIoDispatch; // rbp
  PDRIVER_ADD_DEVICE AddDevice; // rbx
  bool v11; // al
  int v12; // eax
  char v13; // r12
  void (__fastcall *ReleaseFileForNtCreateSection)(PFILE_OBJECT); // rax
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  struct _DRIVER_OBJECT *v16; // rbx
  PVOID FsContext; // rax
  struct _ERESOURCE *v18; // rcx
  int v19[4]; // [rsp+30h] [rbp-288h] BYREF
  PDEVICE_OBJECT v20[72]; // [rsp+40h] [rbp-278h] BYREF

  memset(v20, 0, 0x238uLL);
  v2 = 0;
  v3 = v20;
  v19[0] = 0;
  v4 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  v11 = AddDevice
     && (*(_DWORD *)AddDevice >= 0x20u && *((_QWORD *)AddDevice + 3)
      || *(_DWORD *)AddDevice >= 0x28u && *((_QWORD *)AddDevice + 4));
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v11 )
  {
    v3 = 0LL;
    goto LABEL_12;
  }
  FsFilterCtrlInit((__int64)v20, 254, (__int64)RelatedDeviceObject, v6, (__int64)FileObject, 0);
  v12 = FsFilterPerformCallbacks((__int64)v20, 0, 0, v19);
  v4 = v12;
  if ( v12 < 0 )
  {
    v2 = v19[0];
    goto LABEL_25;
  }
  if ( v12 )
  {
    if ( v12 == 294 )
      v4 = 0;
    goto LABEL_27;
  }
  FileObject = (PFILE_OBJECT)v20[2];
  if ( ((__int64)v20[8] & 4) == 0 )
  {
    v2 = v19[0];
LABEL_12:
    v13 = 0;
    goto LABEL_13;
  }
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v20[1]);
  v2 = v19[0];
  BaseFileSystemDeviceObject = DeviceAttachmentBaseRef;
  v13 = 1;
  v16 = DeviceAttachmentBaseRef->DriverObject;
  FastIoDispatch = v16->FastIoDispatch;
  AddDevice = v16->DriverExtension[1].AddDevice;
LABEL_13:
  if ( !AddDevice
    || (*(_DWORD *)AddDevice < 0x20u || !*((_QWORD *)AddDevice + 3))
    && (*(_DWORD *)AddDevice < 0x28u || !*((_QWORD *)AddDevice + 4)) )
  {
    if ( FastIoDispatch
      && FastIoDispatch->SizeOfFastIoDispatch >= 0x68
      && (ReleaseFileForNtCreateSection = (void (__fastcall *)(PFILE_OBJECT))FastIoDispatch->ReleaseFileForNtCreateSection) != 0LL )
    {
      ReleaseFileForNtCreateSection(FileObject);
    }
    else
    {
      v4 = -1073741808;
    }
    v2 |= 1u;
  }
  if ( v13 )
    ObfDereferenceObject(BaseFileSystemDeviceObject);
LABEL_25:
  if ( v4 == -1073741808 && (v2 & 1) != 0 )
  {
    FsContext = FileObject->FsContext;
    if ( FsContext )
    {
      v18 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
      if ( v18 )
        ExReleaseResourceLite(v18);
    }
    v4 = 0;
  }
  if ( v3 )
  {
LABEL_27:
    if ( *((_WORD *)v3 + 37) )
      FsFilterPerformCompletionCallbacks((__int64)v20, v4);
    FsFilterCtrlFree((__int64)v20);
  }
  KeLeaveCriticalRegion();
}
