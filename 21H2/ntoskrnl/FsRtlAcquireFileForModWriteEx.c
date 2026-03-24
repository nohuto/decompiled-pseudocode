/*
 * XREFs of FsRtlAcquireFileForModWriteEx @ 0x1402559CC
 * Callers:
 *     MiGatherMappedPages @ 0x140255BC8 (MiGatherMappedPages.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14028350C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ExConvertExclusiveToSharedLite @ 0x1402B21C0 (ExConvertExclusiveToSharedLite.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14034BBA0 (ExAcquireResourceExclusiveLite.c)
 *     IoGetRelatedDeviceObject @ 0x140351920 (IoGetRelatedDeviceObject.c)
 *     FsFilterPerformCompletionCallbacks @ 0x140356C80 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x140356D10 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x140357030 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x1403570C0 (IoGetBaseFileSystemDeviceObject.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     memset @ 0x140414200 (memset.c)
 *     FsFilterFreeCompletionStack @ 0x1404F1198 (FsFilterFreeCompletionStack.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1405B4D70 (ExAcquireSharedWaitForExclusive.c)
 */

__int64 __fastcall FsRtlAcquireFileForModWriteEx(PFILE_OBJECT FileObject, _QWORD *a2, struct _ERESOURCE **a3)
{
  unsigned int v4; // ebx
  char v5; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  int v7; // edx
  int v8; // r9d
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r14
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // rsi
  PDRIVER_ADD_DEVICE AddDevice; // rdi
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  _QWORD *v16; // r13
  struct _ERESOURCE **v17; // r12
  int v18; // eax
  char v19; // r13
  __int64 (__fastcall *AcquireForModWrite)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  struct _DRIVER_OBJECT *v21; // rax
  PVOID FsContext; // rdi
  char v23; // dl
  __int64 v24; // rcx
  struct _ERESOURCE *v25; // rbx
  char v26; // si
  BOOLEAN v27; // al
  char v28; // cl
  struct _ERESOURCE *v29; // rcx
  int v30; // [rsp+34h] [rbp-CCh] BYREF
  _QWORD *v31; // [rsp+38h] [rbp-C8h]
  struct _ERESOURCE **v32; // [rsp+40h] [rbp-C0h]
  _QWORD *v33; // [rsp+48h] [rbp-B8h]
  _QWORD v34[72]; // [rsp+50h] [rbp-B0h] BYREF

  v32 = a3;
  v31 = a2;
  memset(v34, 0, 0x238uLL);
  v4 = 0;
  v30 = 0;
  v33 = v34;
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
    v17 = v32;
    v33 = 0LL;
    v19 = 0;
LABEL_12:
    if ( !AddDevice
      || (*(_DWORD *)AddDevice < 0x50u || !*((_QWORD *)AddDevice + 9))
      && (*(_DWORD *)AddDevice < 0x58u || !*((_QWORD *)AddDevice + 10)) )
    {
      if ( FastIoDispatch
        && FastIoDispatch->SizeOfFastIoDispatch >= 0x80
        && (AcquireForModWrite = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->AcquireForModWrite) != 0LL )
      {
        v4 = AcquireForModWrite(FileObject, v31, v17, BaseFileSystemDeviceObject);
      }
      else
      {
        v4 = -1073741808;
      }
      v30 |= 1u;
    }
    if ( v19 )
      ObfDereferenceObjectWithTag(BaseFileSystemDeviceObject, 0x746C6644u);
    v16 = v31;
    goto LABEL_25;
  }
  LOBYTE(v7) = -3;
  result = FsFilterCtrlInit((unsigned int)v34, v7, (_DWORD)RelatedDeviceObject, v8, (__int64)FileObject, 1);
  if ( (int)result < 0 )
    return result;
  v16 = v31;
  v17 = v32;
  LOBYTE(v15) = 1;
  v34[3] = v31;
  LOBYTE(v14) = 1;
  v34[4] = v32;
  v18 = FsFilterPerformCallbacks(v34, v14, v15, &v30);
  v4 = v18;
  if ( v18 >= 0 )
  {
    if ( v18 )
    {
      v4 = 0;
      if ( v18 != 294 )
        v4 = v18;
      goto LABEL_25;
    }
    FileObject = (PFILE_OBJECT)v34[2];
    if ( (v34[8] & 4) != 0 )
    {
      BaseFileSystemDeviceObject = (PDEVICE_OBJECT)IoGetDeviceAttachmentBaseRefWithTag(v34[1], 1953261124LL);
      v19 = 1;
      v21 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v21->FastIoDispatch;
      AddDevice = v21->DriverExtension[1].AddDevice;
    }
    else
    {
      v19 = 0;
    }
    goto LABEL_12;
  }
LABEL_25:
  if ( v4 == -1073741808 && (v30 & 1) != 0 )
  {
    FsContext = FileObject->FsContext;
    if ( *((_QWORD *)FsContext + 1) )
    {
      v23 = *((_BYTE *)FsContext + 4);
      if ( (v23 & 8) != 0 || (v24 = *((_QWORD *)FsContext + 5), *v16 > v24) && v24 != *((_QWORD *)FsContext + 4) )
      {
        v26 = 1;
      }
      else
      {
        if ( (v23 & 0x10) == 0 )
        {
          v25 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
          if ( v25 )
          {
            v26 = 0;
            goto LABEL_56;
          }
        }
        v26 = 0;
      }
      v25 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
      while ( 1 )
      {
LABEL_56:
        if ( v26 )
          v27 = ExAcquireResourceExclusiveLite(v25, 0);
        else
          v27 = ExAcquireSharedWaitForExclusive(v25, 0);
        if ( !v27 )
          goto LABEL_73;
        v28 = *((_BYTE *)FsContext + 4);
        if ( (v28 & 8) != 0 || *v16 > *((_QWORD *)FsContext + 5) )
        {
          if ( v26 )
            goto LABEL_45;
        }
        else
        {
          if ( (v28 & 0x10) == 0 )
          {
            v29 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
            if ( !v29 || v25 == v29 )
            {
              if ( v26 )
LABEL_44:
                ExConvertExclusiveToSharedLite(v25);
            }
            else
            {
              v25 = 0LL;
              if ( ExAcquireSharedWaitForExclusive(v29, 0) )
                v25 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
              ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
              if ( !v25 )
              {
LABEL_73:
                v4 = -1073741608;
                goto LABEL_26;
              }
            }
LABEL_45:
            *v17 = v25;
            goto LABEL_46;
          }
          if ( v26 )
            goto LABEL_44;
          if ( v25 == *((struct _ERESOURCE **)FsContext + 1) )
            goto LABEL_45;
        }
        ExReleaseResourceLite(v25);
        v25 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
        v26 = 1;
      }
    }
    *v17 = 0LL;
LABEL_46:
    v4 = 0;
  }
LABEL_26:
  if ( v33 )
  {
    if ( *((_WORD *)v33 + 37) )
      FsFilterPerformCompletionCallbacks(v34, v4);
    if ( (v34[8] & 1) != 0 )
      FsFilterFreeCompletionStack(v34);
  }
  return v4;
}
