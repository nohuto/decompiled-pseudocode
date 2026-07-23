/*
 * XREFs of IopOpenLinkOrRenameTarget @ 0x140698458
 * Callers:
 *     NtSetInformationFile @ 0x14035CFC0 (NtSetInformationFile.c)
 *     IoSetInformation @ 0x14077C290 (IoSetInformation.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     IoGetRelatedDeviceObject @ 0x14035C670 (IoGetRelatedDeviceObject.c)
 *     IopGetFileObjectExtension @ 0x140361530 (IopGetFileObjectExtension.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     IopGetBasicInformationFile @ 0x140698398 (IopGetBasicInformationFile.c)
 *     IoCreateFileEx @ 0x14069AD20 (IoCreateFileEx.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     IoConvertFileHandleToKernelHandle @ 0x14072A970 (IoConvertFileHandleToKernelHandle.c)
 */

__int64 __fastcall IopOpenLinkOrRenameTarget(HANDLE *a1, __int64 a2, __int64 a3, struct _FILE_OBJECT *a4)
{
  bool v4; // zf
  __int64 v7; // r15
  ACCESS_MASK v8; // edi
  HANDLE v10; // rsi
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // r15
  char v14; // al
  char v15; // cl
  PVOID *FileObjectExtension; // rax
  _QWORD *v17; // r8
  NTSTATUS v18; // ebx
  struct _FILE_OBJECT *v19; // rdi
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rbx
  HANDLE FileHandle; // [rsp+80h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-78h] BYREF
  PVOID Object; // [rsp+90h] [rbp-70h] BYREF
  _WORD v24[2]; // [rsp+98h] [rbp-68h] BYREF
  int v25; // [rsp+9Ch] [rbp-64h]
  __int64 v26; // [rsp+A0h] [rbp-60h]
  struct _IO_DRIVER_CREATE_CONTEXT DriverContext; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v28; // [rsp+C8h] [rbp-38h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+D0h] [rbp-30h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-28h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+108h] [rbp+8h] BYREF
  _OWORD v32[2]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v33; // [rsp+138h] [rbp+38h]

  FileHandle = 0LL;
  v4 = (a4->Flags & 0x800) == 0;
  Handle = 0LL;
  v7 = a2;
  *(&ObjectAttributes.Length + 1) = 0;
  v8 = 2;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v25 = 0;
  IoStatusBlock = 0LL;
  v10 = 0LL;
  HandleInformation = 0LL;
  memset(v32, 0, sizeof(v32));
  v33 = 0LL;
  memset(&DriverContext.Size + 1, 0, 22);
  if ( v4 )
  {
    result = IopGetBasicInformationFile(a4, (struct _IRP *)v32);
    if ( (int)result < 0 )
      return result;
    if ( (v33 & 0x10) != 0 )
      v8 = 4;
  }
  v12 = *(_QWORD *)(a3 + 8);
  if ( v12 )
  {
    if ( KeGetCurrentThread()->PreviousMode == 1 )
    {
      LOBYTE(a2) = 1;
      result = IoConvertFileHandleToKernelHandle(v12, a2, 0LL, 0LL, &Handle);
      if ( (int)result < 0 )
        return result;
      v10 = Handle;
    }
    else
    {
      v10 = *(HANDLE *)(a3 + 8);
      Handle = v10;
    }
  }
  v13 = *(_QWORD *)(v7 + 184);
  v24[0] = *(_WORD *)(a3 + 16);
  v24[1] = v24[0];
  v26 = a3 + 20;
  v14 = ~(unsigned __int8)(a4->Flags >> 11);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = v10;
  v15 = ~*(_BYTE *)(v13 - 70);
  v28 = 1LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v24;
  ObjectAttributes.Attributes = v14 & 0x40 | ((v15 & 1) << 10) | 0x200;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  DriverContext.Size = 40;
  memset(&DriverContext.Size + 1, 0, 22);
  FileObjectExtension = (PVOID *)IopGetFileObjectExtension((__int64)a4, 1, 0LL);
  if ( FileObjectExtension )
    DriverContext.DeviceObjectHint = *FileObjectExtension;
  DriverContext.TxnParameters = (PTXN_PARAMETER_BLOCK)IopGetFileObjectExtension((__int64)a4, 0, v17);
  v18 = IoCreateFileEx(
          &FileHandle,
          v8 | 0x100000,
          &ObjectAttributes,
          &IoStatusBlock,
          0LL,
          0,
          3u,
          1u,
          0x4000u,
          0LL,
          0,
          CreateFileTypeNone,
          0LL,
          ((*(_BYTE *)(v13 - 70) & 1) == 0) | 0x104,
          &DriverContext);
  if ( v18 >= 0 )
  {
    Object = 0LL;
    v18 = ObReferenceObjectByHandle(FileHandle, v8, (POBJECT_TYPE)IoFileObjectType, 0, &Object, &HandleInformation);
    if ( v18 < 0 )
    {
      ObCloseHandle(FileHandle, 0);
    }
    else
    {
      v19 = (struct _FILE_OBJECT *)Object;
      HalPutDmaAdapter((PADAPTER_OBJECT)Object);
      RelatedDeviceObject = IoGetRelatedDeviceObject(a4);
      if ( IoGetRelatedDeviceObject(v19) == RelatedDeviceObject )
      {
        *(_QWORD *)(v13 - 48) = v19;
        v18 = 0;
        *a1 = FileHandle;
      }
      else
      {
        ObCloseHandle(FileHandle, 0);
        v18 = -1073741612;
      }
    }
  }
  if ( v10 )
  {
    if ( KeGetCurrentThread()->PreviousMode == 1 )
      ObCloseHandle(Handle, 0);
  }
  return (unsigned int)v18;
}
