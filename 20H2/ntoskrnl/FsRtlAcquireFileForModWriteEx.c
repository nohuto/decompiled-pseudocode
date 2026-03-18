/*
 * XREFs of FsRtlAcquireFileForModWriteEx @ 0x140344550
 * Callers:
 *     MiGatherMappedPages @ 0x140344824 (MiGatherMappedPages.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140211290 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     FsFilterPerformCompletionCallbacks @ 0x14029FF20 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x14029FFB0 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x1402A02D0 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x1402A0360 (IoGetBaseFileSystemDeviceObject.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14036183C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ExConvertExclusiveToSharedLite @ 0x140364540 (ExConvertExclusiveToSharedLite.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 *     FsFilterFreeCompletionStack @ 0x1404EF5F8 (FsFilterFreeCompletionStack.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1405B3370 (ExAcquireSharedWaitForExclusive.c)
 */

__int64 __fastcall FsRtlAcquireFileForModWriteEx(PFILE_OBJECT FileObject, _QWORD *a2, struct _ERESOURCE **a3)
{
  unsigned int v4; // ebx
  char v5; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v7; // r9
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r14
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // rsi
  PDRIVER_ADD_DEVICE AddDevice; // rdi
  __int64 result; // rax
  _QWORD *v13; // r13
  struct _ERESOURCE **v14; // r12
  int v15; // eax
  char v16; // r13
  __int64 (__fastcall *AcquireForModWrite)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  struct _DRIVER_OBJECT *v18; // rax
  PVOID FsContext; // rdi
  char v20; // dl
  __int64 v21; // rcx
  struct _ERESOURCE *v22; // rbx
  char v23; // si
  BOOLEAN v24; // al
  char v25; // cl
  struct _ERESOURCE *v26; // rcx
  int v27; // [rsp+34h] [rbp-CCh] BYREF
  _QWORD *v28; // [rsp+38h] [rbp-C8h]
  struct _ERESOURCE **v29; // [rsp+40h] [rbp-C0h]
  _QWORD *v30; // [rsp+48h] [rbp-B8h]
  _QWORD v31[72]; // [rsp+50h] [rbp-B0h] BYREF

  v29 = a3;
  v28 = a2;
  memset(v31, 0, 0x238uLL);
  v4 = 0;
  v27 = 0;
  v30 = v31;
  v5 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  if ( AddDevice
    && (*(_DWORD *)AddDevice >= 0x50u && *((_QWORD *)AddDevice + 9)
     || *(_DWORD *)AddDevice >= 0x58u && *((_QWORD *)AddDevice + 10)) )
  {
    v5 = 1;
  }
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v5 )
  {
    v14 = v29;
    v30 = 0LL;
    v16 = 0;
LABEL_12:
    if ( !AddDevice
      || (*(_DWORD *)AddDevice < 0x50u || !*((_QWORD *)AddDevice + 9))
      && (*(_DWORD *)AddDevice < 0x58u || !*((_QWORD *)AddDevice + 10)) )
    {
      if ( FastIoDispatch
        && FastIoDispatch->SizeOfFastIoDispatch >= 0x80
        && (AcquireForModWrite = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->AcquireForModWrite) != 0LL )
      {
        v4 = AcquireForModWrite(FileObject, v28, v14, BaseFileSystemDeviceObject);
      }
      else
      {
        v4 = -1073741808;
      }
      v27 |= 1u;
    }
    if ( v16 )
      ObfDereferenceObjectWithTag(BaseFileSystemDeviceObject, 0x746C6644u);
    v13 = v28;
    goto LABEL_25;
  }
  result = FsFilterCtrlInit((__int64)v31, 253, (__int64)RelatedDeviceObject, v7, (__int64)FileObject, 1u);
  if ( (int)result < 0 )
    return result;
  v13 = v28;
  v14 = v29;
  v31[3] = v28;
  v31[4] = v29;
  v15 = FsFilterPerformCallbacks((__int64)v31, 1, 1, &v27);
  v4 = v15;
  if ( v15 >= 0 )
  {
    if ( v15 )
    {
      v4 = 0;
      if ( v15 != 294 )
        v4 = v15;
      goto LABEL_25;
    }
    FileObject = (PFILE_OBJECT)v31[2];
    if ( (v31[8] & 4) != 0 )
    {
      BaseFileSystemDeviceObject = (PDEVICE_OBJECT)IoGetDeviceAttachmentBaseRefWithTag(v31[1], 1953261124LL);
      v16 = 1;
      v18 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v18->FastIoDispatch;
      AddDevice = v18->DriverExtension[1].AddDevice;
    }
    else
    {
      v16 = 0;
    }
    goto LABEL_12;
  }
LABEL_25:
  if ( v4 == -1073741808 && (v27 & 1) != 0 )
  {
    FsContext = FileObject->FsContext;
    if ( *((_QWORD *)FsContext + 1) )
    {
      v20 = *((_BYTE *)FsContext + 4);
      if ( (v20 & 8) != 0 || (v21 = *((_QWORD *)FsContext + 5), *v13 > v21) && v21 != *((_QWORD *)FsContext + 4) )
      {
        v23 = 1;
      }
      else
      {
        if ( (v20 & 0x10) == 0 )
        {
          v22 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
          if ( v22 )
          {
            v23 = 0;
            goto LABEL_56;
          }
        }
        v23 = 0;
      }
      v22 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
      while ( 1 )
      {
LABEL_56:
        if ( v23 )
          v24 = ExAcquireResourceExclusiveLite(v22, 0);
        else
          v24 = ExAcquireSharedWaitForExclusive(v22, 0);
        if ( !v24 )
          goto LABEL_73;
        v25 = *((_BYTE *)FsContext + 4);
        if ( (v25 & 8) != 0 || *v13 > *((_QWORD *)FsContext + 5) )
        {
          if ( v23 )
            goto LABEL_45;
        }
        else
        {
          if ( (v25 & 0x10) == 0 )
          {
            v26 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
            if ( !v26 || v22 == v26 )
            {
              if ( v23 )
LABEL_44:
                ExConvertExclusiveToSharedLite(v22);
            }
            else
            {
              v22 = 0LL;
              if ( ExAcquireSharedWaitForExclusive(v26, 0) )
                v22 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
              ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
              if ( !v22 )
              {
LABEL_73:
                v4 = -1073741608;
                goto LABEL_26;
              }
            }
LABEL_45:
            *v14 = v22;
            goto LABEL_46;
          }
          if ( v23 )
            goto LABEL_44;
          if ( v22 == *((struct _ERESOURCE **)FsContext + 1) )
            goto LABEL_45;
        }
        ExReleaseResourceLite(v22);
        v22 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
        v23 = 1;
      }
    }
    *v14 = 0LL;
LABEL_46:
    v4 = 0;
  }
LABEL_26:
  if ( v30 )
  {
    if ( *((_WORD *)v30 + 37) )
      FsFilterPerformCompletionCallbacks((__int64)v31, v4);
    if ( (v31[8] & 1) != 0 )
      FsFilterFreeCompletionStack(v31);
  }
  return v4;
}
