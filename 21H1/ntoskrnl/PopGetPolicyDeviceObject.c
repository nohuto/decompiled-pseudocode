/*
 * XREFs of PopGetPolicyDeviceObject @ 0x1407AF054
 * Callers:
 *     PopConnectToPolicyDevice @ 0x1407AEEC8 (PopConnectToPolicyDevice.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140252E60 (IoGetRelatedDeviceObject.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwCreateFile @ 0x1403F2DD0 (ZwCreateFile.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14062B1C0 (ObReferenceObjectByHandleWithTag.c)
 */

PDEVICE_OBJECT __fastcall PopGetPolicyDeviceObject(UNICODE_STRING *a1, _QWORD *a2)
{
  PDEVICE_OBJECT v2; // rdi
  PVOID v4; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp+17h] BYREF
  HANDLE FileHandle; // [rsp+C8h] [rbp+67h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+77h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  v2 = 0LL;
  ObjectAttributes.ObjectName = a1;
  Object = 0LL;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  IoStatusBlock = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  if ( ZwCreateFile(&FileHandle, 0x1F01FFu, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 3u, 1u, 0, 0LL, 0) >= 0 )
  {
    if ( ObReferenceObjectByHandleWithTag(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, 0x64506F50u, &Object, 0LL) >= 0 )
    {
      v4 = Object;
      RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)Object);
      v2 = RelatedDeviceObject;
      if ( RelatedDeviceObject )
      {
        ObfReferenceObjectWithTag(RelatedDeviceObject, 0x64506F50u);
        *a2 = v4;
        v4 = 0LL;
      }
      if ( v4 )
        ObfDereferenceObjectWithTag(v4, 0x64506F50u);
    }
    if ( FileHandle )
      ZwClose(FileHandle);
  }
  return v2;
}
