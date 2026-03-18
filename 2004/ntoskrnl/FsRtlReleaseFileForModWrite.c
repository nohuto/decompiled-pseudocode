/*
 * XREFs of FsRtlReleaseFileForModWrite @ 0x1402F824C
 * Callers:
 *     MiGatherMappedPages @ 0x1402F5340 (MiGatherMappedPages.c)
 *     MiWriteComplete @ 0x1402F79F0 (MiWriteComplete.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     FsFilterPerformCompletionCallbacks @ 0x140228F80 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x140229010 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x140229330 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x1402293C0 (IoGetBaseFileSystemDeviceObject.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14027746C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IoGetRelatedDeviceObject @ 0x14028F6E0 (IoGetRelatedDeviceObject.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14040A280 (memset.c)
 *     FsFilterFreeCompletionStack @ 0x1404EBD68 (FsFilterFreeCompletionStack.c)
 */

void __fastcall FsRtlReleaseFileForModWrite(PFILE_OBJECT FileObject, struct _ERESOURCE *a2)
{
  signed int v3; // ebx
  __int64 *v4; // r15
  char v5; // r12
  __int64 v6; // r9
  _QWORD *BaseFileSystemDeviceObject; // r14
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi
  struct _ERESOURCE *v11; // r12
  int v12; // eax
  signed int v13; // ecx
  __int64 (__fastcall *v14)(PFILE_OBJECT, struct _ERESOURCE *, _QWORD *); // rax
  __int64 v15; // rax
  char v16; // [rsp+30h] [rbp-D0h]
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  PERESOURCE Resource; // [rsp+38h] [rbp-C8h]
  PDEVICE_OBJECT RelatedDeviceObject; // [rsp+40h] [rbp-C0h]
  __int64 v20[72]; // [rsp+50h] [rbp-B0h] BYREF

  Resource = a2;
  memset(v20, 0, 0x238uLL);
  v3 = 0;
  v4 = v20;
  v17 = 0;
  v16 = 0;
  v5 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  v8 = BaseFileSystemDeviceObject[1];
  v9 = *(_QWORD *)(v8 + 80);
  v10 = *(_QWORD *)(*(_QWORD *)(v8 + 48) + 48LL);
  if ( v10 && (*(_DWORD *)v10 >= 0x60u && *(_QWORD *)(v10 + 88) || *(_DWORD *)v10 >= 0x68u && *(_QWORD *)(v10 + 96)) )
    v5 = 1;
  if ( RelatedDeviceObject == (PDEVICE_OBJECT)BaseFileSystemDeviceObject && !v5 )
  {
    v11 = Resource;
    v4 = 0LL;
    goto LABEL_11;
  }
  FsFilterCtrlInit((__int64)v20, 252, (__int64)RelatedDeviceObject, v6, (__int64)FileObject, 0);
  v11 = Resource;
  v20[3] = (__int64)Resource;
  v12 = FsFilterPerformCallbacks((__int64)v20, 0, 1, &v17);
  v13 = 0;
  v3 = v12;
  if ( v12 >= 0 )
  {
    if ( v12 )
    {
      if ( v12 != 294 )
        v13 = v12;
      v3 = v13;
LABEL_23:
      if ( v3 >= 0 )
        goto LABEL_24;
      goto LABEL_36;
    }
    FileObject = (PFILE_OBJECT)v20[2];
    if ( (v20[8] & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRefWithTag(v20[1], 0x746C6644u);
      v16 = 1;
      v15 = BaseFileSystemDeviceObject[1];
      v9 = *(_QWORD *)(v15 + 80);
      v10 = *(_QWORD *)(*(_QWORD *)(v15 + 48) + 48LL);
    }
LABEL_11:
    if ( !v10
      || (*(_DWORD *)v10 < 0x60u || !*(_QWORD *)(v10 + 88)) && (*(_DWORD *)v10 < 0x68u || !*(_QWORD *)(v10 + 96)) )
    {
      if ( v9
        && *(_DWORD *)v9 >= 0xD0u
        && (v14 = *(__int64 (__fastcall **)(PFILE_OBJECT, struct _ERESOURCE *, _QWORD *))(v9 + 200)) != 0LL )
      {
        v3 = v14(FileObject, v11, BaseFileSystemDeviceObject);
      }
      else
      {
        v3 = -1073741808;
      }
      v17 |= 1u;
    }
    if ( v16 )
      ObfDereferenceObjectWithTag(BaseFileSystemDeviceObject, 0x746C6644u);
    goto LABEL_23;
  }
LABEL_36:
  if ( (v17 & 1) != 0 )
  {
    ExReleaseResourceLite(v11);
    v3 = 0;
  }
LABEL_24:
  if ( v4 )
  {
    if ( *((_WORD *)v4 + 37) )
      FsFilterPerformCompletionCallbacks((__int64)v20, v3);
    if ( (v20[8] & 1) != 0 )
      FsFilterFreeCompletionStack(v20);
  }
}
