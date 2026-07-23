/*
 * XREFs of FsRtlAcquireFileForModWriteEx @ 0x140276F3C
 * Callers:
 *     MiGatherMappedPages @ 0x140277138 (MiGatherMappedPages.c)
 * Callees:
 *     ExConvertExclusiveToSharedLite @ 0x140230370 (ExConvertExclusiveToSharedLite.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14027171C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     IoGetRelatedDeviceObject @ 0x14035C670 (IoGetRelatedDeviceObject.c)
 *     FsFilterPerformCompletionCallbacks @ 0x1403619D0 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x140361A60 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x140361D80 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x140361E10 (IoGetBaseFileSystemDeviceObject.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     FsFilterFreeCompletionStack @ 0x1404F1118 (FsFilterFreeCompletionStack.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1405B4FA0 (ExAcquireSharedWaitForExclusive.c)
 */

__int64 __fastcall FsRtlAcquireFileForModWriteEx(PFILE_OBJECT FileObject, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  char v5; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  int v7; // edx
  int v8; // r9d
  _QWORD *BaseFileSystemDeviceObject; // r14
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  _QWORD *v16; // r13
  _QWORD *v17; // r12
  int v18; // eax
  char v19; // r13
  __int64 (__fastcall *v20)(PFILE_OBJECT, __int64, _QWORD *, _QWORD *); // rax
  __int64 v21; // rax
  PVOID FsContext; // rdi
  char v23; // dl
  __int64 v24; // rcx
  struct _ERESOURCE *v25; // rbx
  char v26; // si
  BOOLEAN v27; // al
  char v28; // cl
  struct _ERESOURCE *v29; // rcx
  int v30; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v31; // [rsp+38h] [rbp-C8h]
  __int64 v32; // [rsp+40h] [rbp-C0h]
  __int64 *v33; // [rsp+48h] [rbp-B8h]
  __int64 v34[72]; // [rsp+50h] [rbp-B0h] BYREF

  v32 = a3;
  v31 = a2;
  memset(v34, 0, 0x238uLL);
  v4 = 0;
  v30 = 0;
  v33 = v34;
  v5 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  v10 = BaseFileSystemDeviceObject[1];
  v11 = *(_QWORD *)(v10 + 80);
  v12 = *(_QWORD *)(*(_QWORD *)(v10 + 48) + 48LL);
  if ( v12 && (*(_DWORD *)v12 >= 0x50u && *(_QWORD *)(v12 + 72) || *(_DWORD *)v12 >= 0x58u && *(_QWORD *)(v12 + 80)) )
    v5 = 1;
  if ( RelatedDeviceObject == (PDEVICE_OBJECT)BaseFileSystemDeviceObject && !v5 )
  {
    v17 = (_QWORD *)v32;
    v33 = 0LL;
    v19 = 0;
LABEL_12:
    if ( !v12
      || (*(_DWORD *)v12 < 0x50u || !*(_QWORD *)(v12 + 72)) && (*(_DWORD *)v12 < 0x58u || !*(_QWORD *)(v12 + 80)) )
    {
      if ( v11
        && *(_DWORD *)v11 >= 0x80u
        && (v20 = *(__int64 (__fastcall **)(PFILE_OBJECT, __int64, _QWORD *, _QWORD *))(v11 + 120)) != 0LL )
      {
        v4 = v20(FileObject, v31, v17, BaseFileSystemDeviceObject);
      }
      else
      {
        v4 = -1073741808;
      }
      v30 |= 1u;
    }
    if ( v19 )
      ObfDereferenceObjectWithTag(BaseFileSystemDeviceObject, 0x746C6644u);
    v16 = (_QWORD *)v31;
    goto LABEL_25;
  }
  LOBYTE(v7) = -3;
  result = FsFilterCtrlInit((unsigned int)v34, v7, (_DWORD)RelatedDeviceObject, v8, (__int64)FileObject, 1);
  if ( (int)result < 0 )
    return result;
  v16 = (_QWORD *)v31;
  v17 = (_QWORD *)v32;
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
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRefWithTag(v34[1], 0x746C6644u);
      v19 = 1;
      v21 = BaseFileSystemDeviceObject[1];
      v11 = *(_QWORD *)(v21 + 80);
      v12 = *(_QWORD *)(*(_QWORD *)(v21 + 48) + 48LL);
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
