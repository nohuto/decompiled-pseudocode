/*
 * XREFs of ApiSetpLoadSchemaImage @ 0x14095EFA4
 * Callers:
 *     ApiSetLoadSchemaEx @ 0x14095EA94 (ApiSetLoadSchemaEx.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1403FAA80 (ZwMapViewOfSection.c)
 *     ZwOpenFile @ 0x1403FABE0 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x1403FAEC0 (ZwCreateSection.c)
 */

__int64 __fastcall ApiSetpLoadSchemaImage(__int64 a1, UNICODE_STRING *a2, PVOID *a3, ULONG_PTR *a4)
{
  NTSTATUS v6; // ebx
  PVOID BaseAddress; // [rsp+58h] [rbp-39h] BYREF
  ULONG_PTR ViewSize; // [rsp+60h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES v10; // [rsp+68h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C8h] [rbp+37h] BYREF
  HANDLE SectionHandle; // [rsp+F8h] [rbp+67h] BYREF
  HANDLE FileHandle; // [rsp+100h] [rbp+6Fh] BYREF

  BaseAddress = 0LL;
  ViewSize = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a2;
  FileHandle = (HANDLE)-1LL;
  memset(&v10, 0, sizeof(v10));
  SectionHandle = (HANDLE)-1LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  IoStatusBlock = 0LL;
  v6 = ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 1u, 0);
  if ( v6 >= 0 )
  {
    v10.RootDirectory = 0LL;
    v10.ObjectName = 0LL;
    v10.Length = 48;
    v10.Attributes = 576;
    *(_OWORD *)&v10.SecurityDescriptor = 0LL;
    v6 = ZwCreateSection(&SectionHandle, 4u, &v10, 0LL, 2u, 0x8000000u, FileHandle);
    if ( v6 >= 0 )
    {
      v6 = ZwMapViewOfSection(
             SectionHandle,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &BaseAddress,
             0LL,
             0LL,
             0LL,
             &ViewSize,
             ViewUnmap,
             0,
             2u);
      if ( v6 >= 0 )
      {
        *a3 = BaseAddress;
        *a4 = ViewSize;
      }
    }
  }
  if ( SectionHandle != (HANDLE)-1LL )
    ZwClose(SectionHandle);
  if ( FileHandle != (HANDLE)-1LL )
    ZwClose(FileHandle);
  return (unsigned int)v6;
}
