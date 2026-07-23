/*
 * XREFs of FsRtlReleaseFileForModWrite @ 0x140276504
 * Callers:
 *     MiWriteComplete @ 0x1402766E0 (MiWriteComplete.c)
 *     MiGatherMappedPages @ 0x140277138 (MiGatherMappedPages.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14027171C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     IoGetRelatedDeviceObject @ 0x14035C670 (IoGetRelatedDeviceObject.c)
 *     FsFilterPerformCompletionCallbacks @ 0x1403619D0 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x140361A60 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x140361D80 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x140361E10 (IoGetBaseFileSystemDeviceObject.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     FsFilterFreeCompletionStack @ 0x1404F1118 (FsFilterFreeCompletionStack.c)
 */

void __fastcall FsRtlReleaseFileForModWrite(PFILE_OBJECT FileObject, struct _ERESOURCE *a2)
{
  int v3; // ebx
  __int64 *v4; // r15
  char v5; // r12
  int v6; // edx
  int v7; // r9d
  _QWORD *BaseFileSystemDeviceObject; // r14
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdi
  struct _ERESOURCE *v12; // r12
  __int64 v13; // r8
  int v14; // eax
  int v15; // ecx
  __int64 (__fastcall *v16)(PFILE_OBJECT, struct _ERESOURCE *, _QWORD *); // rax
  __int64 v17; // rax
  char v18; // [rsp+30h] [rbp-D0h]
  int v19; // [rsp+34h] [rbp-CCh] BYREF
  PERESOURCE Resource; // [rsp+38h] [rbp-C8h]
  PDEVICE_OBJECT RelatedDeviceObject; // [rsp+40h] [rbp-C0h]
  __int64 v22[72]; // [rsp+50h] [rbp-B0h] BYREF

  Resource = a2;
  memset(v22, 0, 0x238uLL);
  v3 = 0;
  v4 = v22;
  v19 = 0;
  v18 = 0;
  v5 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  v9 = BaseFileSystemDeviceObject[1];
  v10 = *(_QWORD *)(v9 + 80);
  v11 = *(_QWORD *)(*(_QWORD *)(v9 + 48) + 48LL);
  if ( v11 && (*(_DWORD *)v11 >= 0x60u && *(_QWORD *)(v11 + 88) || *(_DWORD *)v11 >= 0x68u && *(_QWORD *)(v11 + 96)) )
    v5 = 1;
  if ( RelatedDeviceObject == (PDEVICE_OBJECT)BaseFileSystemDeviceObject && !v5 )
  {
    v12 = Resource;
    v4 = 0LL;
    goto LABEL_11;
  }
  LOBYTE(v6) = -4;
  FsFilterCtrlInit((unsigned int)v22, v6, (_DWORD)RelatedDeviceObject, v7, (__int64)FileObject, 0);
  v12 = Resource;
  LOBYTE(v13) = 1;
  v22[3] = (__int64)Resource;
  v14 = FsFilterPerformCallbacks(v22, 0LL, v13, &v19);
  v15 = 0;
  v3 = v14;
  if ( v14 >= 0 )
  {
    if ( v14 )
    {
      if ( v14 != 294 )
        v15 = v14;
      v3 = v15;
LABEL_23:
      if ( v3 >= 0 )
        goto LABEL_24;
      goto LABEL_36;
    }
    FileObject = (PFILE_OBJECT)v22[2];
    if ( (v22[8] & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRefWithTag(v22[1], 0x746C6644u);
      v18 = 1;
      v17 = BaseFileSystemDeviceObject[1];
      v10 = *(_QWORD *)(v17 + 80);
      v11 = *(_QWORD *)(*(_QWORD *)(v17 + 48) + 48LL);
    }
LABEL_11:
    if ( !v11
      || (*(_DWORD *)v11 < 0x60u || !*(_QWORD *)(v11 + 88)) && (*(_DWORD *)v11 < 0x68u || !*(_QWORD *)(v11 + 96)) )
    {
      if ( v10
        && *(_DWORD *)v10 >= 0xD0u
        && (v16 = *(__int64 (__fastcall **)(PFILE_OBJECT, struct _ERESOURCE *, _QWORD *))(v10 + 200)) != 0LL )
      {
        v3 = v16(FileObject, v12, BaseFileSystemDeviceObject);
      }
      else
      {
        v3 = -1073741808;
      }
      v19 |= 1u;
    }
    if ( v18 )
      ObfDereferenceObjectWithTag(BaseFileSystemDeviceObject, 0x746C6644u);
    goto LABEL_23;
  }
LABEL_36:
  if ( (v19 & 1) != 0 )
  {
    ExReleaseResourceLite(v12);
    v3 = 0;
  }
LABEL_24:
  if ( v4 )
  {
    if ( *((_WORD *)v4 + 37) )
      FsFilterPerformCompletionCallbacks(v22, (unsigned int)v3);
    if ( (v22[8] & 1) != 0 )
      FsFilterFreeCompletionStack(v22);
  }
}
