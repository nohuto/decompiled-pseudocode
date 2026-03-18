/*
 * XREFs of _GetDeviceObjectPointer@24 @ 0xE6FF0
 * Callers:
 *     _IsLegacyTouchPadDevice@4 @ 0xE6B7C (_IsLegacyTouchPadDevice@4.c)
 *     _IsMouseDeviceOnIgnoreList@4 @ 0xE6D1C (_IsMouseDeviceOnIgnoreList@4.c)
 *     _GetPointerDeviceKey@12 @ 0x1442BA (_GetPointerDeviceKey@12.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall GetDeviceObjectPointer(
        struct _UNICODE_STRING *a1,
        ACCESS_MASK a2,
        int a3,
        void **a4,
        PVOID *a5,
        PDEVICE_OBJECT *a6)
{
  NTSTATUS v6; // esi
  PDEVICE_OBJECT RelatedDeviceObject; // eax
  struct _FILE_OBJECT *v9; // [esp-4h] [ebp-4Ch]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+Ch] [ebp-3Ch] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+24h] [ebp-24h] BYREF
  PDEVICE_OBJECT *v12; // [esp+2Ch] [ebp-1Ch]
  PVOID Object; // [esp+30h] [ebp-18h] BYREF
  void *FileHandle; // [esp+34h] [ebp-14h] BYREF
  _DWORD v15[3]; // [esp+38h] [ebp-10h] BYREF

  v12 = a6;
  ObjectAttributes.SecurityQualityOfService = v15;
  FileHandle = 0;
  IoStatusBlock.Status = 0;
  IoStatusBlock.Information = 0;
  v15[2] = 257;
  ObjectAttributes.Length = 24;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.SecurityDescriptor = 0;
  v15[0] = 12;
  v15[1] = 2;
  v6 = ZwOpenFile(&FileHandle, a2, &ObjectAttributes, &IoStatusBlock, 3u, 0x40u);
  if ( v6 >= 0 )
  {
    Object = 0;
    v6 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0);
    if ( v6 < 0 )
    {
      ZwClose(FileHandle);
    }
    else
    {
      v9 = (struct _FILE_OBJECT *)Object;
      *a5 = Object;
      RelatedDeviceObject = IoGetRelatedDeviceObject(v9);
      *v12 = RelatedDeviceObject;
      *a4 = FileHandle;
    }
  }
  return v6;
}
