/*
 * XREFs of SmpUtilsGetControlDevice @ 0x14092B0CC
 * Callers:
 *     SmcCacheManagerStart @ 0x140929F4C (SmcCacheManagerStart.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     IoGetRelatedDeviceObject @ 0x14028F6E0 (IoGetRelatedDeviceObject.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwCreateFile @ 0x1403F4060 (ZwCreateFile.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall SmpUtilsGetControlDevice(__int64 a1, _QWORD *a2, PDEVICE_OBJECT *a3)
{
  NTSTATUS v5; // ebx
  HANDLE v6; // rax
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp+17h] BYREF
  HANDLE FileHandle; // [rsp+D0h] [rbp+67h] BYREF
  PVOID Object; // [rsp+E8h] [rbp+7Fh] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\RdyBoost");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwCreateFile(&FileHandle, 0x12019Fu, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x20u, 0LL, 0);
  if ( v5 >= 0 )
  {
    Object = 0LL;
    v5 = ObReferenceObjectByHandle(FileHandle, 3u, 0LL, 0, &Object, 0LL);
    if ( v5 >= 0 )
    {
      *a3 = IoGetRelatedDeviceObject((PFILE_OBJECT)Object);
      v6 = FileHandle;
      FileHandle = 0LL;
      v5 = 0;
      *a2 = v6;
    }
    if ( Object )
      HalPutDmaAdapter((PADAPTER_OBJECT)Object);
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v5;
}
