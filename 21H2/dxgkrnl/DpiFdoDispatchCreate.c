/*
 * XREFs of DpiFdoDispatchCreate @ 0x1C01DDEE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiFdoDispatchCreate(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  __int64 v3; // rbx
  unsigned int Status; // esi
  PFILE_OBJECT FileObject; // rdx
  const wchar_t *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = *(_QWORD *)(a1 + 64);
  Status = 0;
  FileObject = CurrentStackLocation->FileObject;
  if ( FileObject )
  {
    v11 = 0LL;
    v7 = L"\\VGPUCreator";
    v8 = 2LL;
    v9 = 0x7FFFLL;
    while ( *v7 )
    {
      ++v7;
      if ( !--v9 )
        goto LABEL_7;
    }
    *((_QWORD *)&v11 + 1) = L"\\VGPUCreator";
    LOWORD(v11) = -2 - 2 * v9;
    WORD1(v11) = -2 * v9;
LABEL_7:
    LOBYTE(v8) = 1;
    if ( RtlFindUnicodeSubstring(&FileObject->FileName, &v11, v8) )
      goto LABEL_13;
  }
  if ( !*(_BYTE *)(v3 + 1160) )
  {
    if ( *(_BYTE *)(v3 + 1159) )
    {
      IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(v3 + 160), a2);
      Status = a2->IoStatus.Status;
    }
    else if ( a2->RequestorMode || (CurrentStackLocation->Flags & 1) != 0 )
    {
      if ( !*(_BYTE *)(v3 + 57) )
      {
        Status = -1073741790;
        goto LABEL_14;
      }
      goto LABEL_13;
    }
    if ( *(_BYTE *)(v3 + 57) )
LABEL_13:
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 5640));
  }
LABEL_14:
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return Status;
}
