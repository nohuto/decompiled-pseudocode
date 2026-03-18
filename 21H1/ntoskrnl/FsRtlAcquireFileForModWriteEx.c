/*
 * XREFs of FsRtlAcquireFileForModWriteEx @ 0x1403537D4
 * Callers:
 *     MiGatherMappedPages @ 0x14035131C (MiGatherMappedPages.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140252E60 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     FsFilterPerformCompletionCallbacks @ 0x140281FD0 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x140282060 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x140282380 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x140282410 (IoGetBaseFileSystemDeviceObject.c)
 *     ExConvertExclusiveToSharedLite @ 0x140303A00 (ExConvertExclusiveToSharedLite.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14033DE1C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     FsFilterFreeCompletionStack @ 0x1404EB738 (FsFilterFreeCompletionStack.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1405AF0F0 (ExAcquireSharedWaitForExclusive.c)
 */

__int64 __fastcall FsRtlAcquireFileForModWriteEx(PFILE_OBJECT FileObject, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  char v5; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v7; // r9
  _QWORD *BaseFileSystemDeviceObject; // r14
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 result; // rax
  _QWORD *v13; // r13
  _QWORD *v14; // r12
  int v15; // eax
  char v16; // r13
  __int64 (__fastcall *v17)(PFILE_OBJECT, __int64, _QWORD *, _QWORD *); // rax
  __int64 v18; // rax
  PVOID FsContext; // rdi
  char v20; // dl
  __int64 v21; // rcx
  struct _ERESOURCE *v22; // rbx
  char v23; // si
  BOOLEAN v24; // al
  char v25; // cl
  struct _ERESOURCE *v26; // rcx
  int v27; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v28; // [rsp+38h] [rbp-C8h]
  __int64 v29; // [rsp+40h] [rbp-C0h]
  __int64 *v30; // [rsp+48h] [rbp-B8h]
  __int64 v31[72]; // [rsp+50h] [rbp-B0h] BYREF

  v29 = a3;
  v28 = a2;
  memset(v31, 0, 0x238uLL);
  v4 = 0;
  v27 = 0;
  v30 = v31;
  v5 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  v9 = BaseFileSystemDeviceObject[1];
  v10 = *(_QWORD *)(v9 + 80);
  v11 = *(_QWORD *)(*(_QWORD *)(v9 + 48) + 48LL);
  if ( v11 && (*(_DWORD *)v11 >= 0x50u && *(_QWORD *)(v11 + 72) || *(_DWORD *)v11 >= 0x58u && *(_QWORD *)(v11 + 80)) )
    v5 = 1;
  if ( RelatedDeviceObject == (PDEVICE_OBJECT)BaseFileSystemDeviceObject && !v5 )
  {
    v14 = (_QWORD *)v29;
    v30 = 0LL;
    v16 = 0;
LABEL_12:
    if ( !v11
      || (*(_DWORD *)v11 < 0x50u || !*(_QWORD *)(v11 + 72)) && (*(_DWORD *)v11 < 0x58u || !*(_QWORD *)(v11 + 80)) )
    {
      if ( v10
        && *(_DWORD *)v10 >= 0x80u
        && (v17 = *(__int64 (__fastcall **)(PFILE_OBJECT, __int64, _QWORD *, _QWORD *))(v10 + 120)) != 0LL )
      {
        v4 = v17(FileObject, v28, v14, BaseFileSystemDeviceObject);
      }
      else
      {
        v4 = -1073741808;
      }
      v27 |= 1u;
    }
    if ( v16 )
      ObfDereferenceObjectWithTag(BaseFileSystemDeviceObject, 0x746C6644u);
    v13 = (_QWORD *)v28;
    goto LABEL_25;
  }
  result = FsFilterCtrlInit((__int64)v31, 253, (__int64)RelatedDeviceObject, v7, (__int64)FileObject, 1u);
  if ( (int)result < 0 )
    return result;
  v13 = (_QWORD *)v28;
  v14 = (_QWORD *)v29;
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
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRefWithTag(v31[1], 0x746C6644u);
      v16 = 1;
      v18 = BaseFileSystemDeviceObject[1];
      v10 = *(_QWORD *)(v18 + 80);
      v11 = *(_QWORD *)(*(_QWORD *)(v18 + 48) + 48LL);
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
