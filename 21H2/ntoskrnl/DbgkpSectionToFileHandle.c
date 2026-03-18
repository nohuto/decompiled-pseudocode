/*
 * XREFs of DbgkpSectionToFileHandle @ 0x14092AAC4
 * Callers:
 *     DbgkCreateThread @ 0x140702604 (DbgkCreateThread.c)
 *     DbgkMapViewOfSection @ 0x140757090 (DbgkMapViewOfSection.c)
 *     DbgkpPostFakeThreadMessages @ 0x140927D44 (DbgkpPostFakeThreadMessages.c)
 * Callees:
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     MmGetFileNameForSection @ 0x14096B158 (MmGetFileNameForSection.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

HANDLE __fastcall DbgkpSectionToFileHandle(__int64 a1)
{
  PVOID v1; // rdi
  NTSTATUS v2; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  PVOID P; // [rsp+88h] [rbp+18h] BYREF
  HANDLE FileHandle; // [rsp+90h] [rbp+20h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  P = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  IoStatusBlock = 0LL;
  if ( (int)MmGetFileNameForSection(a1, &P) < 0 )
    return 0LL;
  v1 = P;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)P;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 1600;
  v2 = ZwOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u);
  ExFreePoolWithTag(v1, 0);
  if ( v2 < 0 )
    return 0LL;
  else
    return FileHandle;
}
