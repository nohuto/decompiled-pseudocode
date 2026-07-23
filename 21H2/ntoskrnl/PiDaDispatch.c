/*
 * XREFs of PiDaDispatch @ 0x1405FC8E0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1402E7CE0 (IofCompleteRequest.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PiDqDispatch @ 0x140623C70 (PiDqDispatch.c)
 */

__int64 __fastcall PiDaDispatch(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  IRP *v3; // r8
  __int64 v4; // rbp
  PFILE_OBJECT FileObject; // r9
  unsigned __int64 FsContext; // rax
  unsigned int v7; // ebx
  wchar_t *Buffer; // rbx
  unsigned __int64 v10; // rdx
  wchar_t *v11; // rcx
  __int64 v12; // rdi
  int v13; // r11d
  int v14; // r10d

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = a2;
  v4 = a1;
  FileObject = CurrentStackLocation->FileObject;
  if ( !CurrentStackLocation->MajorFunction )
  {
    Buffer = FileObject->FileName.Buffer;
    if ( Buffer )
    {
      FsContext = 0LL;
      v10 = 0LL;
      while ( 1 )
      {
        v11 = (&IrpHandlingTable)[v10];
        v12 = (char *)Buffer - (char *)v11;
        do
        {
          v13 = *(wchar_t *)((char *)v11 + v12);
          v14 = *v11 - v13;
          if ( v14 )
            break;
          ++v11;
        }
        while ( v13 );
        if ( !v14 )
          break;
        ++FsContext;
        v10 += 3LL;
        if ( v10 >= 15 )
          goto LABEL_12;
      }
      if ( FsContext != -1LL )
      {
        FileObject->FsContext = (PVOID)FsContext;
        a2 = v3;
        a1 = v4;
        return ((unsigned int (__fastcall *)(__int64, IRP *, IRP *))*(&funcs_1405FC928 + 3 * FsContext))(a1, a2, v3);
      }
    }
LABEL_12:
    v7 = -1073741811;
    v3->IoStatus.Status = -1073741811;
LABEL_16:
    IofCompleteRequest(v3, 0);
    return v7;
  }
  FsContext = (unsigned __int64)FileObject->FsContext;
  if ( FsContext >= 5 )
  {
    v7 = -1073741808;
    a2->IoStatus.Status = -1073741808;
    goto LABEL_16;
  }
  return ((unsigned int (__fastcall *)(__int64, IRP *, IRP *))*(&funcs_1405FC928 + 3 * FsContext))(a1, a2, v3);
}
