/*
 * XREFs of IoReplaceFileObjectName @ 0x1409364A0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoReplaceFileObjectName(PFILE_OBJECT FileObject, PWSTR NewFileName, USHORT FileNameLength)
{
  USHORT MaximumLength; // bx
  size_t v5; // rdi
  USHORT v7; // ax
  wchar_t *Pool2; // rbp
  wchar_t *Buffer; // rcx
  wchar_t *v11; // rcx

  MaximumLength = FileObject->FileName.MaximumLength;
  v5 = FileNameLength;
  if ( FileNameLength > MaximumLength )
  {
    MaximumLength = 56;
    if ( FileNameLength >= 0x38u )
    {
      MaximumLength = 120;
      if ( FileNameLength >= 0x78u )
      {
        v7 = 248;
        if ( FileNameLength >= 0xF8u )
          v7 = FileNameLength;
        MaximumLength = v7;
      }
    }
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, MaximumLength, 1833856841LL);
    if ( !Pool2 )
      return -1073741670;
    Buffer = FileObject->FileName.Buffer;
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0);
    FileObject->FileName.Buffer = Pool2;
    FileObject->FileName.MaximumLength = MaximumLength;
  }
  v11 = FileObject->FileName.Buffer;
  FileObject->FileName.Length = v5;
  memset(v11, 0, MaximumLength);
  memmove(FileObject->FileName.Buffer, NewFileName, v5);
  return 0;
}
