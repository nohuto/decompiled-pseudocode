/*
 * XREFs of PopGetPolicyDeviceObject @ 0x1407B2238
 * Callers:
 *     PopConnectToPolicyDevice @ 0x1407B20AC (PopConnectToPolicyDevice.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     IoGetRelatedDeviceObject @ 0x14028F6E0 (IoGetRelatedDeviceObject.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwCreateFile @ 0x1403F4060 (ZwCreateFile.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F5C50 (ObReferenceObjectByHandleWithTag.c)
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
