/*
 * XREFs of IoReplaceFileObjectName @ 0x140734DE0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall IoReplaceFileObjectName(PFILE_OBJECT FileObject, PWSTR NewFileName, USHORT FileNameLength)
{
  USHORT MaximumLength; // bx
  size_t v5; // rdi
  wchar_t *Buffer; // rcx
  USHORT v9; // ax
  wchar_t *PoolWithTag; // rbp
  wchar_t *v11; // rcx

  MaximumLength = FileObject->FileName.MaximumLength;
  v5 = FileNameLength;
  if ( FileNameLength <= MaximumLength )
  {
LABEL_2:
    Buffer = FileObject->FileName.Buffer;
    FileObject->FileName.Length = v5;
    memset(Buffer, 0, MaximumLength);
    memmove(FileObject->FileName.Buffer, NewFileName, v5);
    return 0;
  }
  MaximumLength = 56;
  if ( FileNameLength >= 0x38u )
  {
    MaximumLength = 120;
    if ( FileNameLength >= 0x78u )
    {
      v9 = 248;
      if ( FileNameLength >= 0xF8u )
        v9 = FileNameLength;
      MaximumLength = v9;
    }
  }
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, MaximumLength, 0x6D4E6F49u);
  if ( PoolWithTag )
  {
    v11 = FileObject->FileName.Buffer;
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
    FileObject->FileName.Buffer = PoolWithTag;
    FileObject->FileName.MaximumLength = MaximumLength;
    goto LABEL_2;
  }
  return -1073741670;
}
