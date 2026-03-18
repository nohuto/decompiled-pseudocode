/*
 * XREFs of DpiFdoDispatchCleanupAndClose @ 0x1C01DDD20
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C016E8A8 (DpiEnableD3Requests.c)
 *     DxgkDdiDestroyVirtualGpu @ 0x1C03594BC (DxgkDdiDestroyVirtualGpu.c)
 *     DpiFdoGetVirtualGpuType @ 0x1C03896AC (DpiFdoGetVirtualGpuType.c)
 */

NTSTATUS __fastcall DpiFdoDispatchCleanupAndClose(__int64 a1, IRP *a2)
{
  __int64 v2; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  PFILE_OBJECT FileObject; // r8
  UCHAR MajorFunction; // al
  const wchar_t *v7; // rax
  __int64 v8; // rdx
  UNICODE_STRING *p_FileName; // rcx
  PIRP v11; // rax
  void **FsContext2; // rbx
  __int128 v13; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  if ( *(_BYTE *)(v2 + 1160) )
  {
LABEL_12:
    a2->IoStatus.Status = 0;
    IofCompleteRequest(a2, 0);
    return 0;
  }
  if ( !*(_BYTE *)(v2 + 1159) )
  {
    if ( *(_BYTE *)(v2 + 57) )
    {
      CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
      FileObject = CurrentStackLocation->FileObject;
      MajorFunction = CurrentStackLocation->MajorFunction;
      if ( FileObject && MajorFunction == 18 )
      {
        v13 = 0LL;
        v7 = L"\\VGPUCreator";
        v8 = 0x7FFFLL;
        while ( *v7 )
        {
          ++v7;
          if ( !--v8 )
            goto LABEL_11;
        }
        *((_QWORD *)&v13 + 1) = L"\\VGPUCreator";
        LOWORD(v13) = -2 - 2 * v8;
        WORD1(v13) = -2 * v8;
LABEL_11:
        p_FileName = &FileObject->FileName;
        LOBYTE(FileObject) = 1;
        if ( RtlFindUnicodeSubstring(p_FileName, &v13, FileObject) )
        {
          FsContext2 = (void **)CurrentStackLocation->FileObject->FsContext2;
          if ( FsContext2 )
          {
            DpiFdoGetVirtualGpuType(a2);
            DxgkDdiDestroyVirtualGpu(*FsContext2);
          }
        }
      }
      else if ( MajorFunction == 2 )
      {
        KeEnterCriticalRegion();
        if ( *(_BYTE *)(v2 + 484) )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 64LL) + 4088LL));
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v2 + 168), 1u);
        _InterlockedDecrement((volatile signed __int32 *)(v2 + 5640));
        if ( !*(_DWORD *)(v2 + 5640) )
        {
          while ( 1 )
          {
            v11 = IoCsqRemoveNextIrp((PIO_CSQ)(v2 + 5256), 0LL);
            if ( !v11 )
              break;
            v11->IoStatus.Status = -1073741536;
            v11->IoStatus.Information = 0LL;
            IofCompleteRequest(v11, 0);
          }
          *(_BYTE *)(v2 + 5372) = 0;
          *(_BYTE *)(v2 + 5404) = 0;
        }
        if ( *(_BYTE *)(v2 + 484) )
          DpiEnableD3Requests(*(_QWORD *)(v2 + 24));
        ExReleaseResourceLite(*(PERESOURCE *)(v2 + 168));
        KeLeaveCriticalRegion();
      }
    }
    goto LABEL_12;
  }
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 160), a2);
}
