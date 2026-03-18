/*
 * XREFs of ?GetByObjectName@DeviceObjectPointer@Io@@SGJPBU_UNICODE_STRING@@KKPAV12@@Z @ 0x1A14B4
 * Callers:
 *     ?SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QBEJKPAXK0KPAK@Z @ 0x1A16B5 (-SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QBEJKPAXK0KPAK@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??1DeviceObjectPointer@Io@@QAE@XZ @ 0x1A1445 (--1DeviceObjectPointer@Io@@QAE@XZ.c)
 */

NTSTATUS __userpurge Io::DeviceObjectPointer::GetByObjectName@<eax>(
        struct _UNICODE_STRING *a1@<ecx>,
        const struct _UNICODE_STRING *a2,
        void **a3,
        unsigned int a4,
        struct Io::DeviceObjectPointer *a5)
{
  NTSTATUS v5; // esi
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+10h] [ebp-40h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+28h] [ebp-28h] BYREF
  PVOID Object; // [esp+30h] [ebp-20h] BYREF
  void *FileHandle; // [esp+34h] [ebp-1Ch] BYREF
  PVOID v11; // [esp+38h] [ebp-18h]
  PDEVICE_OBJECT RelatedDeviceObject; // [esp+3Ch] [ebp-14h]
  _DWORD v13[3]; // [esp+40h] [ebp-10h] BYREF

  ObjectAttributes.SecurityQualityOfService = v13;
  FileHandle = 0;
  v11 = 0;
  RelatedDeviceObject = 0;
  ObjectAttributes.Length = 24;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.SecurityDescriptor = 0;
  v13[2] = 257;
  v13[0] = 12;
  v13[1] = 2;
  IoStatusBlock.Status = 0;
  IoStatusBlock.Information = 0;
  v5 = ZwOpenFile(&FileHandle, 0, &ObjectAttributes, &IoStatusBlock, 3u, 0x40u);
  if ( v5 >= 0 )
  {
    Object = 0;
    v5 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0);
    v11 = Object;
    if ( v5 >= 0 )
    {
      RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)Object);
      ObfReferenceObject(RelatedDeviceObject);
      *a3 = FileHandle;
      a3[1] = v11;
      a3[2] = RelatedDeviceObject;
      FileHandle = 0;
      v11 = 0;
      RelatedDeviceObject = 0;
    }
  }
  Io::DeviceObjectPointer::~DeviceObjectPointer((Io::DeviceObjectPointer *)&FileHandle);
  return v5;
}
